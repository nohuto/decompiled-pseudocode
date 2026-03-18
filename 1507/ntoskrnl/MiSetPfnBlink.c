/*
 * XREFs of MiSetPfnBlink @ 0x140100DBC
 * Callers:
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiReplenishPageSlist @ 0x1401009F0 (MiReplenishPageSlist.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiUnlinkPageFromBadList @ 0x14022649C (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnBlink(__int64 a1, __int64 a2, int a3)
{
  signed __int64 v5; // rdx
  __int64 v6; // r10
  signed __int64 result; // rax
  bool i; // zf
  signed __int64 v9; // rcx

  if ( a3 == 1 )
  {
    result = (a2 ^ *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(a1 + 24) ^= result;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    v6 = a2 & 0xFFFFFFFFFLL;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v6 | v5 & 0xFFFFFFF000000000uLL, v5);
    for ( i = v5 == result; !i; i = v9 == result )
    {
      v9 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)(a1 + 24),
                 v6 | result & 0xFFFFFFF000000000uLL,
                 result);
    }
  }
  return result;
}
