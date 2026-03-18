/*
 * XREFs of MiSetPfnBlink @ 0x140012C74
 * Callers:
 *     MiReplenishPageSlist @ 0x140012870 (MiReplenishPageSlist.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x1401DFB88 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401E0238 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
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
