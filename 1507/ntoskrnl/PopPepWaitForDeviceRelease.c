/*
 * XREFs of PopPepWaitForDeviceRelease @ 0x14023C834
 * Callers:
 *     PopPepUnregisterDevice @ 0x1406B72FC (PopPepUnregisterDevice.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopPepWaitForDeviceRelease(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // edi
  signed __int32 v4; // eax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (volatile signed __int32 *)(a1 + 64);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    v3 = 0;
    if ( _interlockedbittestandset(v1, 0x1Fu) )
      v3 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 64));
    while ( 1 )
    {
      v4 = *v1;
      if ( (*v1 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v4 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v1, v4 | 0x40000000, v4);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v1, retaddr);
  else
    *v1 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
