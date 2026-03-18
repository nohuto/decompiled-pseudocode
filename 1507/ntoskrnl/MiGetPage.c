/*
 * XREFs of MiGetPage @ 0x1400BD890
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140003E18 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiObtainTransitionPage @ 0x14005A730 (MiObtainTransitionPage.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiGetZeroedPages @ 0x140077560 (MiGetZeroedPages.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400DEFD0 (MiBuildMdlForMappedFileFault.c)
 *     MiGetSystemPage @ 0x1400E1348 (MiGetSystemPage.c)
 *     MiReplaceLockedPage @ 0x1400FC0AC (MiReplaceLockedPage.c)
 *     MiSwapStackPage @ 0x14011F8A0 (MiSwapStackPage.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     MiAllocateMdlPagesByLists @ 0x140133FF0 (MiAllocateMdlPagesByLists.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiGetFileHashPage @ 0x140231DB8 (MiGetFileHashPage.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MiAllocateTopLevelPage @ 0x1406A13F8 (MiAllocateTopLevelPage.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 *     MxSwapPages @ 0x1407C7254 (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x1407C79D0 (MiAllocateDummyPage.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 *     MiComputeOptimalZeroPath @ 0x1407C88D8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeGapFrames @ 0x1407D501C (MiInitializeGapFrames.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiCheckNodeChannelStandbyCount @ 0x140226284 (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // r15d
  __int64 v5; // r9
  unsigned int v6; // edi
  unsigned __int8 *v7; // rsi
  __int64 v9; // r8
  unsigned int v10; // r13d
  bool v11; // cc
  __int64 FreeOrZeroPage; // r14
  __int64 v13; // rsi
  unsigned int v14; // edi
  __int64 v16; // rcx
  int v17; // ecx
  char *v18; // rax
  __int64 v19; // r8
  int v20; // edx
  int v21; // edx
  unsigned __int64 v22; // rdx
  BOOL v23; // ebp
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 *v25; // [rsp+28h] [rbp-40h]
  unsigned int v27; // [rsp+78h] [rbp+10h]
  BOOL v28; // [rsp+88h] [rbp+20h]

  v3 = (unsigned int)MmNumberOfChannels;
  v4 = a2;
  v28 = 1;
  v5 = a1;
  HIDWORD(v24) = 0;
  v6 = a2 >> byte_14034EB89;
  v7 = 0LL;
  v27 = a2 >> byte_14034EB89;
  LODWORD(v9) = a2 >> byte_14034EB89;
  v10 = 0;
  while ( 1 )
  {
    v11 = (unsigned int)v3 <= 1;
LABEL_3:
    if ( !v11 )
    {
      v16 = *(_QWORD *)(v5 + 40) + 1336LL * (unsigned int)v9;
      v7 = (unsigned __int8 *)(v16 + 1313);
      if ( (_DWORD)v9 == v6 )
      {
        v28 = (*(_BYTE *)(v16 + 1296) & 1) == 0;
        if ( (a3 & 8) != 0 )
          v7 = (unsigned __int8 *)(v16 + 1317);
        if ( (a3 & 0x10) != 0 && (*(_BYTE *)(v16 + 1296) & 1) != 0 )
        {
          v17 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v4 >> byte_14034EB98));
          v18 = (char *)&v24 + 1;
          LOBYTE(v24) = MiChannelMaximumPowerOf2Mask & (v4 >> byte_14034EB98);
          if ( (_DWORD)v3 )
          {
            v19 = v3;
            do
            {
              v20 = *v7;
              if ( v20 != v17 )
                *v18++ = v20;
              ++v7;
              --v19;
            }
            while ( v19 );
            LODWORD(v9) = v27;
          }
          v7 = (unsigned __int8 *)&v24;
        }
        v10 = *v7;
      }
    }
    v25 = &v7[v3];
    do
    {
      if ( v7 )
        v4 = v4 & dword_14034EBB8 | ((_DWORD)v9 << byte_14034EB89) | (*v7 << byte_14034EB98);
      FreeOrZeroPage = MiGetFreeOrZeroPage(v5, v4, a3);
      if ( FreeOrZeroPage != -1 )
        goto LABEL_8;
      v5 = a1;
      ++v7;
      v9 = v27;
    }
    while ( v7 != v25 );
    v21 = HIDWORD(v24) + 1;
    HIDWORD(v24) = v21;
    if ( v21 == (unsigned __int16)KeNumberNodes )
      break;
    LODWORD(v9) = *((unsigned __int16 *)qword_14034EB68 + v21 + v6 * (unsigned __int16)KeNumberNodes);
    v27 = v9;
    v11 = (unsigned int)v3 <= 1;
    if ( (_DWORD)v3 != 1 )
      goto LABEL_3;
    v7 = 0LL;
    v4 = v4 & dword_14034EBB8 | ((_DWORD)v9 << byte_14034EB89);
  }
  if ( (a3 & 1) != 0 )
    return -1LL;
  if ( (a3 & 4) == 0 )
  {
    v22 = *(_QWORD *)(a1 + 5504);
    if ( v22 < 0x80
      && (((__int64)KeGetCurrentThread()[1].Queue & 2) == 0 || v22 < 2)
      && ((__int16 *)a1 == MiSystemPartition || v22 < 2) )
    {
      return -1LL;
    }
  }
  if ( (a3 & 0x10) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(a1, v6, v10, a1, v24) )
    return -1LL;
  FreeOrZeroPage = MiRemoveLowestPriorityStandbyPage(a1, 8LL, v9, v5);
  if ( FreeOrZeroPage == -1 )
    return -1LL;
LABEL_8:
  v13 = 48 * FreeOrZeroPage - 0x58000000000LL;
  if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v13 + 40)) >> 2 == v6 )
  {
    if ( ((*(_QWORD *)(v13 + 40) >> 36) & 3) == v10 )
      goto LABEL_10;
    v23 = v28;
    if ( v28 )
      goto LABEL_10;
  }
  else
  {
    v23 = v28;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x20) == 0 )
    {
      FreeOrZeroPage = MiSwapNumaStandbyPage(FreeOrZeroPage, v6, v10, a3);
      v13 = 48 * FreeOrZeroPage - 0x58000000000LL;
    }
    if ( (a3 & 0x10) != 0
      && ((unsigned __int8)HIBYTE(*(_QWORD *)(v13 + 40)) >> 2 != v6 || ((*(_QWORD *)(v13 + 40) >> 36) & 3) != v10
                                                                    && !v23) )
    {
      MiReleaseFreshPage(v13);
      return -1LL;
    }
  }
LABEL_10:
  if ( (a3 & 0x80u) != 0 )
  {
    v14 = 1;
  }
  else if ( (a3 & 0x100) != 0 )
  {
    v14 = MiPlatformCacheAttributes[0];
  }
  else
  {
    v14 = 3;
    if ( (a3 & 0x200) != 0 )
      v14 = dword_1403D0480;
  }
  if ( (a3 & 0x40) != 0 && *(_QWORD *)(v13 + 16) )
  {
    MiZeroPhysicalPage(FreeOrZeroPage, 1, v14);
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  if ( v14 != 3 && *(unsigned __int8 *)(v13 + 34) >> 6 != v14 )
    MiChangePageAttribute(v13, v14, 2LL);
  return FreeOrZeroPage;
}
