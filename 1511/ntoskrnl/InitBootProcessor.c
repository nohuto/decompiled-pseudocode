/*
 * XREFs of InitBootProcessor @ 0x140763EA0
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     DbgLoadImageSymbols @ 0x140002788 (DbgLoadImageSymbols.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     RtlInitString @ 0x1400E561C (RtlInitString.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     KeAdjustInterruptTime @ 0x140117958 (KeAdjustInterruptTime.c)
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     RtlStringCbCopyExA @ 0x140141D14 (RtlStringCbCopyExA.c)
 *     HvlPhase1Initialize @ 0x1401428B0 (HvlPhase1Initialize.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     _strupr @ 0x140143974 (_strupr.c)
 *     atol @ 0x140143BA0 (atol.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x14015B8E0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlStringCbCatExA @ 0x1401A85AC (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1401A8930 (__report_rangecheckfailure.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x1404A12D4 (RtlFindMessage.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14051E3E8 (RtlCreateUnicodeStringFromAsciiz.c)
 *     KeInitializeTimerTable @ 0x14052F834 (KeInitializeTimerTable.c)
 *     LdrAccessResource @ 0x1405341C0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x1405341C8 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x140547798 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x140548DB8 (RtlResetRtlTranslations.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14064812C (RtlpInitializeStackTraceDatabase.c)
 *     PsInitializeQuotaSystem @ 0x14074B984 (PsInitializeQuotaSystem.c)
 *     MmInitSystem @ 0x14074C514 (MmInitSystem.c)
 *     CmGetSystemControlValues @ 0x140754FCC (CmGetSystemControlValues.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     DbgkInitialize @ 0x14075AC04 (DbgkInitialize.c)
 *     PsInitSystem @ 0x140763DCC (PsInitSystem.c)
 *     InbvDriverInitialize @ 0x140767874 (InbvDriverInitialize.c)
 *     ExInitSystem @ 0x14076AC48 (ExInitSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x14076C9D4 (BootApplicationPersistentDataInitialize.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 *     WheaInitializeServices @ 0x14076E1BC (WheaInitializeServices.c)
 *     ExComputeTickCountMultiplier @ 0x14076E808 (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x14076F860 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x1407713DC (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140771A8C (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x140771FE4 (KeNumaInitialize.c)
 *     SeInitSystem @ 0x14077228C (SeInitSystem.c)
 *     HeadlessInit @ 0x14077250C (HeadlessInit.c)
 *     xHalIommuRegisterDispatchTable @ 0x1407725B8 (xHalIommuRegisterDispatchTable.c)
 *     ExBurnMemory @ 0x140781BF0 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140781C70 (ExpRevokeBootLoaderPagePrivileges.c)
 *     RtlInitializeExceptionLog @ 0x14078505C (RtlInitializeExceptionLog.c)
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
  unsigned int *v9; // r8
  size_t v10; // r9
  __int64 v11; // rdx
  PNLSTABLEINFO v12; // rcx
  int v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  int v16; // eax
  int v17; // eax
  ULONG v18; // r14d
  PVOID PoolWithTag; // rax
  void *v20; // rsi
  unsigned int v21; // r15d
  unsigned int *i; // rsi
  char *v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rcx
  size_t v28; // rdx
  const char *v29; // r8
  NTSTRSAFE_PSTR *v30; // r9
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  int v34; // eax
  __int64 result; // rax
  unsigned __int64 v36; // kr00_8
  size_t v37; // rcx
  char *v38; // rax
  __int64 v39; // rdx
  char *v40; // rax
  __int64 v41; // rdx
  const char *v42; // rcx
  NTSTATUS v43; // eax
  NTSTATUS Message; // eax
  int v45; // ecx
  NTSTATUS v46; // eax
  size_t v47; // rdx
  const char *v48; // r8
  NTSTATUS v49; // eax
  NTSTATUS v50; // eax
  PVOID v51; // rdi
  size_t *pcbRemaining; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  ULONG dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG Size; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t cbDest; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+68h] [rbp-A0h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry[2]; // [rsp+70h] [rbp-98h] BYREF
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
LABEL_128:
    KeBugCheckEx(0x100u, v1, a1[1], a1[2], v4);
  }
  v3 = (unsigned int *)*((_QWORD *)a1 + 30);
  v4 = *v3;
  if ( *v3 != 2544 )
    goto LABEL_128;
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
      v38 = strstr(v7, "=");
      if ( v38 )
      {
        v39 = (__int64)atol(v38 + 1) << 8;
        if ( *(_QWORD *)(*((_QWORD *)a1 + 30) + 2472LL) )
        {
          BBTPagesToReserve = v39;
        }
        else if ( v39 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v39, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v8 = strstr(v6, "BURNMEMORY");
    if ( v8 )
    {
      v40 = strstr(v8, "=");
      if ( v40 )
      {
        v41 = (__int64)atol(v40 + 1) << 8;
        if ( v41 )
          ExBurnMemory(a1, v41, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v6, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v9 = (unsigned int *)*((_QWORD *)a1 + 4);
  if ( v9 != a1 + 8 )
  {
    v10 = InitNlsTableSize;
    do
    {
      if ( v9[4] == 21 )
      {
        v36 = *((_QWORD *)v9 + 4);
        MessageResourceEntry[1] = (PMESSAGE_RESOURCE_ENTRY)((v36 * (unsigned __int128)0x1000uLL) >> 64);
        if ( !is_mul_ok(v36, 0x1000uLL) )
          goto LABEL_86;
        v37 = v10;
        v10 += v36 << 12;
        if ( v10 < v37 )
        {
          InitNlsTableSize = -1LL;
LABEL_86:
          KeBugCheck(0x31u);
        }
        InitNlsTableSize = v10;
      }
      v9 = *(unsigned int **)v9;
    }
    while ( v9 != a1 + 8 );
  }
  v11 = *((_QWORD *)a1 + 28);
  InitNlsTableBase = *(void **)v11;
  InitAnsiCodePageDataOffset = 0;
  InitOemCodePageDataOffset = *(_DWORD *)(v11 + 8) - *(_DWORD *)v11;
  InitUnicodeCaseTableDataOffset = *(_DWORD *)(v11 + 16) - *(_DWORD *)v11;
  RtlInitNlsTables(
    (PUSHORT)InitNlsTableBase,
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset),
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset),
    (PNLSTABLEINFO)(unsigned int)InitOemCodePageDataOffset);
  RtlResetRtlTranslations(v12);
  WheaInitializeServices();
  off_1402D2920();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1);
  CmGetSystemControlValues(*((_DWORD **)a1 + 21));
  if ( PopEnergyEstimationDisabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  v13 = KeInitializeTimerTable((__int64)KeGetCurrentPrcb());
  if ( v13 < 0 )
    KeBugCheckEx(0x31u, v13, 1uLL, 0LL, 0LL);
  MEMORY[0xFFFFF7800000023C] = 0;
  v14 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)a1 + 25));
  if ( v14 < 0 )
    KeBugCheckEx(0x6Eu, v14, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  NtSystemRoot.Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&NtSystemRoot.Length = 34078720;
  v15 = RtlAnsiStringToUnicodeString(&NtSystemRoot, &DestinationString, 0);
  if ( v15 < 0 )
    KeBugCheckEx(0x6Eu, v15, 1uLL, 0LL, 0LL);
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
  v16 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v16;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v16 << 16;
  if ( InitTickRolloverDelayLength == 4 && InitTickRolloverDelayType == 4 )
  {
    v17 = InitTickRolloverDelay;
  }
  else
  {
    v17 = 0;
    InitTickRolloverDelay = 0;
  }
  if ( v17 )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-v17, 1);
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
  if ( !MmInitSystem(0LL, (__int64)a1) )
    KeBugCheck(0x31u);
  KiHwPolicyDriverImageBase = 0LL;
  HalInitializeBios(0LL, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v18 = Size;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6342694Bu);
    v20 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v18);
    KiBugCodeMessages = v20;
  }
  if ( a1[3] != 1 )
  {
    v42 = (const char *)*((_QWORD *)a1 + 27);
    if ( v42 )
    {
      if ( strstr(v42, "DEBUG") )
      {
        IopAutoReboot = 0;
        KeBugCheckEx(0x196u, a1[3], 1uLL, 0LL, 0LL);
      }
    }
  }
  v21 = 0;
  for ( i = (unsigned int *)*((_QWORD *)a1 + 2); i != a1 + 4; ++v21 )
  {
    if ( v21 >= 3 )
    {
      v23 = (char *)*((_QWORD *)i + 10);
      if ( *(_WORD *)v23 != 92 )
      {
        if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1) + ((unsigned __int64)NtSystemRoot.Length >> 1) + 17 > 0x100 )
          goto LABEL_46;
        v43 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", 0xFFFFF78000000034uLL, i + 22);
        if ( v43 < 0 )
          KeBugCheckEx(0x31u, v43, 3uLL, 0LL, 0LL);
        goto LABEL_45;
      }
      v24 = *((unsigned __int16 *)i + 36) >> 1;
      if ( (unsigned __int64)v24 + 1 <= 0x100 )
      {
        LODWORD(v25) = 0;
        do
        {
          v26 = *v23;
          v23 += 2;
          v27 = (unsigned int)v25;
          v25 = (unsigned int)(v25 + 1);
          pszDest[v27] = v26;
        }
        while ( (unsigned int)v25 < v24 );
        if ( (unsigned int)v25 >= 0x100uLL )
          _report_rangecheckfailure();
        pszDest[v25] = 0;
LABEL_45:
        RtlInitString(&Name, pszDest);
        DbgLoadImageSymbols(&Name, *((PVOID *)i + 6), 0xFFFFFFFFuLL);
      }
    }
LABEL_46:
    i = *(unsigned int **)i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  dword_1402D6390 = ((a1[66] & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)a1 + 30) + 152LL);
  qword_1402D6398 = *(_QWORD *)(*((_QWORD *)a1 + 30) + 2264LL);
  HvlPhase1Initialize((__int64)a1);
  if ( **((_DWORD **)a1 + 30) >= 0x9F0u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, MessageResourceEntry);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)MessageResourceEntry[0]->Text);
    DestinationString.Length -= 2;
    if ( (_BYTE)CmNtCSDVersion )
      v45 = (unsigned __int8)CmNtCSDVersion + 64;
    else
      v45 = 0;
    dwFlagsa = v45;
    LODWORD(pcbRemaining) = BYTE1(CmNtCSDVersion);
    v46 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, pcbRemaining);
    if ( v46 < 0 )
      KeBugCheckEx(0x31u, v46, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v49 = RtlStringCbCatExA(pszDest, v47, v48, &ppszDestEnd, &cbDest, dwFlagsa);
      if ( v49 < 0 )
        KeBugCheckEx(0x31u, v49, 6uLL, 0LL, 0LL);
      v50 = RtlStringCbPrintfA(ppszDestEnd, cbDest, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v50 < 0 )
        KeBugCheckEx(0x31u, v50, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v31 = RtlStringCbCopyExA(pszDest, v28, v29, v30, &cbDest, dwFlags);
    if ( v31 < 0 )
      KeBugCheckEx(0x31u, v31, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - cbDest;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v32 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v32 < 0 )
    KeBugCheckEx(0x31u, v32, 9uLL, 0LL, 0LL);
  v33 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v33 < 0 )
    KeBugCheckEx(0x31u, v33, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v51 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    if ( v51 )
    {
      if ( !&v63 || (int)RtlpInitializeStackTraceDatabase((__int64)v51, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v51, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  HandleTableListLock = 0LL;
  qword_1406FB2B8 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  if ( !ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !PsInitSystem(0, a1) )
    KeBugCheck(0x60u);
  DbgkInitialize();
  if ( v34 < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 10586;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
