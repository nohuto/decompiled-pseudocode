/*
 * XREFs of PopAllocateHiberContext @ 0x14052FB04
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlSetAllBits @ 0x140005744 (RtlSetAllBits.c)
 *     MmGetHighestPhysicalPage @ 0x14000F70C (MmGetHighestPhysicalPage.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA930 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     MmFlushAllPages @ 0x1401136F0 (MmFlushAllPages.c)
 *     IopLoadCrashdumpDriver @ 0x1401320B8 (IopLoadCrashdumpDriver.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x1401EA204 (MmEmptyAllWorkingSets.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x1403CB7B8 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x1403CB8DC (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x1403D1700 (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x1403D2030 (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     xHalPowerEarlyRestore @ 0x1403D6AEC (xHalPowerEarlyRestore.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x14052FAC4 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x140534100 (BcdForciblyUnloadStore.c)
 *     PopLoadResumeContext @ 0x140534390 (PopLoadResumeContext.c)
 *     PopBcdSetPendingResume @ 0x140534F24 (PopBcdSetPendingResume.c)
 *     BcdOpenSystemStore @ 0x14053C46C (BcdOpenSystemStore.c)
 *     PopBcdEstablishResumeObject @ 0x14053CC6C (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x14053CDE8 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140620690 (HvlpAllocatePageListResources.c)
 */

