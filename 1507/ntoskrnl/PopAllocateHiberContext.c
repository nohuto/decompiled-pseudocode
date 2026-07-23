/*
 * XREFs of PopAllocateHiberContext @ 0x14056A188
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     MmGetHighestPhysicalPage @ 0x140045B2C (MmGetHighestPhysicalPage.c)
 *     RtlSetAllBits @ 0x1400D8FF8 (RtlSetAllBits.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400DFCC0 (MmBuildMdlForNonPagedPool.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     MmFlushAllPages @ 0x14014D698 (MmFlushAllPages.c)
 *     IopLoadCrashdumpDriver @ 0x1401531A4 (IopLoadCrashdumpDriver.c)
 *     HvlGetNestedPageProtectionFlags @ 0x14015A5A4 (HvlGetNestedPageProtectionFlags.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmEmptyAllWorkingSets @ 0x14021B770 (MmEmptyAllWorkingSets.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     PopGetHwConfigurationSignature @ 0x1403F0020 (PopGetHwConfigurationSignature.c)
 *     PopGetBitlockerKeyLocation @ 0x1403F0168 (PopGetBitlockerKeyLocation.c)
 *     BgkResumePrepare @ 0x1403F1608 (BgkResumePrepare.c)
 *     PopGenerateUnHibernatedMdl @ 0x1403F25F8 (PopGenerateUnHibernatedMdl.c)
 *     PopDiscardRange @ 0x1403F267C (PopDiscardRange.c)
 *     PopAllocatePages @ 0x1403F26C8 (PopAllocatePages.c)
 *     xHalPowerEarlyRestore @ 0x1403FB1C8 (xHalPowerEarlyRestore.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     BcdForciblyUnloadStore @ 0x140569050 (BcdForciblyUnloadStore.c)
 *     PopLoadResumeContext @ 0x140569238 (PopLoadResumeContext.c)
 *     MmLockPreChargedPagedPool @ 0x140569BDC (MmLockPreChargedPagedPool.c)
 *     PopBcdSetPendingResume @ 0x140569D2C (PopBcdSetPendingResume.c)
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x14056A138 (MmMarkHiberRange.c)
 *     BcdOpenSystemStore @ 0x14056DC50 (BcdOpenSystemStore.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 *     PopBcdEstablishResumeObject @ 0x14056E4D8 (PopBcdEstablishResumeObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     HvlpAllocatePageListResources @ 0x140670D7C (HvlpAllocatePageListResources.c)
 */

