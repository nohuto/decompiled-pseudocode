/*
 * XREFs of PopAllocateHiberContext @ 0x14052F5C4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     RtlSetAllBits @ 0x1400055D0 (RtlSetAllBits.c)
 *     MmGetHighestPhysicalPage @ 0x14000FB8C (MmGetHighestPhysicalPage.c)
 *     MiLockCode @ 0x1400155F0 (MiLockCode.c)
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     RtlClearAllBits @ 0x14008487C (RtlClearAllBits.c)
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FCBB0 (MmBuildMdlForNonPagedPool.c)
 *     PoSetHiberRange @ 0x140112E60 (PoSetHiberRange.c)
 *     MmFlushAllPages @ 0x140113180 (MmFlushAllPages.c)
 *     IopLoadCrashdumpDriver @ 0x140131B48 (IopLoadCrashdumpDriver.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x1401EA3D8 (MmEmptyAllWorkingSets.c)
 *     PopInternalAddToDumpFile @ 0x1401FF078 (PopInternalAddToDumpFile.c)
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x1403CB7B8 (PopDiscardRange.c)
 *     PopAllocatePages @ 0x1403CB8DC (PopAllocatePages.c)
 *     PopGenerateUnHibernatedMdl @ 0x1403D1700 (PopGenerateUnHibernatedMdl.c)
 *     PopGetBitlockerKeyLocation @ 0x1403D2030 (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     xHalPowerEarlyRestore @ 0x1403D6AEC (xHalPowerEarlyRestore.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PopHiberInitializeResources @ 0x14052F2C4 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x14052F584 (MmMarkHiberRange.c)
 *     BcdForciblyUnloadStore @ 0x140533BC0 (BcdForciblyUnloadStore.c)
 *     PopLoadResumeContext @ 0x140533E50 (PopLoadResumeContext.c)
 *     PopBcdSetPendingResume @ 0x1405349E4 (PopBcdSetPendingResume.c)
 *     BcdOpenSystemStore @ 0x14053BF2C (BcdOpenSystemStore.c)
 *     PopBcdEstablishResumeObject @ 0x14053C72C (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x14053C8A8 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x1406205DC (HvlpAllocatePageListResources.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  HANDLE v15; // rcx
  unsigned __int64 v16; // rdx
  PVOID Pages; // rax
  char *v18; // rax
  PVOID *v19; // rsi
  __int64 v20; // rbp
  PMDL UnHibernatedMdl; // rax
  __int64 v23; // rcx
  __int16 v24; // ax
  unsigned __int64 v25; // rdx
  PMDL v26; // rax
  HANDLE Handle; // [rsp+30h] [rbp-B8h] BYREF
  HANDLE v28; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v29[112]; // [rsp+40h] [rbp-A8h] BYREF

  if ( dword_140303488 != 5 )
    return 0;
  Handle = 0LL;
  HighestPhysicalPage = MmGetHighestPhysicalPage();
  v1 = (char *)MemoryMap;
  qword_1403034A0 = (ULONG_PTR)MemoryMap;
  PopHiberScratchPages = PopHiberLoaderScratchPages
                       + (((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 4092) >> 12);
  memset(MemoryMap, 0, 0x1D0uLL);
  if ( (dword_1403A9134 & 2) == 0 )
  {
    PteAddress = MiGetPteAddress((unsigned __int64)qword_1403035D0);
    MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((v3 & 0xFFF) + Length + 4095) >> 12) - 1), 1);
  }
  PopNumberOfPagesForHibernateProcess = 0;
  *((_OWORD *)v1 + 3) = xmmword_1403035F0;
  *((_QWORD *)v1 + 25) = qword_1403035E0;
  *((_QWORD *)v1 + 41) = qword_140303630;
  *((_QWORD *)v1 + 27) = qword_140303610;
  *((_QWORD *)v1 + 29) = qword_140303640;
  *((_QWORD *)v1 + 30) = qword_140303638;
  *((_OWORD *)v1 + 2) = xmmword_140303600;
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
    CrashdumpDriver = qword_1403289D0(L"hiber_", v1 + 168, 2LL, v4, 0LL);
  if ( CrashdumpDriver < 0 )
    goto LABEL_43;
  v6 = 0;
  v7 = *((_QWORD *)v1 + 21);
  if ( dword_14030346C < 0 )
  {
    v6 = 0;
    if ( dword_140303474 == 2 )
      v6 = 2;
  }
  v8 = *((_QWORD *)v1 + 27);
  v1[1] = v6 | 1;
  v9 = qword_1403035E8;
  v10 = qword_1403035E8 & 0xFFF;
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
    v23 = qword_140303638;
    v24 = qword_140303638;
    *(_QWORD *)v11 = 0LL;
    *(_WORD *)(v11 + 10) = 0;
    *(_DWORD *)(v11 + 40) = 4096;
    *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v24 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v11 + 32) = v23 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v11 + 44) = v23 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v1 + 29));
  }
  CrashdumpDriver = PopLoadResumeContext(v1);
  if ( CrashdumpDriver < 0 )
    goto LABEL_43;
  CrashdumpDriver = BcdOpenSystemStore(&v28);
  if ( CrashdumpDriver < 0 )
    goto LABEL_43;
  v12 = v28;
  CrashdumpDriver = PopBcdEstablishResumeObject(v28, &Handle);
  v15 = v12;
  if ( CrashdumpDriver < 0
    || (CrashdumpDriver = PopBcdSetPendingResume(v12, v13, v14, Handle),
        BcdCloseObject(Handle),
        v15 = v12,
        CrashdumpDriver < 0) )
  {
    BcdCloseStore(v15);
  }
  else
  {
    BcdForciblyUnloadStore(v12);
    RtlClearAllBits((PRTL_BITMAP)v1 + 2);
    RtlSetAllBits((PRTL_BITMAP)v1 + 3);
    *((_DWORD *)v1 + 114) = PopGetHwConfigurationSignature();
    PopHiberInitializeResources(v1);
    if ( (int)PopGetBitlockerKeyLocation((__int64 *)&v28) >= 0 )
    {
      v25 = (unsigned __int64)v28 >> 12;
      *((_QWORD *)v1 + 40) = (unsigned __int64)v28 >> 12;
      PopDiscardRange((struct _RTL_BITMAP *)v1, v25, 4u);
    }
    if ( !KdPitchDebugger || KdEventLoggingEnabled )
    {
      PoSetHiberRange(v1, 2u, &KdTimerDifference, 0LL, 0x20676244u);
      PoSetHiberRange(v1, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
    }
    MmMarkHiberRange((__int64)v1, xmmword_1403035A8);
    off_1402F22B8();
    v16 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
    *((_DWORD *)v1 + 38) = v16;
    if ( *((_QWORD *)v1 + 31) )
    {
      if ( *((unsigned int *)v1 + 64) > v16 )
        LODWORD(v16) = *((_DWORD *)v1 + 64);
      *((_DWORD *)v1 + 38) = v16;
    }
    Pages = PopAllocatePages(*((unsigned int *)v1 + 38));
    CrashdumpDriver = *((_DWORD *)v1 + 47);
    *((_QWORD *)v1 + 18) = Pages;
    if ( CrashdumpDriver < 0 )
      goto LABEL_43;
    v18 = (char *)PopAllocatePages(16LL);
    *(_QWORD *)(v7 + 8) = v18;
    if ( v18 )
    {
      PoSetHiberRange(v1, 0x8000u, v18 + 0x2000, 0xE000uLL, 0x6D656D44u);
      if ( (*(_DWORD *)(v7 + 112) & 0xFFF) != 0 )
      {
        PopInternalAddToDumpFile(v7, 0x108u, 0LL);
        PopInternalAddToDumpFile((__int64)v1, 0x1D0u, 0LL);
        KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v7, (ULONG_PTR)v1);
      }
      v19 = (PVOID *)(v7 + 16);
      v20 = 2LL;
      do
      {
        if ( *v19 )
          PoSetHiberRange(v1, 0x8000u, *v19, *(unsigned int *)(v7 + 112), 0x66756263u);
        ++v19;
        --v20;
      }
      while ( v20 );
      UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
      *((_QWORD *)v1 + 15) = UnHibernatedMdl;
      if ( !UnHibernatedMdl )
      {
        MmEmptyAllWorkingSets();
        MmFlushAllPages();
        v26 = PopGenerateUnHibernatedMdl((__int64)v1, (unsigned int)PopHiberScratchPages);
        *((_QWORD *)v1 + 15) = v26;
        if ( !v26 )
        {
          CrashdumpDriver = -1073741670;
          goto LABEL_43;
        }
      }
      if ( VslVsmEnabled )
      {
        v1[460] = 1;
        CrashdumpDriver = VslpEnterIumSecureMode(1, 31LL, 0LL, (__int64)v29);
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
