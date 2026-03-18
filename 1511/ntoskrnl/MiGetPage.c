/*
 * XREFs of MiGetPage @ 0x1400549D0
 * Callers:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiGetSystemPage @ 0x140011A30 (MiGetSystemPage.c)
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiFindNonPagedPoolPages @ 0x1400198C0 (MiFindNonPagedPoolPages.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiObtainTransitionPage @ 0x140071020 (MiObtainTransitionPage.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400AB410 (MiBuildMdlForMappedFileFault.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSwapStackPage @ 0x1400D872C (MiSwapStackPage.c)
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400EC988 (MiDoneWithThisPageGetAnother.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiAllocateMdlPagesByLists @ 0x140104DC8 (MiAllocateMdlPagesByLists.c)
 *     MiGetFileHashPage @ 0x140107D58 (MiGetFileHashPage.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 *     MiFillPagedPoolLockedDown @ 0x1406251DC (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 *     MxSwapPages @ 0x14074817C (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x140748580 (MiAllocateDummyPage.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiComputeOptimalZeroPath @ 0x14074D98C (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 *     MiInitializeGapFrames @ 0x140767B78 (MiInitializeGapFrames.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiPageAvailable @ 0x14012FC84 (MiPageAvailable.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // r15d
  __int64 v5; // r11
  unsigned int v6; // edi
  unsigned __int8 *v7; // rsi
  unsigned int v9; // r8d
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
  int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // r9
  int v25; // r8d
  unsigned int v26; // r10d
  _QWORD *v27; // rax
  BOOL v28; // ebp
  __int64 v29; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 *v30; // [rsp+28h] [rbp-40h]
  unsigned int v32; // [rsp+78h] [rbp+10h]
  BOOL v33; // [rsp+88h] [rbp+20h]

  v3 = (unsigned int)MmNumberOfChannels;
  v4 = a2;
  v33 = 1;
  v5 = a1;
  HIDWORD(v29) = 0;
  v6 = a2 >> byte_1402FE6D9;
  v7 = 0LL;
  v32 = a2 >> byte_1402FE6D9;
  v9 = a2 >> byte_1402FE6D9;
  v10 = 0;
  while ( 1 )
  {
    v11 = (unsigned int)v3 <= 1;
LABEL_3:
    if ( !v11 )
    {
      v16 = *(_QWORD *)(v5 + 40) + 1336LL * v9;
      v7 = (unsigned __int8 *)(v16 + 1313);
      if ( v9 == v6 )
      {
        v33 = (*(_BYTE *)(v16 + 1296) & 1) == 0;
        if ( (a3 & 8) != 0 )
          v7 = (unsigned __int8 *)(v16 + 1317);
        if ( (a3 & 0x10) != 0 && (*(_BYTE *)(v16 + 1296) & 1) != 0 )
        {
          v17 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (v4 >> byte_1402FE6E8));
          v18 = (char *)&v29 + 1;
          LOBYTE(v29) = MiChannelMaximumPowerOf2Mask & (v4 >> byte_1402FE6E8);
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
            v9 = v32;
          }
          v7 = (unsigned __int8 *)&v29;
        }
        v10 = *v7;
      }
    }
    v30 = &v7[v3];
    while ( 1 )
    {
      if ( v7 )
        v4 = v4 & dword_1402FE708 | (v9 << byte_1402FE6D9) | (*v7 << byte_1402FE6E8);
      FreeOrZeroPage = MiGetFreeOrZeroPage(v5, v4, a3);
      if ( FreeOrZeroPage != -1 )
        goto LABEL_8;
      if ( !(unsigned int)MiPageAvailable(a1, a3) )
      {
        v21 = (unsigned __int16)KeNumberNodes - 1;
        goto LABEL_40;
      }
      if ( ++v7 == v30 )
        break;
      v9 = v32;
    }
    v21 = HIDWORD(v29);
LABEL_40:
    v22 = v21 + 1;
    HIDWORD(v29) = v22;
    if ( v22 == (unsigned __int16)KeNumberNodes )
      break;
    v9 = *((unsigned __int16 *)qword_1402FE6B8 + v22 + v6 * (unsigned __int16)KeNumberNodes);
    v32 = v9;
    v11 = (unsigned int)v3 <= 1;
    if ( (_DWORD)v3 != 1 )
      goto LABEL_3;
    v7 = 0LL;
    v4 = v4 & dword_1402FE708 | (v9 << byte_1402FE6D9);
  }
  if ( (a3 & 1) != 0 )
    return -1LL;
  if ( (a3 & 0x10) != 0 )
  {
    v23 = v10;
    v24 = *(_QWORD *)(v5 + 40) + 1336LL * v6;
    if ( (*(_DWORD *)(v24 + 1296) & 1) != 0 )
    {
      v25 = v10 + 1;
    }
    else
    {
      v25 = MmNumberOfChannels;
      v23 = 0;
    }
    if ( v23 == v25 )
      return -1LL;
LABEL_49:
    v26 = 0;
    v27 = (_QWORD *)(192LL * v23 + v24 + 400);
    while ( !*v27 )
    {
      ++v26;
      v27 += 3;
      if ( v26 >= 8 )
      {
        if ( ++v23 != v25 )
          goto LABEL_49;
        return -1LL;
      }
    }
    if ( v23 == v25 )
      return -1LL;
  }
  FreeOrZeroPage = MiRemoveLowestPriorityStandbyPage(v5, 8LL, a3);
  if ( FreeOrZeroPage == -1 )
    return -1LL;
LABEL_8:
  v13 = 48 * FreeOrZeroPage - 0x58000000000LL;
  if ( (unsigned __int8)HIBYTE(*(_QWORD *)(v13 + 40)) >> 2 == v6 )
  {
    if ( ((*(_QWORD *)(v13 + 40) >> 36) & 3) == v10 )
      goto LABEL_10;
    v28 = v33;
    if ( v33 )
      goto LABEL_10;
  }
  else
  {
    v28 = v33;
  }
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x20) == 0 )
    {
      FreeOrZeroPage = MiSwapNumaStandbyPage(FreeOrZeroPage, v6, v10, a3, v29);
      v13 = 48 * FreeOrZeroPage - 0x58000000000LL;
    }
    if ( (a3 & 0x10) != 0
      && ((unsigned __int8)HIBYTE(*(_QWORD *)(v13 + 40)) >> 2 != v6 || ((*(_QWORD *)(v13 + 40) >> 36) & 3) != v10
                                                                    && !v28) )
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
      v14 = dword_1403812A8;
  }
  if ( (a3 & 0x40) != 0 && *(_QWORD *)(v13 + 16) )
  {
    MiZeroPhysicalPage(FreeOrZeroPage, 1LL, v14);
    *(_QWORD *)(v13 + 16) = 0LL;
  }
  if ( v14 != 3 && *(unsigned __int8 *)(v13 + 34) >> 6 != v14 )
    MiChangePageAttribute(v13, v14, 2LL);
  return FreeOrZeroPage;
}
