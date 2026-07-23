/*
 * XREFs of InitBootProcessor @ 0x1407D089C
 * Callers:
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlInitString @ 0x14011A9A4 (RtlInitString.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     KeAdjustInterruptTime @ 0x14014C7D0 (KeAdjustInterruptTime.c)
 *     DbgLoadImageSymbols @ 0x140153D04 (DbgLoadImageSymbols.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     RtlStringCbCopyExA @ 0x14016FD30 (RtlStringCbCopyExA.c)
 *     HvlPhase1Initialize @ 0x1401706D4 (HvlPhase1Initialize.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     _strupr @ 0x1401719F4 (_strupr.c)
 *     atol @ 0x140171C20 (atol.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x14018B3C0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlStringCbCatExA @ 0x1401DC16C (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1401DC4F0 (__report_rangecheckfailure.c)
 *     KiDetectTsx @ 0x1401FEC6C (KiDetectTsx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFindMessage @ 0x140463394 (RtlFindMessage.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     KeInitializeTimerTable @ 0x14059A850 (KeInitializeTimerTable.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x1405A5548 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x1405A9CF0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x1405A9CF8 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x1405BE7FC (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1405C01C0 (RtlResetRtlTranslations.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1406CB210 (RtlpInitializeStackTraceDatabase.c)
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 *     SeInitSystem @ 0x1407BC410 (SeInitSystem.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     MmInitSystem @ 0x1407C8B48 (MmInitSystem.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 *     PsInitSystem @ 0x1407D07C8 (PsInitSystem.c)
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 *     DbgkInitialize @ 0x1407DE78C (DbgkInitialize.c)
 *     ExInitSystem @ 0x1407DF778 (ExInitSystem.c)
 *     PsInitializeQuotaSystem @ 0x1407E1018 (PsInitializeQuotaSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x1407E1BB4 (BootApplicationPersistentDataInitialize.c)
 *     WheaInitializeServices @ 0x1407E2F10 (WheaInitializeServices.c)
 *     ExComputeTickCountMultiplier @ 0x1407E3CC4 (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x1407E507C (VerifierInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1407E6DC8 (InitializeDynamicPartitioningPolicy.c)
 *     PpInitSystem @ 0x1407E78E8 (PpInitSystem.c)
 *     KeNumaInitialize @ 0x1407E8A80 (KeNumaInitialize.c)
 *     HeadlessInit @ 0x1407E9094 (HeadlessInit.c)
 *     xHalIommuRegisterDispatchTable @ 0x1407E933C (xHalIommuRegisterDispatchTable.c)
 *     ExBurnMemory @ 0x1407F7FC4 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1407F8044 (ExpRevokeBootLoaderPagePrivileges.c)
 *     RtlInitializeExceptionLog @ 0x1407FB9C0 (RtlInitializeExceptionLog.c)
 */

