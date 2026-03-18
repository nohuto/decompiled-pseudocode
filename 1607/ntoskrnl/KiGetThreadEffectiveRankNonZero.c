/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1400D0220
 * Callers:
 *     KiDirectSwitchThread @ 0x140052C70 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     KiSelectReadyThread @ 0x14005C1C0 (KiSelectReadyThread.c)
 *     KiSelectReadyThreadEx @ 0x14005DF30 (KiSelectReadyThreadEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KiChooseLowestRankedThread @ 0x140099144 (KiChooseLowestRankedThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CFE18 (KiDeferGroupSchedulingPreemption.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400CFFB0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x1400D0190 (KiIsThreadRankNonZero.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D20C0 (KiGroupSchedulingQuantumEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400D3B50 (KiMoveScbThreadsToNewReadylist.c)
 *     KeAccumulateTicks @ 0x1400DC3C0 (KeAccumulateTicks.c)
 *     KiAddThreadToReadyQueue @ 0x1401D7D7C (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  bool v5; // r11
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // r8

  v5 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v7 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x100) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    v8 = a2;
    do
    {
      if ( (*(_BYTE *)(v8 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_12;
      }
      v8 = *(_QWORD *)(v8 + 408);
    }
    while ( v8 );
    do
    {
      result = (unsigned int)(*(_DWORD *)(a2 + 116) + result);
      if ( v5 )
      {
        v7 += **(_DWORD **)(a2 + 120);
      }
      else if ( (_DWORD)result )
      {
        break;
      }
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( a2 );
  }
LABEL_12:
  if ( a5 )
    *a5 = v7 != 0;
  return result;
}
