/*
 * XREFs of MmLockLoadedModuleListExclusive @ 0x14002551C
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x14002533C (RtlRemoveInvertedFunctionTable.c)
 *     MiProcessLoaderEntry @ 0x1400253E0 (MiProcessLoaderEntry.c)
 *     RtlInsertInvertedFunctionTable @ 0x1401532CC (RtlInsertInvertedFunctionTable.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmLockLoadedModuleListExclusive(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // al
  unsigned int v2; // ebx
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
    __writecr8(0xFuLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PsLoadedModuleSpinLock);
  v2 = 0;
  if ( _interlockedbittestandset(&PsLoadedModuleSpinLock, 0x1Fu) )
    v2 = ExpWaitForSpinLockExclusiveAndAcquire(&PsLoadedModuleSpinLock);
  while ( 1 )
  {
    result = (unsigned int)PsLoadedModuleSpinLock;
    if ( (PsLoadedModuleSpinLock & 0xBFFFFFFF) == 0x80000000 )
      break;
    if ( (PsLoadedModuleSpinLock & 0x40000000) == 0 )
      _InterlockedCompareExchange(&PsLoadedModuleSpinLock, PsLoadedModuleSpinLock | 0x40000000, PsLoadedModuleSpinLock);
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
  }
  return result;
}
