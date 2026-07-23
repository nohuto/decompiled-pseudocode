/*
 * XREFs of Phase1InitializationDiscard @ 0x1407645E8
 * Callers:
 *     Phase1Initialization @ 0x14052FD40 (Phase1Initialization.c)
 * Callees:
 *     TmInitSystem @ 0x140001008 (TmInitSystem.c)
 *     KsrInitSystem_0 @ 0x140001278 (KsrInitSystem_0.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     RtlInitAnsiString @ 0x140092408 (RtlInitAnsiString.c)
 *     RtlStringCbCopyA @ 0x1400925DC (RtlStringCbCopyA.c)
 *     FsRtlSendModernAppTermination @ 0x1400CC524 (FsRtlSendModernAppTermination.c)
 *     RtlTimeFieldsToTime @ 0x1400E16C4 (RtlTimeFieldsToTime.c)
 *     KeGenericCallDpc @ 0x1400E2FD8 (KeGenericCallDpc.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     RtlTimeToTimeFields @ 0x140123118 (RtlTimeToTimeFields.c)
 *     PoNotifySystemTimeSet @ 0x140126FB0 (PoNotifySystemTimeSet.c)
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 *     KiCommitNodeAssignment @ 0x140136A8C (KiCommitNodeAssignment.c)
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x140136DF4 (InbvDisplayString.c)
 *     KeSetAffinityProcess @ 0x14014075C (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x140142A08 (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     strncmp @ 0x140143860 (strncmp.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     _strupr @ 0x140143974 (_strupr.c)
 *     atol @ 0x140143BA0 (atol.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x140152DC0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x140153880 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x140153CA0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlStringCbPrintfExA @ 0x1401A865C (RtlStringCbPrintfExA.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     KeInitializeBootProcessorShadowState @ 0x1403B105C (KeInitializeBootProcessorShadowState.c)
 *     MmMapViewInSystemSpace @ 0x1403B5C20 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlFindMessage @ 0x1404A12D4 (RtlFindMessage.c)
 *     ExCreateCallback @ 0x1404BF200 (ExCreateCallback.c)
 *     ExInitializePagedLookasideList @ 0x1404D17DC (ExInitializePagedLookasideList.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x140547798 (RtlInitNlsTables.c)
 *     AlpcpInitSystem @ 0x140547BD8 (AlpcpInitSystem.c)
 *     RtlResetRtlTranslations @ 0x140548DB8 (RtlResetRtlTranslations.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     BgDisplayProgressIndicator @ 0x1406DB274 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x1406DCA64 (BgDisplayBackgroundUpdate.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     MmInitSystem @ 0x14074C514 (MmInitSystem.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     IoCreateObjectTypes @ 0x14075A078 (IoCreateObjectTypes.c)
 *     DbgkInitialize @ 0x14075AC04 (DbgkInitialize.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140763928 (KiPerformGroupConfiguration.c)
 *     PsInitSystem @ 0x140763DCC (PsInitSystem.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     InbvDriverInitialize @ 0x140767874 (InbvDriverInitialize.c)
 *     ExInitSystemPhase2 @ 0x140768610 (ExInitSystemPhase2.c)
 *     PfInitializeSuperfetch @ 0x14076A3E8 (PfInitializeSuperfetch.c)
 *     SmInitSystem @ 0x14076A984 (SmInitSystem.c)
 *     ExInitSystem @ 0x14076AC48 (ExInitSystem.c)
 *     FsRtlInitSystem @ 0x14076C038 (FsRtlInitSystem.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 *     VerifierInitSystem @ 0x14076F860 (VerifierInitSystem.c)
 *     CreateSystemRootLink @ 0x14076FAA8 (CreateSystemRootLink.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140770B8C (SeCodeIntegrityInitializePolicy.c)
 *     GetBootSystemTime @ 0x140770EB0 (GetBootSystemTime.c)
 *     PpInitSystem @ 0x1407713DC (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140771EF0 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x140771F5C (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x140772054 (ExInitializeNls.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 *     InitMultiSessionSku @ 0x140772240 (InitMultiSessionSku.c)
 *     SeInitSystem @ 0x14077228C (SeInitSystem.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140772400 (ExInitializeUtcTimeZoneBias.c)
 *     CreateMiniNtBootKey @ 0x140781A50 (CreateMiniNtBootKey.c)
 */