__int64 PopAllocateHiberContext()
{
  int CrashdumpDriver; // esi
  __int64 HighestPhysicalPage; // rax
  char *v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // r14
  char v5; // cl
  ULONG_PTR v6; // r15
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int16 v13; // ax
  HANDLE v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rcx
  char *v18; // rdx
  unsigned __int64 v19; // rdx
  PVOID Pages; // rax
  char *v21; // rax
  PVOID *v22; // rsi
  PMDL UnHibernatedMdl; // rax
  PMDL v24; // rax
  HANDLE BcdStoreHandle; // [rsp+30h] [rbp-B8h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-B0h]
  unsigned __int8 v28[112]; // [rsp+40h] [rbp-A8h] BYREF

  if ( dword_14032E668 == 5 )
  {
    BcdObjectHandle = 0LL;
    HighestPhysicalPage = MmGetHighestPhysicalPage(0);
    v2 = (char *)MemoryMap;
    qword_14032E680 = (ULONG_PTR)MemoryMap;
    PopHiberScratchPages = PopHiberLoaderScratchPages
                         + (((((unsigned __int64)(HighestPhysicalPage + 32) >> 3) & 0x1FFFFFFFFFFFFFFCLL) + 4092) >> 12);
    memset(MemoryMap, 0, 0x1D0uLL);
    MmLockPreChargedPagedPool((unsigned __int64)qword_14032E8F0, Length);
    PopNumberOfPagesForHibernateProcess = 0;
    *((_OWORD *)v2 + 3) = xmmword_14032E910;
    *((_QWORD *)v2 + 25) = qword_14032E900;
    *((_QWORD *)v2 + 41) = qword_14032E950;
    *((_QWORD *)v2 + 27) = qword_14032E930;
    *((_QWORD *)v2 + 29) = qword_14032E960;
    *((_QWORD *)v2 + 30) = qword_14032E958;
    *((_OWORD *)v2 + 2) = xmmword_14032E920;
    *((_QWORD *)v2 + 9) = v2 + 64;
    *((_QWORD *)v2 + 8) = v2 + 64;
    if ( FileObject )
    {
      v3 = PopSimulate & 0x10;
      CrashdumpDriver = IopLoadCrashdumpDriver();
      v4 = 2LL;
      if ( CrashdumpDriver >= 0 )
        CrashdumpDriver = qword_140353BC0(L"hiber_", v2 + 168, 2LL, v3, 0LL);
      if ( CrashdumpDriver < 0 )
        goto LABEL_50;
      v5 = 0;
      v6 = *((_QWORD *)v2 + 21);
      if ( dword_14032E64C < 0 )
      {
        v5 = 0;
        if ( dword_14032E654 == 2 )
          v5 = 2;
      }
      v7 = v5 | 1;
      if ( PopFirmwareProtection )
        v7 |= 4u;
      v8 = *((_QWORD *)v2 + 27);
      v2[1] = v7;
      v9 = qword_14032E908;
      v10 = qword_14032E908 & 0xFFF;
      *(_QWORD *)v8 = 0LL;
      *(_WORD *)(v8 + 10) = 0;
      *(_DWORD *)(v8 + 40) = 98304;
      *(_WORD *)(v8 + 8) = 8 * (((unsigned __int64)(v10 + 102399) >> 12) + 6);
      *(_QWORD *)(v8 + 32) = v9 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v8 + 44) = v9 & 0xFFF;
      MmBuildMdlForNonPagedPool(*((PMDL *)v2 + 27));
      v11 = *((_QWORD *)v2 + 29);
      if ( v11 )
      {
        v12 = qword_14032E958;
        v13 = qword_14032E958;
        *(_QWORD *)v11 = 0LL;
        *(_WORD *)(v11 + 10) = 0;
        *(_DWORD *)(v11 + 40) = 4096;
        *(_WORD *)(v11 + 8) = 8 * ((((unsigned __int64)(v13 & 0xFFF) + 0x1FFF) >> 12) + 6);
        *(_QWORD *)(v11 + 32) = v12 & 0xFFFFFFFFFFFFF000uLL;
        *(_DWORD *)(v11 + 44) = v12 & 0xFFF;
        MmBuildMdlForNonPagedPool(*((PMDL *)v2 + 29));
      }
      CrashdumpDriver = PopLoadResumeContext((__int64)v2);
      if ( CrashdumpDriver < 0 )
        goto LABEL_50;
      CrashdumpDriver = BcdOpenSystemStore(&BcdStoreHandle);
      if ( CrashdumpDriver < 0 )
        goto LABEL_50;
      v14 = BcdStoreHandle;
      CrashdumpDriver = PopBcdEstablishResumeObject(BcdStoreHandle);
      v17 = v14;
      if ( CrashdumpDriver < 0
        || (CrashdumpDriver = PopBcdSetPendingResume(v14, v15, v16, BcdObjectHandle),
            BcdCloseObject(BcdObjectHandle),
            v17 = v14,
            CrashdumpDriver < 0) )
      {
        BcdCloseStore(v17);
      }
      else
      {
        BcdForciblyUnloadStore(v14);
        RtlClearAllBits((PRTL_BITMAP)v2 + 2);
        RtlSetAllBits((PRTL_BITMAP)v2 + 3);
        *((_DWORD *)v2 + 114) = PopGetHwConfigurationSignature();
        PopHiberInitializeResources(v2);
        if ( (int)PopGetBitlockerKeyLocation((__int64 *)&BcdStoreHandle) >= 0 )
        {
          v18 = (char *)((unsigned __int64)BcdStoreHandle >> 12);
          *((_QWORD *)v2 + 40) = (unsigned __int64)BcdStoreHandle >> 12;
          PopDiscardRange((_RTL_BITMAP *)v2, v18, 4LL, 1802269762);
        }
        if ( !KdPitchDebugger || KdEventLoggingEnabled )
        {
          PoSetHiberRange(v2, 2u, &KdTimerDifference, 0LL, 0x20676244u);
          PoSetHiberRange(v2, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
        }
        MmMarkHiberRange(v2, xmmword_14032E8C8, 53248LL);
        off_140321768();
        v19 = (4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12;
        *((_DWORD *)v2 + 38) = v19;
        if ( *((_QWORD *)v2 + 31) )
        {
          if ( *((unsigned int *)v2 + 64) > v19 )
            LODWORD(v19) = *((_DWORD *)v2 + 64);
          *((_DWORD *)v2 + 38) = v19;
        }
        Pages = PopAllocatePages(*((unsigned int *)v2 + 38));
        CrashdumpDriver = *((_DWORD *)v2 + 47);
        *((_QWORD *)v2 + 18) = Pages;
        if ( CrashdumpDriver < 0 )
          goto LABEL_50;
        v21 = (char *)PopAllocatePages(16LL);
        *(_QWORD *)(v6 + 8) = v21;
        if ( v21 )
        {
          PoSetHiberRange(v2, 0x8000u, v21 + 0x2000, 0xE000uLL, 0x6D656D44u);
          if ( (*(_DWORD *)(v6 + 112) & 0xFFF) != 0 )
          {
            PopInternalAddToDumpFile(v6, 0x108u, 0LL);
            PopInternalAddToDumpFile((__int64)v2, 0x1D0u, 0LL);
            KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v6, (ULONG_PTR)v2);
          }
          v22 = (PVOID *)(v6 + 16);
          do
          {
            if ( *v22 )
              PoSetHiberRange(v2, 0x8000u, *v22, *(unsigned int *)(v6 + 112), 0x66756263u);
            ++v22;
            --v4;
          }
          while ( v4 );
          UnHibernatedMdl = PopGenerateUnHibernatedMdl((__int64)v2, (unsigned int)PopHiberScratchPages);
          *((_QWORD *)v2 + 15) = UnHibernatedMdl;
          if ( !UnHibernatedMdl )
          {
            MmEmptyAllWorkingSets();
            MmFlushAllPages();
            v24 = PopGenerateUnHibernatedMdl((__int64)v2, (unsigned int)PopHiberScratchPages);
            *((_QWORD *)v2 + 15) = v24;
            if ( !v24 )
            {
              CrashdumpDriver = -1073741670;
              goto LABEL_50;
            }
          }
          if ( (HvlGetNestedPageProtectionFlags() & 4) != 0 )
          {
            v2[460] = 1;
            CrashdumpDriver = HvlpEnterIumSecureMode(1u, 28, 0, v28);
            if ( CrashdumpDriver < 0 )
              goto LABEL_50;
          }
          else
          {
            v2[460] = 0;
          }
          if ( (int)BgkResumePrepare(v2) >= 0 )
            PopBgkResumePrepared = 1;
          *((_DWORD *)v2 + 48) = *((_DWORD *)v2 + 66) - 1;
          if ( (HvlpFlags & 4) != 0 )
            HvlpAllocatePageListResources();
          CrashdumpDriver = 0;
        }
        else
        {
          CrashdumpDriver = *((_DWORD *)v2 + 47);
        }
      }
      if ( CrashdumpDriver >= 0 )
        return (unsigned int)CrashdumpDriver;
    }
    else
    {
      CrashdumpDriver = -1073741809;
    }
LABEL_50:
    PopFreeHiberContext();
    return (unsigned int)CrashdumpDriver;
  }
  return 0;
}
