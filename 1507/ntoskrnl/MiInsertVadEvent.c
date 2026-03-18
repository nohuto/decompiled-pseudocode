/*
 * XREFs of MiInsertVadEvent @ 0x140089D40
 * Callers:
 *     MiWaitForVadDeletion @ 0x14022F098 (MiWaitForVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x14051C46C (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1405563AC (MiCreateRotateView.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, __int64 *a2, int a3)
{
  _KPROCESS *Process; // r14
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned int v8; // r15d
  signed __int32 v9; // eax
  __int64 result; // rax

  if ( a3 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v6 = (volatile signed __int32 *)&Process[1].IdealNode[8];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
    }
    else
    {
      v8 = 0;
      if ( _interlockedbittestandset(v6, 0x1Fu) )
        v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
      while ( 1 )
      {
        v9 = *v6;
        if ( (*v6 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v9 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v6, v9 | 0x40000000, v9);
        if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v8);
      }
    }
  }
  else
  {
    CurrentIrql = 17;
    Process = 0LL;
  }
  result = *(_QWORD *)(a1 + 56);
  *a2 = result;
  *(_QWORD *)(a1 + 56) = a2;
  if ( CurrentIrql != 17 )
    return MiUnlockWorkingSetExclusive(&Process[1].IdealNode[8], CurrentIrql);
  return result;
}