bool __fastcall Phase1InitializationDiscard(_QWORD *BugCheckParameter3)
{
  bool v2; // r12
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v5; // rcx
  char *v6; // rsi
  char v7; // al
  char v8; // cl
  int v9; // eax
  char v10; // cl
  bool v11; // sf
  int v12; // eax
  char v13; // cl
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v15; // rbx
  int v16; // r15d
  NTSTATUS v17; // eax
  size_t v18; // rdi
  char *v19; // rbx
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  int v23; // edi
  _OWORD *v24; // rax
  char *v25; // rcx
  __int64 v26; // rdx
  __int128 v27; // xmm1
  int v28; // eax
  char *v29; // rax
  char *v30; // rax
  __int16 v31; // bx
  LONGLONG QuadPart; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  const CHAR *Text; // rbx
  ULONG v44; // r9d
  NTSTATUS v45; // eax
  __int64 v46; // r9
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  NTSTATUS v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  int inited; // eax
  int v53; // eax
  int SystemRootLink; // eax
  NTSTATUS v55; // eax
  NTSTATUS v56; // eax
  ULONG_PTR v57; // rbx
  NTSTATUS v58; // eax
  char *v59; // rbx
  PNLSTABLEINFO v60; // r9
  PNLSTABLEINFO v61; // rcx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // ebx
  __int64 v66; // r9
  char *v67; // rbx
  const char *v68; // rbx
  int v69; // eax
  ULONG v70; // r9d
  int v71; // edi
  int v72; // edi
  char *v73; // rax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-E0h]
  char v79; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  PMESSAGE_RESOURCE_ENTRY v81; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Type; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcbRemaining; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  int Buffer; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER CurrentTime; // [rsp+80h] [rbp-80h] BYREF
  char v88; // [rsp+88h] [rbp-78h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp-70h] BYREF
  HANDLE SectionHandle; // [rsp+98h] [rbp-68h] BYREF
  PMESSAGE_RESOURCE_ENTRY v91; // [rsp+A0h] [rbp-60h] BYREF
  _STRING v92; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp-48h] BYREF
  PMESSAGE_RESOURCE_ENTRY v94; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+D0h] [rbp-30h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D8h] [rbp-28h] BYREF
  char v98[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v99; // [rsp+ECh] [rbp-14h]
  LARGE_INTEGER *p_Time; // [rsp+F0h] [rbp-10h]
  char *v101; // [rsp+F8h] [rbp-8h]
  char v102; // [rsp+108h] [rbp+8h]
  char v103[4]; // [rsp+110h] [rbp+10h] BYREF
  int v104; // [rsp+114h] [rbp+14h]
  LARGE_INTEGER *v105; // [rsp+118h] [rbp+18h]
  char *v106; // [rsp+120h] [rbp+20h]
  char v107; // [rsp+130h] [rbp+30h]
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+38h] BYREF
  char pszDest[24]; // [rsp+148h] [rbp+48h] BYREF

  v2 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v79 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  byte_1403962AD &= 0xF9u;
  byte_1403962AC = 0;
  word_140305F08 = 0;
  KiPerformGroupConfiguration((__int64)BugCheckParameter3);
  KiCommitNodeAssignment((__int64)&ExNode0);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    KeBugCheck(0x61u);
  KeInitializeClock((unsigned int)InitializationPhase);
  v5 = (char *)BugCheckParameter3[27];
  if ( v5 )
    v6 = strupr(v5);
  else
    v6 = 0LL;
  if ( !v6 || !strstr(v6, "NOGUIBOOT") )
  {
    v7 = byte_140305D78;
    byte_1402FDE30 = 0;
    if ( byte_140305D78 )
    {
      v8 = byte_140305D99;
      if ( byte_140305D99 )
      {
        v9 = BgDisplayProgressIndicator(1);
        v10 = byte_140305C20;
        v11 = v9 < 0;
        v7 = byte_140305D78;
        if ( !v11 )
          v10 = 1;
        byte_140305C20 = v10;
        v8 = byte_140305D99;
      }
      if ( v7 && v8 )
      {
        v12 = BgDisplayBackgroundUpdate(1);
        v13 = byte_140305C21;
        if ( v12 >= 0 )
          v13 = 1;
        byte_140305C21 = v13;
      }
    }
    qword_1402FDE28 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
    InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
    DisplayBootBitmap(0);
  }
  if ( v6 && strstr(v6, "MININT") )
  {
    InitIsWinPEMode = 1;
    if ( strstr(v6, "INRAM") )
      InitWinPEModeType |= 0x80000000;
    else
      InitWinPEModeType |= 1u;
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v81);
  v15 = PoolWithTag;
  ppszDestEnd = PoolWithTag;
  v16 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v17 = RtlStringCbPrintfExA(PoolWithTag, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
    if ( v17 < 0 )
      KeBugCheckEx(0x32u, v17, 7uLL, 0LL, 0LL);
    v15 = ppszDestEnd;
    v18 = pcbRemaining;
  }
  else
  {
    v18 = 255LL;
    pcbRemaining = 255LL;
  }
  *v15 = 0;
  v19 = v15 + 1;
  ppszDestEnd = v19;
  v20 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v20 < 0 )
    KeBugCheckEx(0x32u, v20, 7uLL, 1uLL, 0LL);
  if ( v16 < 0 )
  {
    v22 = RtlStringCbCopyA(v19, v18, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v22 < 0 )
      KeBugCheckEx(0x32u, v22, 7uLL, 3uLL, 0LL);
  }
  else
  {
    LODWORD(MessageResourceEntry) = 10586;
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v81->Text, pszDest, MessageResourceEntry, PoolWithTag);
    if ( v21 < 0 )
      KeBugCheckEx(0x32u, v21, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v19);
  v23 = 2;
  v24 = PoolWithTag + 256;
  v25 = PoolWithTag;
  v26 = 2LL;
  do
  {
    *v24 = *(_OWORD *)v25;
    v24[1] = *((_OWORD *)v25 + 1);
    v24[2] = *((_OWORD *)v25 + 2);
    v24[3] = *((_OWORD *)v25 + 3);
    v24[4] = *((_OWORD *)v25 + 4);
    v24[5] = *((_OWORD *)v25 + 5);
    v24[6] = *((_OWORD *)v25 + 6);
    v24 += 8;
    v27 = *((_OWORD *)v25 + 7);
    v25 += 128;
    *(v24 - 1) = v27;
    --v26;
  }
  while ( v26 );
  if ( !(unsigned __int8)PoInitSystem(0LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v28 = ExpLastTimeZoneBias;
    if ( ExpLastTimeZoneBias == -1 )
    {
      v28 = ExpAltTimeZoneBias;
      ExpLastTimeZoneBias = ExpAltTimeZoneBias;
      v79 = 1;
    }
    ExpTimeZoneBias = 600000000LL * v28;
    MEMORY[0xFFFFF7800000025C] = 0;
    MEMORY[0xFFFFF78000000028] = (unsigned __int64)(600000000LL * v28) >> 32;
    MEMORY[0xFFFFF78000000020] = 600000000LL * v28;
  }
  GetBootSystemTime(BugCheckParameter3[30], &Time);
  if ( v6 )
  {
    v29 = strstr(v6, "YEAR");
    if ( v29 )
    {
      v30 = strstr(v29, "=");
      if ( v30 )
      {
        v31 = atol(v30 + 1);
        RtlTimeToTimeFields(&Time, &TimeFields);
        TimeFields.Year = v31;
        RtlTimeFieldsToTime(&TimeFields, &Time);
      }
    }
  }
  QuadPart = Time.QuadPart;
  if ( !ExpRealTimeIsUniversal )
    QuadPart = Time.QuadPart - ExpTimeZoneBias;
  CurrentTime.QuadPart = QuadPart;
  v98[0] = 0;
  p_Time = &Time;
  v102 = 0;
  v101 = &v88;
  v99 = 4;
  KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v98);
  PoNotifySystemTimeSet();
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v6 )
  {
    v33 = strstr(v6, " BOOTPROC=");
    if ( v33 )
    {
      v34 = strstr(v33, "=");
      if ( v34 )
        KeBootprocSpecified = atol(v34 + 1);
    }
    v35 = strstr(v6, " NUMPROC=");
    if ( v35 )
    {
      v36 = strstr(v35, "=");
      if ( v36 )
        KeNumprocSpecified = atol(v36 + 1);
    }
    v37 = strstr(v6, " HYPERVISORNUMPROC=");
    if ( v37 )
    {
      v38 = strstr(v37, "=");
      if ( v38 )
        KeHypervisorNumprocSpecified = atol(v38 + 1);
    }
    v39 = strstr(v6, " HYPERVISORROOTPROC=");
    if ( v39 )
    {
      v40 = strstr(v39, "=");
      if ( v40 )
        KeRootProcSpecified = atol(v40 + 1);
    }
    v41 = strstr(v6, " HYPERVISORROOTPROCPERNODE=");
    if ( v41 )
    {
      v42 = strstr(v41, "=");
      if ( v42 )
        KeRootProcPerNodeSpecified = atol(v42 + 1);
    }
    if ( strstr(v6, " MAXPROC") )
      KeMaximumProcessors = 640;
  }
  KeStartAllProcessors();
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  KeInitializeBootProcessorShadowState();
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v94) < 0 )
    Text = "MultiProcessor Kernel\r\n";
  else
    Text = (const CHAR *)v94->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v92, Text);
  if ( v92.Length >= 2u )
    v92.Length -= 2;
  v44 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v44 = 1073741981;
  v45 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v44, &v81);
  v46 = 0LL;
  v47 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v47 )
  {
    v48 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v46 += *v48;
      v48 += 2;
      --v47;
    }
    while ( v47 );
  }
  if ( v45 < 0 )
    v49 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v46 + 255) >> 8,
            &v92);
  else
    v49 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v81->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v46 + 255) >> 8,
            &v92);
  if ( v49 < 0 )
    KeBugCheckEx(0x32u, v49, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !KeInitSystem(1) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v50, v51) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem();
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  DbgkInitialize();
  if ( v53 < 0 )
    KeBugCheckEx(0x32u, v53, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PsInitSystem(1, BugCheckParameter3);
  if ( ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_1406A2668, 1u, 1u) < 0 )
    CallbackObject = 0LL;
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !MmInitSystem(1LL, (__int64)BugCheckParameter3) )
    KeBugCheck(0x65u);
  InitMultiSessionSku();
  MaximumSize.QuadPart = InitNlsTableSize;
  v55 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v55 < 0 )
    KeBugCheckEx(0x32u, v55, 1uLL, 0LL, 0LL);
  v56 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v57 = v56;
  ZwClose(SectionHandle);
  if ( (v57 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v57, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v58 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v58 < 0 )
    KeBugCheckEx(0x32u, v58, 3uLL, 0LL, 0LL);
  v59 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v59;
  RtlInitNlsTables(
    (PUSHORT)&v59[InitAnsiCodePageDataOffset],
    (PUSHORT)&v59[InitOemCodePageDataOffset],
    (PUSHORT)&v59[InitUnicodeCaseTableDataOffset],
    v60);
  RtlResetRtlTranslations(v61);
  if ( !CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !CmInitSystem1((ULONG_PTR)BugCheckParameter3) )
    KeBugCheck(0x67u);
  v62 = KsrInitSystem_0();
  if ( (int)(v62 + 0x80000000) >= 0 && v62 != -1073741637 )
    KeBugCheckEx(0x32u, v62, 0LL, 1uLL, 0LL);
  v63 = EmInitSystem(0, (__int64)BugCheckParameter3);
  if ( v63 < 0 )
    KeBugCheckEx(0x32u, v63, 8uLL, 0LL, 0LL);
  v64 = MfgInitSystem(BugCheckParameter3);
  if ( v64 < 0 )
    KeBugCheckEx(0x32u, v64, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  if ( (*(_BYTE *)(BugCheckParameter3[30] + 2272LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeUtcTimeZoneBias(&CurrentTime);
  v65 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v79 )
  {
    v105 = &Time;
    Time.QuadPart = ExpTimeZoneBias + CurrentTime.QuadPart;
    v106 = &v88;
    v103[0] = 0;
    v107 = 0;
    v104 = 4;
    KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v103);
  }
  else if ( v65 != ExpLastTimeZoneBias )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  ExInitializeNPagedLookasideList(&RtlLznt1DecompressChunkLookaside, 0LL, 0LL, 0x200u, 0x58uLL, 0x63647A6Cu, 0);
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList,
    0LL,
    0LL,
    0x100u,
    0x38uLL,
    0x656C5252u,
    0x10u);
  HvlDebuggerSupportInitialize((__int64)BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v66);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( v6 )
    v67 = strstr(v6, "SAFEBOOT:");
  else
    v67 = 0LL;
  if ( v67 )
  {
    v68 = v67 + 9;
    if ( !strncmp(v68, "MINIMAL", 7uLL) )
    {
      v23 = 1;
    }
    else if ( strncmp(v68, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v68, "DSREPAIR", 8uLL) )
      {
        v23 = 3;
        v68 += 8;
      }
      else
      {
        v23 = 0;
      }
      goto LABEL_126;
    }
    v68 += 7;
LABEL_126:
    InitSafeBootMode = v23;
    if ( *v68 )
    {
      v69 = strncmp(v68, "(ALTERNATESHELL)", 0x10uLL);
      v23 = InitSafeBootMode;
      v67 = 0LL;
      v2 = v69 == 0;
    }
    else
    {
      v67 = 0LL;
    }
    if ( v23 )
    {
      v70 = 0;
      v71 = v23 - 1;
      if ( v71 )
      {
        v72 = v71 - 1;
        if ( v72 )
        {
          if ( v72 == 1 )
            v70 = 170;
        }
        else
        {
          v70 = 169;
        }
      }
      else
      {
        v70 = 168;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v70, &v91) >= 0 )
        InbvDisplayString((__int64)v91->Text);
    }
  }
  if ( v6 )
    v73 = strstr(v6, "BOOTLOG");
  else
    v73 = v67;
  if ( v73 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v81) >= 0 )
      InbvDisplayString((__int64)v81->Text);
    IopInitializeBootLogging((__int64)BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  v74 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v74 < 0 )
    KeBugCheckEx(0x32u, v74, 0x69436553uLL, 0LL, (ULONG_PTR)v67);
  KdpTimeSlipPending = (int)v67;
  if ( InitIsWinPEMode != (_BYTE)v67 )
    CreateMiniNtBootKey();
  v75 = ExInitializeNls();
  if ( v75 < 0 )
    KeBugCheckEx(0x32u, v75, 7uLL, 0LL, (ULONG_PTR)v67);
  v76 = ExInitializeExternalBootSupport();
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 8uLL, 0LL, (ULONG_PTR)v67);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  return v2;
}
