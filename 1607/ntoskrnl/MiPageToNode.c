/*
 * XREFs of MiPageToNode @ 0x14001BA54
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B760 (MiInsertLargePageInNodeListHelper.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MiTryUnlinkNodeLargePage @ 0x14008A2E0 (MiTryUnlinkNodeLargePage.c)
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiObtainTransitionPage @ 0x140107214 (MiObtainTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiDescribePageRun @ 0x14013B2C0 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14013B380 (MiInitializeUnusablePfns.c)
 *     MiReplaceLockedPage @ 0x1401EB18C (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD69C (MiQueueLargeFreeZeroRebuild.c)
 *     MxInitializeFreeNodeDescriptors @ 0x14078E924 (MxInitializeFreeNodeDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14078EA78 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 *     MxMapPfnRange @ 0x14079720C (MxMapPfnRange.c)
 *     MxCreatePfn @ 0x140797D78 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1407B28EC (MiFreeBootPageTable.c)
 *     MxSwitchDescriptors @ 0x1407D0EB4 (MxSwitchDescriptors.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, int a2)
{
  __int64 v2; // r8
  KIRQL v5; // bl
  unsigned int v6; // edx
  unsigned int i; // r9d
  unsigned int v8; // edi

  v2 = qword_1403269C0;
  if ( !qword_1403269C0 )
    return 0LL;
  if ( qword_140327208 )
  {
    if ( a2 == 1 )
    {
      v5 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_1403266B0);
    }
    else
    {
      v5 = ExAcquireSpinLockShared(&dword_1403266B0);
    }
    v2 = qword_1403269C0;
  }
  else
  {
    v5 = 18;
  }
  v6 = dword_1403269B8;
  if ( a1 < *(_QWORD *)(v2 + 16LL * (unsigned int)dword_1403269B8) )
  {
    do
      --v6;
    while ( a1 < *(_QWORD *)(v2 + 16LL * v6) );
  }
  else
  {
    for ( i = dword_1403269B8 + 1; a1 >= *(_QWORD *)(v2 + 16LL * i); ++v6 )
      ++i;
  }
  v8 = *(_DWORD *)(v2 + 16LL * v6 + 8);
  dword_1403269B8 = v6;
  if ( v5 != 18 )
  {
    if ( v5 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_1403266B0);
    else
      ExReleaseSpinLockShared(&dword_1403266B0, v5);
  }
  return v8;
}
