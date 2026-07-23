/*
 * XREFs of MiPageToNode @ 0x14001B5D4
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400899E0 (MiTryUnlinkNodeLargePage.c)
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiObtainTransitionPage @ 0x140104F94 (MiObtainTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiDescribePageRun @ 0x14013B830 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14013B8F0 (MiInitializeUnusablePfns.c)
 *     MiReplaceLockedPage @ 0x1401EAFB8 (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1401FD4C8 (MiQueueLargeFreeZeroRebuild.c)
 *     MxInitializeFreeNodeDescriptors @ 0x14078E924 (MxInitializeFreeNodeDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14078EA78 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 *     MxMapPfnRange @ 0x14079720C (MxMapPfnRange.c)
 *     MxCreatePfn @ 0x140797D78 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1407B28EC (MiFreeBootPageTable.c)
 *     MxSwitchDescriptors @ 0x1407D0EB4 (MxSwitchDescriptors.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, int a2)
{
  __int64 v2; // r8
  KIRQL v5; // bl
  unsigned int v6; // edx
  unsigned int i; // r9d
  unsigned int v8; // edi

  v2 = qword_140326A00;
  if ( !qword_140326A00 )
    return 0LL;
  if ( qword_140327248 )
  {
    if ( a2 == 1 )
    {
      v5 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_1403266F0);
    }
    else
    {
      v5 = ExAcquireSpinLockShared(&dword_1403266F0);
    }
    v2 = qword_140326A00;
  }
  else
  {
    v5 = 18;
  }
  v6 = dword_1403269F8;
  if ( a1 < *(_QWORD *)(v2 + 16LL * (unsigned int)dword_1403269F8) )
  {
    do
      --v6;
    while ( a1 < *(_QWORD *)(v2 + 16LL * v6) );
  }
  else
  {
    for ( i = dword_1403269F8 + 1; a1 >= *(_QWORD *)(v2 + 16LL * i); ++v6 )
      ++i;
  }
  v8 = *(_DWORD *)(v2 + 16LL * v6 + 8);
  dword_1403269F8 = v6;
  if ( v5 != 18 )
  {
    if ( v5 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_1403266F0);
    else
      ExReleaseSpinLockShared(&dword_1403266F0, v5);
  }
  return v8;
}
