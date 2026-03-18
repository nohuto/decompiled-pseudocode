/*
 * XREFs of MiPageToNode @ 0x14005AA30
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiObtainTransitionPage @ 0x14005A730 (MiObtainTransitionPage.c)
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x14005BFB0 (MiAllocateMostlyContiguous.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140159228 (MiTryUnlinkNodeLargePage.c)
 *     MiDescribePageRun @ 0x14015F634 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x140212A54 (MiInitializeDynamicPfns.c)
 *     MiSwitchToPfns @ 0x1407C4AD4 (MiSwitchToPfns.c)
 *     MiInitializeUnusablePfn @ 0x1407C4D2C (MiInitializeUnusablePfn.c)
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1407C56C0 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x1407C59A0 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1407C6010 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiFreeBootPageTable @ 0x1407C67D8 (MiFreeBootPageTable.c)
 *     MxCreatePfn @ 0x1407C70B4 (MxCreatePfn.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  int v4; // ett
  unsigned int v5; // ecx
  unsigned int i; // r8d
  unsigned int v7; // ebx
  int v9; // ett
  void *retaddr; // [rsp+68h] [rbp+8h]

  if ( !qword_14034EB80 )
    return 0LL;
  if ( a2 == 1 )
  {
    CurrentIrql = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
    {
      _m_prefetchw(&dword_14034E8B0);
      v9 = dword_14034E8B0 & 0x7FFFFFFF;
      if ( v9 == _InterlockedCompareExchange(
                   &dword_14034E8B0,
                   (dword_14034E8B0 & 0x7FFFFFFF) + 1,
                   dword_14034E8B0 & 0x7FFFFFFF) )
        goto LABEL_5;
LABEL_15:
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034E8B0);
      goto LABEL_5;
    }
LABEL_22:
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034E8B0);
    goto LABEL_5;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    goto LABEL_22;
  _m_prefetchw(&dword_14034E8B0);
  v4 = dword_14034E8B0 & 0x7FFFFFFF;
  if ( v4 != _InterlockedCompareExchange(
               &dword_14034E8B0,
               (dword_14034E8B0 & 0x7FFFFFFF) + 1,
               dword_14034E8B0 & 0x7FFFFFFF) )
    goto LABEL_15;
LABEL_5:
  v5 = dword_14034EB78;
  if ( a1 < *(_QWORD *)(qword_14034EB80 + 16LL * (unsigned int)dword_14034EB78) )
  {
    do
      --v5;
    while ( a1 < *(_QWORD *)(qword_14034EB80 + 16LL * v5) );
  }
  else
  {
    for ( i = dword_14034EB78 + 1; a1 >= *(_QWORD *)(qword_14034EB80 + 16LL * i); ++v5 )
      ++i;
  }
  v7 = *(_DWORD *)(qword_14034EB80 + 16LL * v5 + 8);
  dword_14034EB78 = v5;
  if ( CurrentIrql != 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034E8B0, retaddr);
    }
    else
    {
      _InterlockedAnd(&dword_14034E8B0, 0xBFFFFFFF);
      _InterlockedDecrement(&dword_14034E8B0);
    }
    __writecr8(CurrentIrql);
    return v7;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034E8B0, retaddr);
    return v7;
  }
  _InterlockedAnd(&dword_14034E8B0, 0xBFFFFFFF);
  _InterlockedDecrement(&dword_14034E8B0);
  return v7;
}
