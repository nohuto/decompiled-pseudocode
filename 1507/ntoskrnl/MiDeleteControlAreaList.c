/*
 * XREFs of MiDeleteControlAreaList @ 0x140211368
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteControlAreaList(__int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v3; // rbx
  unsigned int v4; // ebx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E740);
    }
    else
    {
      v4 = 0;
      if ( _interlockedbittestandset(&dword_14034E740, 0x1Fu) )
        v4 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E740);
      while ( (dword_14034E740 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (dword_14034E740 & 0x40000000) == 0 )
          _InterlockedCompareExchange(&dword_14034E740, dword_14034E740 | 0x40000000, dword_14034E740);
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
    }
    v3 = *(_QWORD **)(a1 + 1432);
    if ( v3 )
      *(_QWORD *)(a1 + 1432) = *v3;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E740, retaddr);
    else
      dword_14034E740 = 0;
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( !v3 )
      break;
    MiDeleteControlArea((__int64)v3);
  }
  return result;
}
