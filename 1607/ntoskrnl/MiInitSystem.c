/*
 * XREFs of MiInitSystem @ 0x1407A3AAC
 * Callers:
 *     MmInitSystem @ 0x1407A39F8 (MmInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     PsSetPagePriorityThread @ 0x1400707C0 (PsSetPagePriorityThread.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiStoreChargeReservedPages @ 0x14013CD1C (MiStoreChargeReservedPages.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014B1AC (MiInitializeWorkingSetManagerParameters.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdSetDbgPrintBufferSize @ 0x1401D1778 (KdSetDbgPrintBufferSize.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x140481DFC (MmLockPagableDataSection.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1404D3720 (MmConfigurePrefetchSeekThreshold.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     MiInitializeSystemSpaceMap @ 0x140536260 (MiInitializeSystemSpaceMap.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 *     MiWriteProtectSystemImages @ 0x1405541A0 (MiWriteProtectSystemImages.c)
 *     MiAllocateDummyPage @ 0x140798314 (MiAllocateDummyPage.c)
 *     MiInitializePartitions @ 0x1407A1300 (MiInitializePartitions.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     MiAddLoaderHalIoMappings @ 0x1407A3F38 (MiAddLoaderHalIoMappings.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407A40B4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiUnlockBootPageSections @ 0x1407A412C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x1407A4198 (MiEnablePagingTheExecutive.c)
 *     MiInitializeApiSets @ 0x1407A426C (MiInitializeApiSets.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 *     MiInitializeMemoryEvents @ 0x1407A4498 (MiInitializeMemoryEvents.c)
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 *     MiComputeOptimalZeroPath @ 0x1407A6288 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x1407A66AC (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x1407A682C (MiCreateEnclaveRegions.c)
 *     MiInitializeCfg @ 0x1407A6890 (MiInitializeCfg.c)
 *     MiMapBBTMemory @ 0x1407A6948 (MiMapBBTMemory.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 *     MiInitializeLoadedModuleList @ 0x1407B1234 (MiInitializeLoadedModuleList.c)
 *     PsInitializeQuotaSystem @ 0x1407B6714 (PsInitializeQuotaSystem.c)
 *     MiInitializeBootProcess @ 0x1407B7300 (MiInitializeBootProcess.c)
 *     MiInitializeRelocations @ 0x1407BA558 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x1407D0468 (MiInitializeSharedUserData.c)
 */

bool __fastcall MiInitSystem(int a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
  ULONG_PTR v6; // rax
  _KPROCESS *Process; // rdx
  int v9; // eax
  int v10; // ebp
  PKSTART_ROUTINE *i; // r14
  HANDLE ThreadHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+48h] [rbp-30h] BYREF

  v13[0] = MiModifiedPageWriter;
  v13[1] = KeBalanceSetManager;
  v13[2] = KeSwapProcessOrStack;
  v13[3] = MiZeroPageThread;
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
          qword_140326E48 = 0LL;
          qword_140327858 = (__int64)&qword_140327850;
          qword_140327850 = (__int64)&qword_140327850;
          MiInitializeSessionIds();
          if ( MiInitializePartitions(1) )
          {
            MiInitializeCacheFlushing();
            MiComputeOptimalZeroPath();
            if ( (unsigned int)MiInitializeMemoryEvents(MiSystemPartition) )
            {
              if ( (unsigned int)MiStoreChargeReservedPages(MiSystemPartition) )
              {
                v9 = dword_1403A9150;
                if ( (unsigned int)dword_1403A9150 <= 0x40 )
                {
                  if ( !dword_1403A9150 )
                    v9 = 1;
                }
                else
                {
                  v9 = 64;
                }
                dword_1403A9150 = v9 << 8;
                if ( (dword_1403A9144 & 0xFFFFFFFE) != 0 )
                  dword_1403A9144 = 0;
                v10 = 0;
                for ( i = (PKSTART_ROUTINE *)v13;
                      PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *i, MiSystemPartition) >= 0;
                      ++i )
                {
                  ObCloseHandle(ThreadHandle, 0);
                  if ( (unsigned int)++v10 >= 4 )
                  {
                    if ( !(unsigned int)MiInitializeMirroring() )
                      return 0;
                    qword_140326930 = 0LL;
                    MiWriteProtectSystemImages();
                    _InterlockedDecrement(&dword_140327788);
                    return (int)MiInitializeApiSets(a2) >= 0;
                  }
                }
              }
            }
          }
        }
        else
        {
          byte_140327185 = 32;
        }
      }
    }
    else if ( a1 == 2 )
    {
      MiUnlockBootPageSections();
      TraceLoggingRegisterEx(&stru_1402F3C50, 0LL, 0LL);
      qword_1403277E0 = &stru_1402F3C50;
      MiFlushStrongCodeDriverLoadFailures();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_140326AC8 = (unsigned int)dword_140326A20 / 0x30uLL;
    qword_1403270C8 = MiReservePtes((__int64)&qword_1403278B0, 0x20uLL, a3);
    _InterlockedIncrement(&dword_140327788);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)MiSystemPartition) )
    {
      Seed = 305419896;
      if ( (int)MiInitializeBootProcess(KeGetCurrentThread()->ApcState.Process->DirectoryTableBase >> 12) >= 0 )
      {
        KeFlushCurrentTbOnly(3);
        MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
        MiAddLoaderHalIoMappings(qword_140328030, qword_140328030 + 0x8000000000LL);
        if ( (_DWORD)KdPrintBufferAllocateSize )
          KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
        if ( (unsigned int)MiInitializeDriverImages(a2) )
        {
          v5 = qword_140324E10;
          if ( qword_140324E10 > 0xFFFFFFFF )
            v5 = -1;
          MEMORY[0xFFFFF780000002E8] = v5;
          MEMORY[0xFFFFF78000000244] = 0;
          MiInitializeSystemSpaceMap((__int64)&unk_1403268C0, v4);
          qword_1403266E8 = 0LL;
          qword_140326FE8 = 0LL;
          if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
          {
            if ( (unsigned int)MiInitializeSharedUserData() )
            {
              if ( (unsigned int)MiInitializeLoadedModuleList(a2) )
              {
                qword_140323938[0] = 0LL;
                qword_140326588 = 0LL;
                qword_140326590 = 0LL;
                MmConfigurePrefetchSeekThreshold(32);
                PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                MiEnablePagingTheExecutive();
                ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
                qword_1403276D0 = MiAllocateDummyPage();
                qword_1403276D8 = (qword_1403276D0 + 0x58000000000LL) / 48;
                v6 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, qword_1403276D0 + 0x58000000000LL);
                MmBadPointer = (PVOID)v6;
                if ( v6 )
                {
                  MmBadPointer = (PVOID)((__int64)(v6 << 25) >> 16);
                  if ( (unsigned int)MiInitializeRelocations() )
                  {
                    MiInitializeTbFlushing();
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
