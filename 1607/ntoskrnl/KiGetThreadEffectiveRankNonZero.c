/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0
 * Callers:
 *     KiDirectSwitchThread @ 0x1400527F0 (KiDirectSwitchThread.c)
 *     KiDeferredReadyThread @ 0x140056640 (KiDeferredReadyThread.c)
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KiChooseLowestRankedThread @ 0x140098944 (KiChooseLowestRankedThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CDCB8 (KiDeferGroupSchedulingPreemption.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1400CDE50 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x1400CE030 (KiIsThreadRankNonZero.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400D19F0 (KiMoveScbThreadsToNewReadylist.c)
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 *     KiAddThreadToReadyQueue @ 0x1401D7BA8 (KiAddThreadToReadyQueue.c)
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
