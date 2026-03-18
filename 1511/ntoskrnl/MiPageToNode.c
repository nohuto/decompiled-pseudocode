/*
 * XREFs of MiPageToNode @ 0x140071380
 * Callers:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140019BFC (MiTryUnlinkNodeLargePage.c)
 *     MiObtainTransitionPage @ 0x140071020 (MiObtainTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400BEC20 (MiAllocateMostlyContiguous.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiDescribePageRun @ 0x140131A08 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x1401D1AA4 (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 *     MiInitializeUnusablePfn @ 0x14074676C (MiInitializeUnusablePfn.c)
 *     MxCreateFreePfns @ 0x140746A50 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140746FA8 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140747288 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1407477A8 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiFreeBootPageTable @ 0x140747AC8 (MiFreeBootPageTable.c)
 *     MxCreatePfn @ 0x140747FEC (MxCreatePfn.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // di
  unsigned int v4; // edx
  unsigned int i; // r9d
  unsigned int v6; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !qword_1402FE6D0 )
    return 0LL;
  if ( a2 == 1 )
  {
    v3 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE3E8);
  }
  else
  {
    v3 = ExAcquireSpinLockShared(&dword_1402FE3E8);
  }
  v4 = dword_1402FE6C8;
  if ( a1 < *(_QWORD *)(qword_1402FE6D0 + 16LL * (unsigned int)dword_1402FE6C8) )
  {
    do
      --v4;
    while ( a1 < *(_QWORD *)(qword_1402FE6D0 + 16LL * v4) );
  }
  else
  {
    for ( i = dword_1402FE6C8 + 1; a1 >= *(_QWORD *)(qword_1402FE6D0 + 16LL * i); ++v4 )
      ++i;
  }
  v6 = *(_DWORD *)(qword_1402FE6D0 + 16LL * v4 + 8);
  dword_1402FE6C8 = v4;
  if ( v3 == 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE3E8);
    return v6;
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_1402FE3E8, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_1402FE3E8, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_1402FE3E8);
    }
    __writecr8(v3);
    return v6;
  }
}