__int64 __fastcall InitBootProcessor(unsigned int *a1)
{
  ULONG_PTR v1; // rdx
  unsigned int *v3; // rax
  unsigned int v4; // ecx
  char v5; // di
  char *v6; // rdi
  char *v7; // rax
  char *v8; // rax
  __int64 v9; // rdx
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rdx
  unsigned int *v13; // r8
  size_t v14; // r9
  unsigned __int64 v15; // kr00_8
  size_t v16; // rcx
  __int64 v17; // rdx
  PNLSTABLEINFO v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v20; // rdx
  int v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  int v24; // eax
  int v25; // eax
  ULONG v26; // r14d
  PVOID PoolWithTag; // rax
  void *v28; // rsi
  unsigned int v29; // r15d
  unsigned int *i; // rsi
  char *v31; // r8
  unsigned int v32; // r9d
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rcx
  NTSTATUS v36; // eax
  size_t v37; // rdx
  const char *v38; // r8
  NTSTRSAFE_PSTR *v39; // r9
  NTSTATUS Message; // eax
  int v41; // ecx
  NTSTATUS v42; // eax
  size_t v43; // rdx
  const char *v44; // r8
  NTSTATUS v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  NTSTATUS v48; // eax
  NTSTATUS v49; // eax
  PVOID v50; // rdi
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  ULONG dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG Size; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcbRemaining; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+68h] [rbp-A0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v61[2]; // [rsp+70h] [rbp-98h] BYREF
  STRING Name; // [rsp+80h] [rbp-88h] BYREF
  char v63; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int8 v64[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v65; // [rsp+B8h] [rbp-50h]
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+118h] [rbp+10h] BYREF
  CHAR pszDest[256]; // [rsp+138h] [rbp+30h] BYREF
  CHAR Source[64]; // [rsp+238h] [rbp+130h] BYREF

  v1 = *a1;
  if ( *(_QWORD *)a1 != 10LL || a1[2] != 328 )
  {
    v4 = 0;
LABEL_130:
    KeBugCheckEx(0x100u, v1, a1[1], a1[2], v4);
  }
  v3 = (unsigned int *)*((_QWORD *)a1 + 30);
  v4 = *v3;
  if ( *v3 != 2552 )
    goto LABEL_130;
  MEMORY[0xFFFFF780000002C4] = v3[626];
  v5 = 0;
  if ( HvlpVsmVtlCallVa && HvlpEnterIumSecureMode(1u, 231, 0, v64) >= 0 )
  {
    v5 = 4;
    if ( (v65 & 1) != 0 )
      v5 = 6;
    if ( (v65 & 2) != 0 )
      v5 |= 0x20u;
    if ( (v65 & 4) == 0 )
      v5 |= 0x10u;
  }
  if ( (v5 & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  v6 = (char *)*((_QWORD *)a1 + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v6 )
  {
    strupr(v6);
    v7 = strstr(v6, "PERFMEM");
    if ( v7 )
    {
      v8 = strstr(v7, "=");
      if ( v8 )
      {
        v9 = (__int64)atol(v8 + 1) << 8;
        if ( *(_QWORD *)(*((_QWORD *)a1 + 30) + 2472LL) )
        {
          BBTPagesToReserve = v9;
        }
        else if ( v9 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v9, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v10 = strstr(v6, "BURNMEMORY");
    if ( v10 )
    {
      v11 = strstr(v10, "=");
      if ( v11 )
      {
        v12 = (__int64)atol(v11 + 1) << 8;
        if ( v12 )
          ExBurnMemory(a1, v12, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v6, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v13 = (unsigned int *)*((_QWORD *)a1 + 4);
  if ( v13 != a1 + 8 )
  {
    v14 = InitNlsTableSize;
    do
    {
      if ( v13[4] == 21 )
      {
        v15 = *((_QWORD *)v13 + 4);
        v61[1] = (PMESSAGE_RESOURCE_ENTRY)((v15 * (unsigned __int128)0x1000uLL) >> 64);
        if ( !is_mul_ok(v15, 0x1000uLL) )
          goto LABEL_107;
        v16 = v14;
        v14 += v15 << 12;
        if ( v14 < v16 )
        {
          InitNlsTableSize = -1LL;
LABEL_107:
          KeBugCheck(0x31u);
        }
        InitNlsTableSize = v14;
      }
      v13 = *(unsigned int **)v13;
    }
    while ( v13 != a1 + 8 );
  }
  v17 = *((_QWORD *)a1 + 28);
  InitNlsTableBase = *(void **)v17;
  InitAnsiCodePageDataOffset = 0;
  InitOemCodePageDataOffset = *(_DWORD *)(v17 + 8) - *(_DWORD *)v17;
  InitUnicodeCaseTableDataOffset = *(_DWORD *)(v17 + 16) - *(_DWORD *)v17;
  RtlInitNlsTables(
    (PUSHORT)InitNlsTableBase,
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset),
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset),
    (PNLSTABLEINFO)(unsigned int)InitOemCodePageDataOffset);
  RtlResetRtlTranslations(v18);
  WheaInitializeServices();
  off_140321A70();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  KeInitializeClock((unsigned int)InitializationPhase, (__int64)a1);
  PsInitializeQuotaSystem(1LL);
  CmGetSystemControlValues(*((_DWORD **)a1 + 21));
  if ( !PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (KeFeatureBits2 & 0x8000) != 0 && KiDisableTsx && (CurrentPrcb->MsrIa32TsxCtrl & 3) != 3 )
  {
    v20 = CurrentPrcb->MsrIa32TsxCtrl | 3;
    CurrentPrcb->MsrIa32TsxCtrl = v20;
    __writemsr(0x122u, v20);
  }
  KiTsxSupported = KiDetectTsx();
  v21 = KeInitializeTimerTable((__int64)KeGetCurrentPrcb());
  if ( v21 < 0 )
    KeBugCheckEx(0x31u, v21, 1uLL, 0LL, 0LL);
  MEMORY[0xFFFFF7800000023C] = 0;
  v22 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)a1 + 25));
  if ( v22 < 0 )
    KeBugCheckEx(0x6Eu, v22, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  NtSystemRoot.Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&NtSystemRoot.Length = 34078720;
  v23 = RtlAnsiStringToUnicodeString(&NtSystemRoot, &DestinationString, 0);
  if ( v23 < 0 )
    KeBugCheckEx(0x6Eu, v23, 1uLL, 0LL, 0LL);
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  Resource = 0LL;
  Size = 0;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &Resource, &Size) >= 0 )
  {
    KiBugCodeMessages = Resource;
  }
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v24 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v24;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v24 << 16;
  if ( InitTickRolloverDelayLength == 4 && InitTickRolloverDelayType == 4 )
  {
    v25 = InitTickRolloverDelay;
  }
  else
  {
    v25 = 0;
    InitTickRolloverDelay = 0;
  }
  if ( v25 )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-v25, 1);
    MEMORY[0xFFFFF78000000348] = KeQueryPerformanceCounter(0LL);
    KiSystemTimeErrorAccumulator = 0LL;
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheck(0x31u);
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  if ( !MmInitSystem(0LL, (ULONG_PTR)a1) )
    KeBugCheck(0x31u);
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0LL, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v26 = Size;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6342694Bu);
    v28 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v26);
    KiBugCodeMessages = v28;
  }
  if ( a1[3] < 2 )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, a1[3], 2uLL, 0LL, 0LL);
  }
  v29 = 0;
  for ( i = (unsigned int *)*((_QWORD *)a1 + 2); i != a1 + 4; ++v29 )
  {
    if ( v29 >= 3 )
    {
      v31 = (char *)*((_QWORD *)i + 10);
      if ( *(_WORD *)v31 == 92 )
      {
        v32 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v32 + 1 <= 0x100 )
        {
          LODWORD(v33) = 0;
          do
          {
            v34 = *v31;
            v31 += 2;
            v35 = (unsigned int)v33;
            v33 = (unsigned int)(v33 + 1);
            pszDest[v35] = v34;
          }
          while ( (unsigned int)v33 < v32 );
          if ( (unsigned int)v33 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v33] = 0;
LABEL_71:
          RtlInitString(&Name, pszDest);
          DbgLoadImageSymbols(&Name, *((PVOID *)i + 6), 0xFFFFFFFFuLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
              + ((unsigned __int64)NtSystemRoot.Length >> 1)
              + 17 <= 0x100 )
      {
        v36 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", 0xFFFFF78000000034uLL, i + 22);
        if ( v36 < 0 )
          KeBugCheckEx(0x31u, v36, 3uLL, 0LL, 0LL);
        goto LABEL_71;
      }
    }
    i = *(unsigned int **)i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  dword_1403254D0 = ((a1[66] & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)a1 + 30) + 152LL);
  qword_1403254D8 = *(_QWORD *)(*((_QWORD *)a1 + 30) + 2264LL);
  HvlPhase1Initialize((__int64)a1);
  if ( **((_DWORD **)a1 + 30) >= 0x9F8u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, v61);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)v61[0]->Text);
    DestinationString.Length -= 2;
    if ( (_BYTE)CmNtCSDVersion )
      v41 = (unsigned __int8)CmNtCSDVersion + 64;
    else
      v41 = 0;
    dwFlagsa = v41;
    LODWORD(MessageResourceEntry) = BYTE1(CmNtCSDVersion);
    v42 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, MessageResourceEntry);
    if ( v42 < 0 )
      KeBugCheckEx(0x31u, v42, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v45 = RtlStringCbCatExA(pszDest, v43, v44, &ppszDestEnd, &pcbRemaining, dwFlagsa);
      if ( v45 < 0 )
        KeBugCheckEx(0x31u, v45, 6uLL, 0LL, 0LL);
      v46 = RtlStringCbPrintfA(ppszDestEnd, pcbRemaining, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v46 < 0 )
        KeBugCheckEx(0x31u, v46, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v47 = RtlStringCbCopyExA(pszDest, v37, v38, v39, &pcbRemaining, dwFlags);
    if ( v47 < 0 )
      KeBugCheckEx(0x31u, v47, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - pcbRemaining;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v48 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v48 < 0 )
    KeBugCheckEx(0x31u, v48, 9uLL, 0LL, 0LL);
  v49 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v49 < 0 )
    KeBugCheckEx(0x31u, v49, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v50 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    if ( v50 )
    {
      if ( !&v63 || (int)RtlpInitializeStackTraceDatabase((__int64)v50, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v50, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  HandleTableListLock = 0LL;
  qword_14077E298 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  if ( !ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !PsInitSystem(0, a1) )
    KeBugCheck(0x60u);
  if ( (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 10240;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
