/*
 * XREFs of MiInitSystem @ 0x1407C8BD0
 * Callers:
 *     MmInitSystem @ 0x1407C8B48 (MmInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAllocateMappedWriterMdls @ 0x14015F958 (MiAllocateMappedWriterMdls.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14016EFB8 (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KdSetDbgPrintBufferSize @ 0x1401FE2C8 (KdSetDbgPrintBufferSize.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     EtwTracePriority @ 0x14025D438 (EtwTracePriority.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x14055D378 (MmConfigurePrefetchSeekThreshold.c)
 *     MiInitializeSystemSpaceMap @ 0x140579A74 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeMirroring @ 0x140583560 (MiInitializeMirroring.c)
 *     MiWriteProtectSystemImages @ 0x140597344 (MiWriteProtectSystemImages.c)
 *     TraceLoggingRegisterEx @ 0x1405BCF34 (TraceLoggingRegisterEx.c)
 *     MiInitializePartitions @ 0x1407C3F38 (MiInitializePartitions.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     MiAllocateDummyPage @ 0x1407C79D0 (MiAllocateDummyPage.c)
 *     MiInitializeRelocations @ 0x1407C7D1C (MiInitializeRelocations.c)
 *     MiInitializeTbFlushing @ 0x1407C7E90 (MiInitializeTbFlushing.c)
 *     MiMapBBTMemory @ 0x1407C8220 (MiMapBBTMemory.c)
 *     MiInitializeCfg @ 0x1407C84F4 (MiInitializeCfg.c)
 *     MiInitializeSessionIds @ 0x1407C85DC (MiInitializeSessionIds.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 *     MiComputeOptimalZeroPath @ 0x1407C88D8 (MiComputeOptimalZeroPath.c)
 *     MiAddLoaderHalIoMappings @ 0x1407C9294 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407C9518 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x1407C9590 (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1407C9640 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x1407C9714 (MiInitializeApiSets.c)
 *     MiStartZeroPageWorkers @ 0x1407C97DC (MiStartZeroPageWorkers.c)
 *     MiInitializeSystemCache @ 0x1407C9B74 (MiInitializeSystemCache.c)
 *     MiInitializeMemoryEvents @ 0x1407CAE44 (MiInitializeMemoryEvents.c)
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 *     MiInitializeLoadedModuleList @ 0x1407D9810 (MiInitializeLoadedModuleList.c)
 *     PsInitializeQuotaSystem @ 0x1407E1018 (PsInitializeQuotaSystem.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r10
  signed __int32 v10; // eax
  unsigned __int32 v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  _KPROCESS *Process; // rdx
  _QWORD *PoolWithTag; // rsi
  __int64 v26; // rdi
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v31; // r14d
  int v32; // eax
  int v33; // esi
  PKSTART_ROUTINE *i; // r14
  _BYTE v35[64]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 8) = MiModifiedPageWriter;
  *(_QWORD *)(v3 + 16) = MiMappedPageWriter;
  *(_QWORD *)(v3 + 24) = KeBalanceSetManager;
  *(_QWORD *)(v3 + 32) = KeSwapProcessOrStack;
  *(_QWORD *)(v3 + 40) = MiZeroPageThread;
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
      if ( (unsigned int)MiSectionInitialization() )
      {
        if ( (int)MiInitializeCfg() >= 0 )
        {
          qword_14034EF08 = 0LL;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x20206D4Du);
          if ( PoolWithTag )
          {
            v26 = (MEMORY[0xFFFFF6FBC0000000] >> 12) & 0xFFFFFFFFFLL;
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0xFFFFF6FBC0000000uLL) )
              v27 |= 0x100uLL;
            v28 = v27 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
            *PoolWithTag = v28;
            if ( (unsigned __int64)(PoolWithTag + 0x12090482600LL) <= 0x7F8 )
              MiWritePteShadow((__int64)PoolWithTag, v28);
            qword_14034EB58 = (__int64)PoolWithTag;
            v29 = 48 * v26 - 0x58000000000LL;
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            v31 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v31);
              }
              while ( *(__int64 *)(v29 + 24) < 0 );
            }
            *(_QWORD *)(v29 + 16) = MiMakeDemandZeroPte(4);
            *(_QWORD *)(v29 + 40) |= 0x200000000000000uLL;
            *(_QWORD *)(v29 + 8) = PoolWithTag;
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(CurrentIrql);
            qword_14034FC18 = (__int64)&qword_14034FC10;
            qword_14034FC10 = (__int64)&qword_14034FC10;
            MiInitializeSessionIds();
            if ( MiInitializePartitions(1) )
            {
              MiInitializeCacheFlushing();
              MiComputeOptimalZeroPath();
              if ( (unsigned int)MiInitializeMemoryEvents(MiSystemPartition) )
              {
                v32 = dword_1403D00F8;
                if ( (unsigned int)dword_1403D00F8 <= 0x40 )
                {
                  if ( !dword_1403D00F8 )
                    v32 = 1;
                }
                else
                {
                  v32 = 64;
                }
                dword_1403D00F8 = v32 << 8;
                if ( (dword_1403D00E8 & 0xFFFFFFFE) != 0 )
                  dword_1403D00E8 = 0;
                if ( (int)MiAllocateMappedWriterMdls(MiSystemPartition) >= 0 )
                {
                  v33 = 0;
                  for ( i = (PKSTART_ROUTINE *)(v3 + 8);
                        PsCreateSystemThread(
                          (PHANDLE)((unsigned __int64)v35 & 0xFFFFFFFFFFFFFFC0uLL),
                          0x1FFFFFu,
                          0LL,
                          0LL,
                          0LL,
                          *i,
                          MiSystemPartition) >= 0;
                        ++i )
                  {
                    ObCloseHandle(*(HANDLE *)v3, 0);
                    if ( (unsigned int)++v33 >= 5 )
                    {
                      MiInitializeMirroring(SynchronizationEvent);
                      MiStartZeroPageWorkers();
                      qword_14034EAD8 = 0LL;
                      MiWriteProtectSystemImages();
                      _InterlockedDecrement(&dword_14034F788);
                      return (int)MiInitializeApiSets(a2) >= 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TraceLoggingRegisterEx(&stru_140321180, 0LL, 0LL);
      hProvider = &stru_140321180;
      MiFlushStrongCodeDriverLoadFailures();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_14034EC08 = (unsigned int)dword_14034EBA0 / 0x30uLL;
    qword_14034F170 = (__int64)MiReservePtes((__int64)&qword_14034FC70, 0x20u, a3);
    _InterlockedIncrement(&dword_14034F788);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)MiSystemPartition, v5, v6, v7) )
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
          MEMORY[0xFFFFF780000002E8] = qword_1403551D0;
          MEMORY[0xFFFFF78000000244] = 0;
          if ( (unsigned int)MiInitializeSystemCache() )
          {
            MiInitializeSystemSpaceMap((__int64)&unk_14034EA70);
            qword_14034E8A8 = 0LL;
            if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
            {
              if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
              {
                qword_1403540A0[0] = 0LL;
                qword_14034E788 = 0LL;
                qword_14034E790 = 0LL;
                MmConfigurePrefetchSeekThreshold(32);
                CurrentThread = KeGetCurrentThread();
                v10 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
                do
                {
                  v11 = v10;
                  v12 = v10 & 0xFFFF8FFF | 0x5000;
                  v10 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 3,
                          v12,
                          v10);
                }
                while ( v10 != v11 );
                v13 = (v11 >> 12) & 7;
                if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
                  EtwTracePriority((__int64)CurrentThread, 0x533u, v13, 5, 0LL);
                MiEnablePagingTheExecutive(v12, v8, v13);
                ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
                if ( dword_1403D00F4 )
                {
                  if ( (unsigned int)dword_1403D00F4 >= 5 )
                  {
                    if ( (unsigned int)dword_1403D00F4 > 0x64 )
                      dword_1403D00F4 = 100;
                  }
                  else
                  {
                    dword_1403D00F4 = 5;
                  }
                }
                else
                {
                  dword_1403D00F4 = 80;
                }
                qword_14034F700 = MiAllocateDummyPage(v15, v14, v16, v17);
                qword_14034F708 = (qword_14034F700 + 0x58000000000LL) / 48;
                v19 = MiReservePtes((__int64)&qword_14034FC70, 1u, v18);
                MmBadPointer = v19;
                if ( v19 )
                {
                  MmBadPointer = (PVOID)((__int64)((_QWORD)v19 << 25) >> 16);
                  if ( (unsigned int)MiInitializeRelocations() )
                  {
                    MiInitializeTbFlushing(v21, v20, v22);
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
  return 0;
}
