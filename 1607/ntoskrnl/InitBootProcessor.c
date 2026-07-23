/*
 * XREFs of InitBootProcessor @ 0x1407937C4
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1400846BC (DbgLoadImageSymbols.c)
 *     MmMapIoSpaceEx @ 0x14009B070 (MmMapIoSpaceEx.c)
 *     RtlInitString @ 0x1400A7D18 (RtlInitString.c)
 *     KeAdjustInterruptTime @ 0x140126F7C (KeAdjustInterruptTime.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14012E220 (KeRegisterBugCheckReasonCallback.c)
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     RtlStringCbCopyExA @ 0x14014BD0C (RtlStringCbCopyExA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _strupr @ 0x14014D1E0 (_strupr.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     atol @ 0x14014D538 (atol.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401672F0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlStringCbCatExA @ 0x1401B0DB0 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     HvlpMapStatisticsPage @ 0x1401BBA98 (HvlpMapStatisticsPage.c)
 *     HvlpSetupCachedHypercallPages @ 0x1401BC4F8 (HvlpSetupCachedHypercallPages.c)
 *     HvlpInitializePowerStatistics @ 0x1401BF490 (HvlpInitializePowerStatistics.c)
 *     HvlpInitializeHvCrashdump @ 0x1401C07CC (HvlpInitializeHvCrashdump.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x1404FF964 (RtlFindMessage.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14056022C (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x140564BF4 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140564BFC (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x14057BD3C (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x14057DD28 (RtlResetRtlTranslations.c)
 *     RtlpInitializeStackTraceDatabase @ 0x140687B3C (RtlpInitializeStackTraceDatabase.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 *     PsInitSystem @ 0x140793634 (PsInitSystem.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     DbgkInitialize @ 0x1407A18C8 (DbgkInitialize.c)
 *     SeInitSystem @ 0x1407A39CC (SeInitSystem.c)
 *     MmInitSystem @ 0x1407A39F8 (MmInitSystem.c)
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 *     InbvDriverInitialize @ 0x1407B1F00 (InbvDriverInitialize.c)
 *     ExInitSystem @ 0x1407B5704 (ExInitSystem.c)
 *     PsInitializeQuotaSystem @ 0x1407B6714 (PsInitializeQuotaSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x1407B7218 (BootApplicationPersistentDataInitialize.c)
 *     WheaInitializeServices @ 0x1407B7BF0 (WheaInitializeServices.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 *     ExComputeTickCountMultiplier @ 0x1407B8BF8 (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x1407B9E08 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x1407BC118 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1407BC99C (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x1407BCE94 (KeNumaInitialize.c)
 *     HeadlessInit @ 0x1407BD2D8 (HeadlessInit.c)
 *     xHalIommuRegisterDispatchTable @ 0x1407BD3DC (xHalIommuRegisterDispatchTable.c)
 *     ExBurnMemory @ 0x1407CD010 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1407CD090 (ExpRevokeBootLoaderPagePrivileges.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 */

