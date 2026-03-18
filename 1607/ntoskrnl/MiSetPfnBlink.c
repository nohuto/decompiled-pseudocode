/*
 * XREFs of MiSetPfnBlink @ 0x140107ACC
 * Callers:
 *     MiReplenishPageSlist @ 0x140064330 (MiReplenishPageSlist.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiLargeFreePageToMdl @ 0x14008A124 (MiLargeFreePageToMdl.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140121360 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x1401238C0 (MiDiscardTransitionPte.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x1401F040C (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401F3054 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     MiGet64KPage @ 0x1401FB7C4 (MiGet64KPage.c)
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
