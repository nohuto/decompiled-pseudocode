/*
 * XREFs of MiInitSystem @ 0x14074C59C
 * Callers:
 *     MmInitSystem @ 0x14074C514 (MmInitSystem.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     PsSetPagePriorityThread @ 0x1400FB7D0 (PsSetPagePriorityThread.c)
 *     MiStoreChargeReservedPages @ 0x14013312C (MiStoreChargeReservedPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1401413A4 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KdSetDbgPrintBufferSize @ 0x1401C25A4 (KdSetDbgPrintBufferSize.c)
 *     KeFlushCurrentTbOnly @ 0x1401C6F54 (KeFlushCurrentTbOnly.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1404C69CC (MmConfigurePrefetchSeekThreshold.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     MiInitializeSystemSpaceMap @ 0x1404FF074 (MiInitializeSystemSpaceMap.c)
 *     MiWriteProtectSystemImages @ 0x140520C1C (MiWriteProtectSystemImages.c)
 *     TraceLoggingRegisterEx @ 0x14052451C (TraceLoggingRegisterEx.c)
 *     MiAllocateDummyPage @ 0x140748580 (MiAllocateDummyPage.c)
 *     MiInitializeSystemCache @ 0x140749490 (MiInitializeSystemCache.c)
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 *     PsInitializeQuotaSystem @ 0x14074B984 (PsInitializeQuotaSystem.c)
 *     MiInitializeLoadedModuleList @ 0x14074BAF4 (MiInitializeLoadedModuleList.c)
 *     MiInitializeRelocations @ 0x14074C01C (MiInitializeRelocations.c)
 *     MiInitializeTbFlushing @ 0x14074C190 (MiInitializeTbFlushing.c)
 *     MiAddLoaderHalIoMappings @ 0x14074CB5C (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14074CCA4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x14074CD1C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x14074CD88 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x14074CE5C (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x14074CF24 (MiInitializeMirroring.c)
 *     MiInitializeMemoryEvents @ 0x14074D074 (MiInitializeMemoryEvents.c)
 *     MiComputeOptimalZeroPath @ 0x14074D98C (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x14074DDB0 (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x14074DEE8 (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x14074DF4C (MiInitializeCfg.c)
 *     MiMapBBTMemory @ 0x14074E034 (MiMapBBTMemory.c)
 *     MiInitializePartitions @ 0x14075A5B8 (MiInitializePartitions.c)
 *     MiSectionInitialization @ 0x14075A850 (MiSectionInitialization.c)
 *     MiInitializeBootProcess @ 0x14076CFE4 (MiInitializeBootProcess.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rsi
  _KPROCESS *Process; // rdx
  _QWORD *PoolWithTag; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // r9
  unsigned __int64 ValidKernelPte; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned __int8 v19; // al
  int v20; // eax
  int v21; // r14d
  PKSTART_ROUTINE *i; // r15
  _BYTE v23[48]; // [rsp+B0h] [rbp+B0h] BYREF

  v3 = (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 8) = MiModifiedPageWriter;
  *(_QWORD *)(v3 + 16) = KeBalanceSetManager;
  *(_QWORD *)(v3 + 24) = KeSwapProcessOrStack;
  *(_QWORD *)(v3 + 32) = MiZeroPageThread;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(48 * (Process->DirectoryTableBase >> 12) - 0x58000000000LL) = Process;
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      MEMORY[0xFFFFF78000000244] = 0x200000;
      MiMapBBTMemory(a2);
      if ( (unsigned int)MiSectionInitialization() && (int)MiInitializeCfg() >= 0 )
      {
        if ( (unsigned int)MiCreateEnclaveRegions(a2) )
        {
          qword_1402FEA48 = 0LL;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20206D4Du);
          if ( PoolWithTag )
          {
            v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((__int64 *)0xFFFFF6FBC0000000LL) >> 12) & 0xFFFFFFFFFLL;
            ValidKernelPte = MiMakeValidKernelPte(v14, 1, 0xFFFFF6FBC0000000uLL, v15);
            *PoolWithTag = ValidKernelPte;
            v17 = ValidKernelPte;
            if ( MiPteInShadowRange((__int64)PoolWithTag) )
              MiWritePteShadow((__int64)PoolWithTag, v17);
            qword_1402FE6A8 = (__int64)PoolWithTag;
            v18 = 48 * v14 - 0x58000000000LL;
            v19 = MiLockPageInline(v18);
            *(_QWORD *)(v18 + 16) = 128LL;
            *(_QWORD *)(v18 + 40) |= 0x200000000000000uLL;
            *(_QWORD *)(v18 + 8) = PoolWithTag;
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v19);
            qword_1402FF758 = (__int64)&qword_1402FF750;
            qword_1402FF750 = (__int64)&qword_1402FF750;
            MiInitializeSessionIds();
            if ( (unsigned int)MiInitializePartitions(1LL) )
            {
              MiInitializeCacheFlushing();
              MiComputeOptimalZeroPath();
              if ( (unsigned int)MiInitializeMemoryEvents(MiSystemPartition) )
              {
                if ( (unsigned int)MiStoreChargeReservedPages(MiSystemPartition) )
                {
                  v20 = dword_140381108;
                  if ( (unsigned int)dword_140381108 <= 0x40 )
                  {
                    if ( !dword_140381108 )
                      v20 = 1;
                  }
                  else
                  {
                    v20 = 64;
                  }
                  dword_140381108 = v20 << 8;
                  if ( (dword_1403810F8 & 0xFFFFFFFE) != 0 )
                    dword_1403810F8 = 0;
                  v21 = 0;
                  for ( i = (PKSTART_ROUTINE *)(v3 + 8);
                        PsCreateSystemThread(
                          (PHANDLE)((unsigned __int64)v23 & 0xFFFFFFFFFFFFFFC0uLL),
                          0x1FFFFFu,
                          0LL,
                          0LL,
                          0LL,
                          *i,
                          MiSystemPartition) >= 0;
                        ++i )
                  {
                    ObCloseHandle(*(HANDLE *)v3, 0);
                    if ( (unsigned int)++v21 >= 4 )
                    {
                      if ( !(unsigned int)MiInitializeMirroring() )
                        return 0;
                      qword_1402FE628 = 0LL;
                      MiWriteProtectSystemImages();
                      _InterlockedDecrement(&dword_1402FF308);
                      return (int)MiInitializeApiSets(a2) >= 0;
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          byte_1402FED75 = 32;
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TraceLoggingRegisterEx(&stru_1402D2050, 0LL, 0LL);
      hProvider = &stru_1402D2050;
      MiFlushStrongCodeDriverLoadFailures();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_1402FE750 = (unsigned int)dword_1402FE6F0 / 0x30uLL;
    qword_1402FECB8 = MiReservePtes((__int64)&qword_1402FF7B0, 0x20u, a3);
    _InterlockedAdd(&dword_1402FF308, 1u);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)MiSystemPartition) )
    {
      Seed = 305419896;
      if ( (int)MiInitializeBootProcess(KeGetCurrentThread()->ApcState.Process->DirectoryTableBase >> 12) >= 0 )
      {
        KeFlushCurrentTbOnly(3);
        MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
        MiAddLoaderHalIoMappings(0xFFFFF80000000000uLL, 0xFFFFF88000000000uLL);
        if ( (_DWORD)KdPrintBufferAllocateSize )
          KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
        if ( (unsigned int)MiInitializeDriverImages(a2) )
        {
          MEMORY[0xFFFFF780000002E8] = qword_140301390;
          MEMORY[0xFFFFF78000000244] = 0;
          if ( (unsigned int)MiInitializeSystemCache() )
          {
            MiInitializeSystemSpaceMap((__int64)&unk_1402FE5C0);
            qword_1402FE3E0 = 0LL;
            if ( PsInitializeQuotaSystem(0) )
            {
              if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
              {
                qword_140300100[0] = 0LL;
                qword_1402FE288 = 0LL;
                qword_1402FE290 = 0LL;
                MmConfigurePrefetchSeekThreshold(32);
                PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                MiEnablePagingTheExecutive();
                ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
                if ( dword_140381104 )
                {
                  if ( (unsigned int)dword_140381104 >= 5 )
                  {
                    if ( (unsigned int)dword_140381104 > 0x64 )
                      dword_140381104 = 100;
                  }
                  else
                  {
                    dword_140381104 = 5;
                  }
                }
                else
                {
                  dword_140381104 = 80;
                }
                qword_1402FF240 = MiAllocateDummyPage();
                qword_1402FF248 = (qword_1402FF240 + 0x58000000000LL) / 48;
                v6 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v5);
                MmBadPointer = (PVOID)v6;
                if ( v6 )
                {
                  MmBadPointer = (PVOID)((__int64)(v6 << 25) >> 16);
                  if ( (unsigned int)MiInitializeRelocations() )
                  {
                    MiInitializeTbFlushing(v8, v7, v9);
                    if ( !KiFpuLeakage )
                      return 1;
                    ExGenRandom(1);
                    v10 = 32 * (ExGenRandom(1) & 0x3FFFFFFF) - 0x92FFFFFFFF8LL;
                    if ( (unsigned int)MiMakeZeroedPageTables(v10, v10, 1, 3u) )
                    {
                      qword_1402FE5B0 = v10;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