__int64 PopAllocateHiberContext()
{
  __int64 HighestPhysicalPage; // rax
  char *v1; // rbx
  unsigned __int64 PteAddress; // rax
  __int16 v3; // r8
  unsigned int v4; // ebp
  int CrashdumpDriver; // esi
  char v6; // cl
  ULONG_PTR v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  HANDLE v12; // rbp
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  PVOID Pages; // rax
  char *v16; // rax
  PVOID *v17; // rsi
  __int64 v18; // rbp
  PMDL UnHibernatedMdl; // rax
  __int64 v21; // rcx
  __int16 v22; // ax
  unsigned __int64 v23; // rdx
  PMDL v24; // rax
  HANDLE BcdStoreHandle; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v26[112]; // [rsp+40h] [rbp-A8h] BYREF

  if ( dword_1403033C8 != 5 )
    return 0;
  HighestPhysicalPage = MmGetHighestPhysicalPage();
  v1 = (char *)MemoryMap;
  qword_1403033E0 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + (((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1D0uLL);
  if ( (dword_1403A9134 & 2) == 0 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)qword_140303510);
    MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((v3 & 0xFFF) + Length + 4095) >> 12) - 1), 1);
  }
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_140303530;
  *((_QWORD *)v1 + 25) = qword_140303520;
  *((_QWORD *)v1 + 41) = qword_140303570;
  *((_QWORD *)v1 + 27) = qword_140303550;
  *((_QWORD *)v1 + 29) = qword_140303580;
  *((_QWORD *)v1 + 30) = qword_140303578;
  *((_OWORD *)v1 + 2) = xmmword_140303540;
  *((_QWORD *)v1 + 9) = v1 + 64;
  *((_QWORD *)v1 + 8) = v1 + 64;
  if ( !FileObject )
  {
    CrashdumpDriver = -1073741809;
    goto LABEL_43;
  }
  v4 = PopSimulate & 0x10;
  CrashdumpDriver = IopLoadCrashdumpDriver();
  if ( CrashdumpDriver >= 0 )
    CrashdumpDriver = qword_140328A10(L"hiber_", v1 + 168, 2LL, v4, 0LL);
  if ( CrashdumpDriver < 0 )
    goto LABEL_43;
  v6 = 0;
  v7 = *((_QWORD *)v1 + 21);
  if ( dword_1403033AC < 0 )
  {
    v6 = 0;
    if ( dword_1403033B4 == 2 )
      v6 = 2;
  }
  v8 = *((_QWORD *)v1 + 27);
  v1[1] = v6 | 1;
  v9 = qword_140303528;
  v10 = qword_140303528 & 0xFFF;
  *(_QWORD *)v8 = 0LL;
  *(_WORD *)(v8 + 10) = 0;
  *(_DWORD *)(v8 + 40) = 98304;
  *(_WORD *)(v8 + 8) = 8 * (((unsigned __int64)(v10 + 102399) >> 12) + 6);
  *(_QWORD *)(v8 + 32) = v9 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v8 + 44) = v9 & 0xFFF;
  MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 27));
  v11 = *((_QWORD *)v1 + 29);
  if ( v11 )
  {
    v21 = qword_140303578;
    v22 = qword_140303578;
    *(_QWORD *)v11 = 0LL;
    *(_WORD *)(v11 + 10) = 0;
    *(_DWORD *)(v11 + 40) = 4096;
    *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v22 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v11 + 32) = v21 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v11 + 44) = v21 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 29));
  }
  CrashdumpDriver = PopLoadResumeContext(v1);
  if ( CrashdumpDriver < 0 )
    goto LABEL_43;
  CrashdumpDriver = BcdOpenSystemStore(&BcdStoreHandle);
  if ( CrashdumpDriver < 0 )
    goto LABEL_43;
  v12 = BcdStoreHandle;
  CrashdumpDriver = PopBcdEstablishResumeObject(BcdStoreHandle);
  v13 = v12;
  if ( CrashdumpDriver < 0
    || (CrashdumpDriver = PopBcdSetPendingResume(v12), BcdCloseObject(0LL), v13 = v12, CrashdumpDriver < 0) )
  {
    BcdCloseStore(v13);
  }
  else
  {
    BcdForciblyUnloadStore(v12);
    RtlClearAllBits((PRTL_BITMAP)v1 + 2);
    RtlSetAllBits((PRTL_BITMAP)v1 + 3);
    *((_DWORD *)v1 + 114) = PopGetHwConfigurationSignature();
    PopHiberInitializeResources(v1);
    if ( (int)PopGetBitlockerKeyLocation((__int64 *)&BcdStoreHandle) >= 0 )
    {
      v23 = (unsigned __int64)BcdStoreHandle >> 12;
      *((_QWORD *)v1 + 40) = (unsigned __int64)BcdStoreHandle >> 12;
      PopDiscardRange((_RTL_BITMAP *)v1, v23, 4u);
    }
    if ( !KdPitchDebugger || KdEventLoggingEnabled )
    {
      PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
      PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
    }
    MmMarkHiberRange((__int64)v1, xmmword_1403034E8);
    off_1402F22B8();
    v14 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
    *((_DWORD *)v1 + 38) = v14;
    if ( *((_QWORD *)v1 + 31) )
    {
      if ( *((unsigned int *)v1 + 64) > v14 )
        LODWORD(v14) = *((_DWORD *)v1 + 64);
      *((_DWORD *)v1 + 38) = v14;
    }
    Pages = PopAllocatePages(*((unsigned int *)v1 + 38));
    CrashdumpDriver = *((_DWORD *)v1 + 47);
    *((_QWORD *)v1 + 18) = Pages;
    if ( CrashdumpDriver < 0 )
      goto LABEL_43;
    v16 = (char *)PopAllocatePages(16LL);
    *(_QWORD *)(v7 + 8) = v16;
    if ( v16 )
    {
      PoSetHiberRange(v1, 0x8000u, v16 + 0x2000, 0xE000uLL, 0x6D656D44u);
      if ( (*(_DWORD *)(v7 + 112) & 0xFFF) != 0 )
      {
        PopInternalAddToDumpFile(v7, 0x108u, 0LL);
        PopInternalAddToDumpFile((__int64)v1, 0x1D0u, 0LL);
        KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v7, (ULONG_PTR)v1);
      }
      v17 = (PVOID *)(v7 + 16);
      v18 = 2LL;
      do
      {
        if ( *v17 )
          PoSetHiberRange(v1, 0x8000u, *v17, *(unsigned int *)(v7 + 112), 0x66756263u);
        ++v17;
        --v18;
      }
      while ( v18 );
      UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
      *((_QWORD *)v1 + 15) = UnHibernatedMdl;
      if ( !UnHibernatedMdl )
      {
        MmEmptyAllWorkingSets();
        MmFlushAllPages();
        v24 = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
        *((_QWORD *)v1 + 15) = v24;
        if ( !v24 )
        {
          CrashdumpDriver = -1073741670;
          goto LABEL_43;
        }
      }
      if ( VslVsmEnabled )
      {
        v1[460] = 1;
        CrashdumpDriver = VslpEnterIumSecureMode(1, 31LL, 0LL, (__int64)v26);
        if ( CrashdumpDriver < 0 )
          goto LABEL_43;
      }
      else
      {
        v1[460] = 0;
      }
      if ( (int)BgkResumePrepare(v1) >= 0 )
        PopBgkResumePrepared = 1;
      *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 66) - 1;
      if ( (HvlpFlags & 2) != 0 )
        HvlpAllocatePageListResources();
      CrashdumpDriver = 0;
    }
    else
    {
      CrashdumpDriver = *((_DWORD *)v1 + 47);
    }
  }
  if ( CrashdumpDriver < 0 )
LABEL_43:
    PopFreeHiberContext();
  return (unsigned int)CrashdumpDriver;
}
