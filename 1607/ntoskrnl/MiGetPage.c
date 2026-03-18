/*
 * XREFs of MiGetPage @ 0x14003DA50
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1400019C0 (MiAllocateKernelStackPages.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     MiMigratePfn @ 0x140036E10 (MiMigratePfn.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiGetPageChain @ 0x14003D480 (MiGetPageChain.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BF5B0 (MiBuildMdlForMappedFileFault.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiFindNonPagedPoolPages @ 0x1400E7060 (MiFindNonPagedPoolPages.c)
 *     MiGetSystemPage @ 0x1400FDC54 (MiGetSystemPage.c)
 *     MiGetPageTablePages @ 0x140102808 (MiGetPageTablePages.c)
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 *     MiObtainTransitionPage @ 0x140107214 (MiObtainTransitionPage.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiDoneWithThisPageGetAnother @ 0x14010AD3C (MiDoneWithThisPageGetAnother.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiAllocateMdlPagesByLists @ 0x14010F82C (MiAllocateMdlPagesByLists.c)
 *     MiGetFileHashPage @ 0x140114CEC (MiGetFileHashPage.c)
 *     MiCreateZeroThreadContext @ 0x14013AB00 (MiCreateZeroThreadContext.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x1401EB18C (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPages @ 0x1404E6034 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiAllocateDriverPage @ 0x140526790 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x140656D60 (MiAllocateTopLevelPage.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A01C (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x140661E34 (MiFillPerSessionProtos.c)
 *     MiInitializeGapFrames @ 0x14078F08C (MiInitializeGapFrames.c)
 *     MxSwapPages @ 0x140797EAC (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 *     MiComputeOptimalZeroPath @ 0x1407A6288 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001D088 (MiChangePageAttribute.c)
 *     MiGetFreeOrZeroPage @ 0x14003DC80 (MiGetFreeOrZeroPage.c)
 *     MiPageAvailable @ 0x14008A428 (MiPageAvailable.c)
 *     MiReleaseFreshPage @ 0x1400AC5F4 (MiReleaseFreshPage.c)
 *     MiPfnZeroingNeeded @ 0x1401071D8 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x14010A488 (MiZeroPhysicalPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCheckNodeChannelStandbyCount @ 0x1401F2BE8 (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // r12d
  __int64 v5; // r14
  unsigned int v6; // ebp
  unsigned int v7; // edi
  unsigned int v9; // r8d
  char *v10; // rsi
  bool v11; // cc
  ULONG_PTR FreeOrZeroPage; // r14
  __int64 v13; // rsi
  unsigned int v14; // ecx
  int v16; // edx
  int v17; // edx
  BOOL v18; // r15d
  __int64 v19; // rcx
  int v20; // ecx
  char *v21; // rax
  __int64 v22; // r8
  int v23; // edx
  BOOL v24; // [rsp+20h] [rbp-58h]
  char v25; // [rsp+24h] [rbp-54h] BYREF
  char v26; // [rsp+25h] [rbp-53h] BYREF
  int v27; // [rsp+28h] [rbp-50h]
  unsigned __int8 *v28; // [rsp+30h] [rbp-48h]
  unsigned int v30; // [rsp+88h] [rbp+10h]
  unsigned int v31; // [rsp+98h] [rbp+20h]

  v3 = (unsigned int)MmNumberOfChannels;
  v4 = a2;
  v5 = a1;
  v6 = a2 >> byte_1403269C9;
  v7 = 1;
  v31 = a2 >> byte_1403269C9;
  v9 = a2 >> byte_1403269C9;
  v24 = 1;
  v10 = 0LL;
  v27 = 0;
  v30 = 0;
  while ( 1 )
  {
    v11 = (unsigned int)v3 <= 1;
LABEL_3:
    if ( !v11 )
    {
      v19 = *(_QWORD *)(v5 + 48) + 2184LL * v9;
      v10 = (char *)(v19 + 2161);
      if ( v9 == v6 )
      {
        v24 = (*(_BYTE *)(v19 + 2136) & 1) == 0;
        if ( (a3 & 8) != 0 )
          v10 = (char *)(v19 + 2165);
        if ( (a3 & 0x10) != 0 && (*(_BYTE *)(v19 + 2136) & 1) != 0 )
        {
          v20 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v4 >> byte_1403269D8));
          v21 = &v26;
          v25 = MiChannelMaximumPowerOf2Mask & (v4 >> byte_1403269D8);
          if ( (_DWORD)v3 )
          {
            v22 = v3;
            do
            {
              v23 = (unsigned __int8)*v10;
              if ( v23 != v20 )
                *v21++ = v23;
              ++v10;
              --v22;
            }
            while ( v22 );
            v9 = v31;
          }
          v10 = &v25;
        }
        v30 = (unsigned __int8)*v10;
      }
    }
    v28 = (unsigned __int8 *)&v10[v3];
    while ( 1 )
    {
      if ( v10 )
        v4 = v4 & dword_1403269F8 | (v9 << byte_1403269C9) | ((unsigned __int8)*v10 << byte_1403269D8);
      FreeOrZeroPage = MiGetFreeOrZeroPage(v5, v4, a3);
      if ( FreeOrZeroPage != -1LL )
        goto LABEL_8;
      v5 = a1;
      if ( !(unsigned int)MiPageAvailable(a1, a3) )
        break;
      if ( ++v10 == (char *)v28 )
      {
        v16 = v27;
        goto LABEL_24;
      }
      v9 = v31;
    }
    v16 = (unsigned __int16)KeNumberNodes - 1;
LABEL_24:
    if ( (a3 & 0x1000) != 0 )
      return -1LL;
    v17 = v16 + 1;
    v27 = v17;
    if ( v17 == (unsigned __int16)KeNumberNodes )
      break;
    v9 = *((unsigned __int16 *)qword_1403269A8 + v17 + v6 * (unsigned __int16)KeNumberNodes);
    v31 = v9;
    v11 = (unsigned int)v3 <= 1;
    if ( (_DWORD)v3 != 1 )
      goto LABEL_3;
    v10 = 0LL;
    v4 = v4 & dword_1403269F8 | (v9 << byte_1403269C9);
  }
  if ( (a3 & 1) != 0 || (a3 & 0x10) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(a1, v6, v30) )
    return -1LL;
  FreeOrZeroPage = MiRemoveLowestPriorityStandbyPage(a1, 8LL, a3);
  if ( FreeOrZeroPage == -1LL )
    return -1LL;
LABEL_8:
  v13 = 48 * FreeOrZeroPage - 0x58000000000LL;
  v14 = v30;
  if ( ((*(_QWORD *)(v13 + 40) >> 58) & 0x3F) == v6 )
  {
    if ( ((*(_QWORD *)(v13 + 40) >> 36) & 3) == v30 )
      goto LABEL_10;
    v18 = v24;
    if ( v24 )
      goto LABEL_10;
  }
  else
  {
    v18 = v24;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x20) == 0 )
    {
      FreeOrZeroPage = MiSwapNumaStandbyPage(FreeOrZeroPage, v6, v30, a3);
      v14 = v30;
      v13 = 48 * FreeOrZeroPage - 0x58000000000LL;
    }
    if ( (a3 & 0x10) != 0
      && ((unsigned __int8)HIBYTE(*(_QWORD *)(v13 + 40)) >> 2 != v6 || ((*(_QWORD *)(v13 + 40) >> 36) & 3) != v14
                                                                    && !v18) )
    {
      MiReleaseFreshPage(v13);
      return -1LL;
    }
  }
LABEL_10:
  if ( (a3 & 0x80u) == 0 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v7 = MiPlatformCacheAttributes;
    }
    else
    {
      v7 = 3;
      if ( (a3 & 0x200) != 0 )
        v7 = dword_1403A92D0;
    }
  }
  if ( (a3 & 0x40) != 0 && (unsigned int)MiPfnZeroingNeeded(v13, v7) )
  {
    MiZeroPhysicalPage(FreeOrZeroPage);
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  if ( v7 != 3 && *(unsigned __int8 *)(v13 + 34) >> 6 != v7 )
    MiChangePageAttribute(v13, v7, 2);
  return FreeOrZeroPage;
}