__int64 __fastcall InitBootProcessor(unsigned int *a1)
{
  ULONG_PTR v1; // rdx
  unsigned int *v3; // rax
  unsigned int v4; // ecx
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // r8
  size_t v13; // r9
  unsigned __int64 v14; // kr00_8
  size_t v15; // rcx
  __int64 v16; // rdx
  PNLSTABLEINFO v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  int v20; // eax
  int v21; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG v23; // r14d
  PVOID PoolWithTag; // rax
  void *v25; // rsi
  unsigned int v26; // r15d
  unsigned int *i; // rsi
  char *v28; // r8
  unsigned int v29; // r9d
  __int64 v30; // rdx
  char v31; // al
  __int64 v32; // rcx
  NTSTATUS v33; // eax
  __int64 v34; // rsi
  size_t v35; // rdx
  const char *v36; // r8
  NTSTRSAFE_PSTR *v37; // r9
  NTSTATUS Message; // eax
  int v39; // ecx
  NTSTATUS v40; // eax
  size_t v41; // rdx
  const char *v42; // r8
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  PVOID v48; // rdi
  PVOID v49; // rax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  ULONG dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG Size; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcbRemaining; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v60; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  __int128 v62; // [rsp+80h] [rbp-88h] BYREF
  __int64 v63; // [rsp+90h] [rbp-78h]
  STRING Name; // [rsp+98h] [rbp-70h] BYREF
  char v65; // [rsp+A8h] [rbp-60h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+C0h] [rbp-48h] BYREF
  CHAR pszDest[256]; // [rsp+D8h] [rbp-30h] BYREF
  CHAR Source[64]; // [rsp+1D8h] [rbp+D0h] BYREF

  v1 = *a1;
  if ( *(_QWORD *)a1 != 10LL || a1[2] != 328 )
  {
    v4 = 0;
    goto LABEL_130;
  }
  v3 = (unsigned int *)*((_QWORD *)a1 + 30);
  v4 = *v3;
  if ( *v3 != 2624 || v3[648] != 167772162 )
LABEL_130:
    KeBugCheckEx(0x100u, v1, a1[1], a1[2], v4);
  MEMORY[0xFFFFF780000002C4] = v3[629];
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  v5 = (char *)*((_QWORD *)a1 + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v5 )
  {
    strupr(v5);
    v6 = strstr(v5, "PERFMEM");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( *(_QWORD *)(*((_QWORD *)a1 + 30) + 2472LL) )
        {
          BBTPagesToReserve = v8;
        }
        else if ( v8 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v8, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v9 = strstr(v5, "BURNMEMORY");
    if ( v9 )
    {
      v10 = strstr(v9, "=");
      if ( v10 )
      {
        v11 = (__int64)atol(v10 + 1) << 8;
        if ( v11 )
          ExBurnMemory(a1, v11, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v5, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v12 = (unsigned int *)*((_QWORD *)a1 + 4);
  if ( v12 != a1 + 8 )
  {
    v13 = InitNlsTableSize;
    do
    {
      if ( v12[4] == 21 )
      {
        v14 = *((_QWORD *)v12 + 4);
        v63 = (v14 * (unsigned __int128)0x1000uLL) >> 64;
        if ( !is_mul_ok(v14, 0x1000uLL) )
          goto LABEL_107;
        v15 = v13;
        v13 += v14 << 12;
        if ( v13 < v15 )
        {
          InitNlsTableSize = -1LL;
LABEL_107:
          KeBugCheck(0x31u);
        }
        InitNlsTableSize = v13;
      }
      v12 = *(unsigned int **)v12;
    }
    while ( v12 != a1 + 8 );
  }
  v16 = *((_QWORD *)a1 + 28);
  InitNlsTableBase = *(void **)v16;
  InitAnsiCodePageDataOffset = 0;
  InitOemCodePageDataOffset = *(_DWORD *)(v16 + 8) - *(_DWORD *)v16;
  InitUnicodeCaseTableDataOffset = *(_DWORD *)(v16 + 16) - *(_DWORD *)v16;
  RtlInitNlsTables(
    (PUSHORT)InitNlsTableBase,
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitOemCodePageDataOffset),
    (PUSHORT)((char *)InitNlsTableBase + (unsigned int)InitUnicodeCaseTableDataOffset),
    (PNLSTABLEINFO)(unsigned int)InitOemCodePageDataOffset);
  RtlResetRtlTranslations(v17);
  WheaInitializeServices();
  off_1402F25C0();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmGetSystemControlValues(*((_QWORD *)a1 + 21));
  if ( PopEnergyEstimationDisabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !KeInitSystem(0) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  MEMORY[0xFFFFF7800000023C] = 0;
  v18 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)a1 + 25));
  if ( v18 < 0 )
    KeBugCheckEx(0x6Eu, v18, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  NtSystemRoot.Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&NtSystemRoot.Length = 34078720;
  v19 = RtlAnsiStringToUnicodeString(&NtSystemRoot, &DestinationString, 0);
  if ( v19 < 0 )
    KeBugCheckEx(0x6Eu, v19, 1uLL, 0LL, 0LL);
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
  v20 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v20;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v20 << 16;
  if ( InitTickRolloverDelayLength == 4 && InitTickRolloverDelayType == 4 )
  {
    v21 = InitTickRolloverDelay;
  }
  else
  {
    v21 = 0;
    InitTickRolloverDelay = 0;
  }
  if ( v21 )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-v21, 1);
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
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(0LL, a1) )
    KeBugCheck(0x31u);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KiHwPolicyDriverImageBase = 0LL;
  qword_1407605C8 = PerformanceCounter.QuadPart;
  HalInitializeBios(0LL, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v23 = Size;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6342694Bu);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v23);
    KiBugCodeMessages = v25;
  }
  if ( a1[3] < 2 )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, a1[3], 2uLL, 0LL, 0LL);
  }
  v26 = 0;
  for ( i = (unsigned int *)*((_QWORD *)a1 + 2); i != a1 + 4; ++v26 )
  {
    if ( v26 >= 3 )
    {
      v28 = (char *)*((_QWORD *)i + 10);
      if ( *(_WORD *)v28 == 92 )
      {
        v29 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v29 + 1 <= 0x100 )
        {
          LODWORD(v30) = 0;
          do
          {
            v31 = *v28;
            v28 += 2;
            v32 = (unsigned int)v30;
            v30 = (unsigned int)(v30 + 1);
            pszDest[v32] = v31;
          }
          while ( (unsigned int)v30 < v29 );
          if ( (unsigned int)v30 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v30] = 0;
LABEL_60:
          RtlInitString(&Name, pszDest);
          DbgLoadImageSymbols(&Name, *((PVOID *)i + 6), 0xFFFFFFFFuLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
              + ((unsigned __int64)NtSystemRoot.Length >> 1)
              + 17 <= 0x100 )
      {
        v33 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", 0xFFFFF78000000034uLL, i + 22);
        if ( v33 < 0 )
          KeBugCheckEx(0x31u, v33, 3uLL, 0LL, 0LL);
        goto LABEL_60;
      }
    }
    i = *(unsigned int **)i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  dword_1402FD030 = ((a1[66] & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)a1 + 30) + 152LL);
  qword_1402FD038 = *(_QWORD *)(*((_QWORD *)a1 + 30) + 2264LL);
  if ( HviIsAnyHypervisorPresent() && (HvlpRootFlags & 4) == 0 )
  {
    HvlpHvIdentityInfoCallbackRecord.State = 0;
    KeRegisterBugCheckReasonCallback(
      &HvlpHvIdentityInfoCallbackRecord,
      (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlpHvIdentityInfoCallback,
      KbCallbackSecondaryDumpData,
      &HvlpComponentName);
  }
  if ( HvlHypervisorConnected )
  {
    HvlpSetupCachedHypercallPages((_SLIST_HEADER *)KeGetCurrentPrcb());
    HvlpInitializePowerStatistics();
    if ( (HvlpRootFlags & 0x10) != 0 )
    {
      v62 = 0uLL;
      if ( (int)HvlpMapStatisticsPage(1, &v62, &v59) >= 0 )
        HvlpHypervisorStatsPage = MmMapIoSpaceEx(v59, 4096LL, 2u);
    }
    v34 = *((_QWORD *)a1 + 30);
    HvlpFlags |= 8u;
    VslpIumPhase0Initialize(a1);
    if ( (HvlpRootFlags & 4) != 0 || VslVsmEnabled )
      HvlpInitializeHvCrashdump(*(_QWORD *)(v34 + 2168), *(_DWORD *)(v34 + 2160));
  }
  if ( **((_DWORD **)a1 + 30) >= 0xA40u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v60);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)v60->Text);
    DestinationString.Length -= 2;
    if ( (_BYTE)CmNtCSDVersion )
      v39 = (unsigned __int8)CmNtCSDVersion + 64;
    else
      v39 = 0;
    dwFlagsa = v39;
    LODWORD(MessageResourceEntry) = BYTE1(CmNtCSDVersion);
    v40 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, MessageResourceEntry);
    if ( v40 < 0 )
      KeBugCheckEx(0x31u, v40, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v43 = RtlStringCbCatExA(pszDest, v41, v42, &ppszDestEnd, &pcbRemaining, dwFlagsa);
      if ( v43 < 0 )
        KeBugCheckEx(0x31u, v43, 6uLL, 0LL, 0LL);
      v44 = RtlStringCbPrintfA(ppszDestEnd, pcbRemaining, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v44 < 0 )
        KeBugCheckEx(0x31u, v44, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v45 = RtlStringCbCopyExA(pszDest, v35, v36, v37, &pcbRemaining, dwFlags);
    if ( v45 < 0 )
      KeBugCheckEx(0x31u, v45, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - pcbRemaining;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v46 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v46 < 0 )
    KeBugCheckEx(0x31u, v46, 9uLL, 0LL, 0LL);
  v47 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v47 < 0 )
    KeBugCheckEx(0x31u, v47, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v48 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    if ( v48 )
    {
      if ( !&v65 || (int)RtlpInitializeStackTraceDatabase((__int64)v48, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v48, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v49 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v49;
    if ( v49 )
      memset(v49, 0, 0x11620uLL);
  }
  HandleTableListLock = 0LL;
  qword_140748098 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  dword_140757700 = HalQueryMaximumProcessorCount();
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !(unsigned __int8)SeInitSystem() )
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
  MEMORY[0xFFFFF78000000260] = 14393;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
