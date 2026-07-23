/*
 * XREFs of MiSetPfnBlink @ 0x14010584C
 * Callers:
 *     MiReplenishPageSlist @ 0x140063EB0 (MiReplenishPageSlist.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiLargeFreePageToMdl @ 0x140089824 (MiLargeFreePageToMdl.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiGetEnclavePage @ 0x1401F0238 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401F2E80 (MiUnlinkPageFromBadList.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MiGet64KPage @ 0x1401FB5F0 (MiGet64KPage.c)
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
