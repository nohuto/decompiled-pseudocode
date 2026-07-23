/*
 * XREFs of Phase1InitializationDiscard @ 0x1407D146C
 * Callers:
 *     Phase1Initialization @ 0x14059A0DC (Phase1Initialization.c)
 * Callees:
 *     TmInitSystem @ 0x140001008 (TmInitSystem.c)
 *     KsrInitSystem_0 @ 0x140001278 (KsrInitSystem_0.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140021700 (KeExpandKernelStackAndCalloutInternal.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     FsRtlSendModernAppTermination @ 0x14006D85C (FsRtlSendModernAppTermination.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KeGenericCallDpc @ 0x1400D3924 (KeGenericCallDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     RtlInitAnsiString @ 0x1400F001C (RtlInitAnsiString.c)
 *     RtlStringCbCopyA @ 0x1400F0684 (RtlStringCbCopyA.c)
 *     RtlTimeFieldsToTime @ 0x14011A0F8 (RtlTimeFieldsToTime.c)
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     RtlTimeToTimeFields @ 0x140137F0C (RtlTimeToTimeFields.c)
 *     HviIsAnyHypervisorPresent @ 0x140159E3C (HviIsAnyHypervisorPresent.c)
 *     PoNotifySystemTimeSet @ 0x14015A6C4 (PoNotifySystemTimeSet.c)
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     InbvDisplayString @ 0x14016313C (InbvDisplayString.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14016320C (KiSetSystemAffinityThreadToProcessor.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140165160 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     KiCommitNodeAssignment @ 0x14016DCE8 (KiCommitNodeAssignment.c)
 *     KeSetAffinityProcess @ 0x14016DD9C (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x140170870 (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     strncmp @ 0x1401718E0 (strncmp.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     _strupr @ 0x1401719F4 (_strupr.c)
 *     atol @ 0x140171C20 (atol.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateSection @ 0x14017F930 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x140181730 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1401821F0 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlStringCbPrintfExA @ 0x1401DC21C (RtlStringCbPrintfExA.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     KiInitializeProcessor @ 0x1403F8C60 (KiInitializeProcessor.c)
 *     MmEnablePAT @ 0x1403FB064 (MmEnablePAT.c)
 *     KeInitializeBootProcessorShadowState @ 0x14040188C (KeInitializeBootProcessorShadowState.c)
 *     RtlFindMessage @ 0x140463394 (RtlFindMessage.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ExInitializePagedLookasideList @ 0x1404F9D70 (ExInitializePagedLookasideList.c)
 *     MmMapViewInSystemSpace @ 0x14051B270 (MmMapViewInSystemSpace.c)
 *     ExCreateCallback @ 0x1405544CC (ExCreateCallback.c)
 *     KiStartDpcThread @ 0x14059A1D4 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x1405BE7FC (RtlInitNlsTables.c)
 *     AlpcpInitSystem @ 0x1405BEC58 (AlpcpInitSystem.c)
 *     RtlResetRtlTranslations @ 0x1405C01C0 (RtlResetRtlTranslations.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     BgDisplayProgressIndicator @ 0x14075E2BC (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x14075FAAC (BgDisplayBackgroundUpdate.c)
 *     SeInitSystem @ 0x1407BC410 (SeInitSystem.c)
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     IoCreateObjectTypes @ 0x1407C39F8 (IoCreateObjectTypes.c)
 *     MmInitSystem @ 0x1407C8B48 (MmInitSystem.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 *     PsInitSystem @ 0x1407D07C8 (PsInitSystem.c)
 *     KiInitializeMTRR @ 0x1407D292C (KiInitializeMTRR.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 *     ExInitSystemPhase2 @ 0x1407DC92C (ExInitSystemPhase2.c)
 *     DbgkInitialize @ 0x1407DE78C (DbgkInitialize.c)
 *     SmInitSystem @ 0x1407DEB40 (SmInitSystem.c)
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 *     ExInitSystem @ 0x1407DF778 (ExInitSystem.c)
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 *     KiPerformGroupConfiguration @ 0x1407E3360 (KiPerformGroupConfiguration.c)
 *     VerifierInitSystem @ 0x1407E507C (VerifierInitSystem.c)
 *     CreateSystemRootLink @ 0x1407E59E8 (CreateSystemRootLink.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1407E5E08 (SeCodeIntegrityInitializePolicy.c)
 *     KiIntSteerInit @ 0x1407E6CE4 (KiIntSteerInit.c)
 *     GetBootSystemTime @ 0x1407E73E0 (GetBootSystemTime.c)
 *     PpInitSystem @ 0x1407E78E8 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x1407E898C (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x1407E89F8 (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x1407E8AF0 (ExInitializeNls.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 *     InitMultiSessionSku @ 0x1407E8D3C (InitMultiSessionSku.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407E8F58 (ExInitializeUtcTimeZoneBias.c)
 *     CreateMiniNtBootKey @ 0x1407F7DAC (CreateMiniNtBootKey.c)
 *     KiInitializeCacheErrataSupport @ 0x1407FB13C (KiInitializeCacheErrataSupport.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR a1)
{
  char *PoolWithTag; // rax
  char *v3; // rsi
  _OWORD *v4; // r12
  char *v5; // rcx
  char *v6; // r15
  char v7; // al
  char v8; // cl
  int v9; // eax
  char v10; // cl
  bool v11; // sf
  int v12; // eax
  char v13; // cl
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v15; // rbx
  int v16; // r14d
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
  unsigned int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 *v53; // r14
  unsigned int v54; // eax
  __int64 v55; // rcx
  __int64 *v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // ebx
  __int64 v59; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  int v61; // r12d
  char v62; // si
  int v63; // ebx
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 v68; // r10
  __int64 *v69; // rdx
  __int64 v70; // r9
  int v71; // r8d
  int v72; // eax
  __int64 v73; // r8
  __int64 v74; // r9
  int inited; // eax
  int v76; // eax
  ULONG_PTR v77; // rsi
  int SystemRootLink; // eax
  NTSTATUS v79; // eax
  NTSTATUS v80; // eax
  ULONG_PTR v81; // rbx
  NTSTATUS v82; // eax
  char *v83; // rbx
  PNLSTABLEINFO v84; // r9
  PNLSTABLEINFO v85; // rcx
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // ebx
  __int64 v90; // r9
  char *v91; // rbx
  const char *v92; // rbx
  int v93; // eax
  int v94; // ecx
  ULONG v95; // r9d
  int v96; // edi
  int v97; // edi
  char *v98; // rax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  char v104; // [rsp+48h] [rbp-C0h]
  char v105; // [rsp+49h] [rbp-BFh]
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v107; // [rsp+58h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v108; // [rsp+60h] [rbp-A8h] BYREF
  __int64 Buffer; // [rsp+68h] [rbp-A0h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-98h] BYREF
  ULONG Type[2]; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+80h] [rbp-88h] BYREF
  ULONG ResultDataSize; // [rsp+88h] [rbp-80h] BYREF
  LARGE_INTEGER CurrentTime; // [rsp+90h] [rbp-78h] BYREF
  char v115; // [rsp+98h] [rbp-70h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-68h] BYREF
  PVOID MappedBase; // [rsp+A8h] [rbp-60h] BYREF
  PMESSAGE_RESOURCE_ENTRY v118; // [rsp+B0h] [rbp-58h] BYREF
  char *v119; // [rsp+B8h] [rbp-50h]
  _STRING v120; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+D0h] [rbp-38h]
  LARGE_INTEGER MaximumSize; // [rsp+D8h] [rbp-30h] BYREF
  PMESSAGE_RESOURCE_ENTRY v123; // [rsp+E0h] [rbp-28h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-18h] BYREF
  ULONG_PTR ViewSize; // [rsp+F8h] [rbp-10h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+100h] [rbp-8h] BYREF
  char v127[4]; // [rsp+110h] [rbp+8h] BYREF
  int v128; // [rsp+114h] [rbp+Ch]
  LARGE_INTEGER *v129; // [rsp+118h] [rbp+10h]
  char *v130; // [rsp+120h] [rbp+18h]
  char v131; // [rsp+130h] [rbp+28h]
  char v132[4]; // [rsp+138h] [rbp+30h] BYREF
  int v133; // [rsp+13Ch] [rbp+34h]
  LARGE_INTEGER *p_Time; // [rsp+140h] [rbp+38h]
  char *v135; // [rsp+148h] [rbp+40h]
  char v136; // [rsp+158h] [rbp+50h]
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp+58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+170h] [rbp+68h] BYREF
  char pszDest[24]; // [rsp+180h] [rbp+78h] BYREF

  BugCheckParameter3 = a1;
  LOBYTE(v107) = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  v4 = PoolWithTag + 256;
  v104 = 0;
  v119 = PoolWithTag + 256;
  LODWORD(InitializationPhase) = 1;
  KeSetPriorityThread(KeGetCurrentThread(), 31);
  byte_1403E52AD &= 0xF9u;
  byte_1403E52AC = 0;
  word_140353C80 = 0;
  KiPerformGroupConfiguration(a1);
  KiCommitNodeAssignment((__int64)&ExNode0);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x61u);
  KeInitializeClock((unsigned int)InitializationPhase, a1);
  v5 = *(char **)(a1 + 216);
  if ( v5 )
    v6 = strupr(v5);
  else
    v6 = 0LL;
  if ( !v6 || !strstr(v6, "NOGUIBOOT") )
  {
    v7 = byte_140353AF0;
    byte_14034E2C8 = 0;
    if ( byte_140353AF0 )
    {
      v8 = byte_140353B10;
      if ( byte_140353B10 )
      {
        v9 = BgDisplayProgressIndicator(1);
        v10 = byte_1403539A0;
        v11 = v9 < 0;
        v7 = byte_140353AF0;
        if ( !v11 )
          v10 = 1;
        byte_1403539A0 = v10;
        v8 = byte_140353B10;
      }
      if ( v7 && v8 )
      {
        v12 = BgDisplayBackgroundUpdate(1);
        v13 = byte_1403539A1;
        if ( v12 >= 0 )
          v13 = 1;
        byte_1403539A1 = v13;
      }
    }
    qword_14034E2C0 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
    InbvDriverInitialize(1LL, a1, 7LL);
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v108);
  v15 = v3;
  ppszDestEnd = v3;
  v16 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v17 = RtlStringCbPrintfExA(v3, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
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
    LODWORD(MessageResourceEntry) = 10240;
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v108->Text, pszDest, MessageResourceEntry, v3);
    if ( v21 < 0 )
      KeBugCheckEx(0x32u, v21, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v19);
  v23 = 2;
  v24 = v4;
  v25 = v3;
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
  if ( !(unsigned __int8)PoInitSystem(0LL, a1) )
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v28 = ExpLastTimeZoneBias;
    if ( ExpLastTimeZoneBias == -1 )
    {
      v28 = ExpAltTimeZoneBias;
      ExpLastTimeZoneBias = ExpAltTimeZoneBias;
      v104 = 1;
    }
    ExpTimeZoneBias = 600000000LL * v28;
    MEMORY[0xFFFFF7800000025C] = 0;
    MEMORY[0xFFFFF78000000028] = (unsigned __int64)(600000000LL * v28) >> 32;
    MEMORY[0xFFFFF78000000020] = 600000000LL * v28;
  }
  GetBootSystemTime(*(_QWORD *)(a1 + 240), &Time);
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
  v132[0] = 0;
  p_Time = &Time;
  v136 = 0;
  v135 = &v115;
  v133 = 4;
  KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v132);
  PoNotifySystemTimeSet();
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type[0] != 4 )
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
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (__int16 *)KeActiveProcessors);
  KeInitializeBootProcessorShadowState();
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v123) < 0 )
    Text = "MultiProcessor Kernel\r\n";
  else
    Text = (const CHAR *)v123->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v120, Text);
  if ( v120.Length >= 2u )
    v120.Length -= 2;
  v44 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v44 = 1073741981;
  v45 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v44, &v108);
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
            v3,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v46 + 255) >> 8,
            &v120);
  else
    v49 = RtlStringCbPrintfA(
            v3,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v108->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v46 + 255) >> 8,
            &v120);
  if ( v49 < 0 )
    KeBugCheckEx(0x32u, v49, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v3);
  ExFreePoolWithTag(v3, 0);
  if ( !ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  v50 = KeNumberProcessors_0;
  KiClockKeepAliveCycle = ((unsigned int)KeNumberProcessors_0 + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                        / (unsigned int)KeNumberProcessors_0;
  v53 = KiProcessorBlock;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( (HvlpFlags & 1) == 0 || (HvlEnlightenments & 0x20) != 0 )
    {
      v54 = 0;
      v55 = 0LL;
      KeDpcWatchdogPeriod = 0;
      v51 = 1LL;
      KiDPCTimeout = 0;
    }
    else
    {
      v54 = KeDpcWatchdogPeriod;
      v51 = 0LL;
      v55 = (unsigned int)KiDPCTimeout;
    }
    LOBYTE(v52) = KeEnableWatchdogTimeout == 0;
    if ( (_DWORD)v51 )
    {
      KeEnableWatchdogTimeout = 0;
    }
    else
    {
      if ( !KeEnableWatchdogTimeout )
      {
        if ( (_DWORD)KeNumberProcessors_0 )
        {
          v56 = KiProcessorBlock;
          v51 = (unsigned int)KeNumberProcessors_0;
          do
          {
            v57 = *v56++;
            *(_DWORD *)(v57 + 22636) = 0;
            *(_DWORD *)(v57 + 23328) = 0;
            --v51;
          }
          while ( v51 );
        }
        v55 = (unsigned int)KiDPCTimeout;
        v54 = KeDpcWatchdogPeriod;
      }
      KeEnableWatchdogTimeout = 1;
    }
  }
  else
  {
    v54 = KeDpcWatchdogPeriod;
    v55 = (unsigned int)KiDPCTimeout;
  }
  if ( v54 )
  {
    if ( v54 < 0x7D0 )
    {
      v54 = 2000;
      KeDpcWatchdogPeriod = 2000;
    }
    v51 = 240000LL;
    if ( v54 > 0x3A980 )
    {
      v54 = 240000;
      KeDpcWatchdogPeriod = 240000;
    }
  }
  if ( (_DWORD)v55 )
  {
    if ( (unsigned int)v55 < 0x14 )
    {
      v55 = 20LL;
      KiDPCTimeout = 20;
    }
    v51 = 20000LL;
    if ( (unsigned int)v55 > 0x4E20 )
    {
      v55 = 20000LL;
      KiDPCTimeout = 20000;
    }
  }
  if ( ViVerifierEnabled )
  {
    v51 = (unsigned int)KeVerifierDpcScalingFactor;
    if ( !KeVerifierDpcScalingFactor )
    {
      v51 = 1LL;
      KeVerifierDpcScalingFactor = 1;
    }
    if ( (unsigned int)v51 > 0x64 )
    {
      v51 = 100LL;
      KeVerifierDpcScalingFactor = 100;
    }
    v55 = (unsigned int)(v51 * v55);
    KeDpcWatchdogPeriod = v51 * v54;
    KiDPCTimeout = v55;
  }
  v58 = 0;
  if ( v50 )
  {
    while ( 1 )
    {
      v59 = *v53;
      KiInitializeProcessor(*v53);
      if ( KeThreadDpcEnable )
      {
        if ( (int)KiStartDpcThread(v59) < 0 )
          break;
      }
      ++v58;
      ++v53;
      if ( v58 >= v50 )
        goto LABEL_120;
    }
LABEL_239:
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  }
LABEL_120:
  KiComputeNumaCosts(v55, v51, v52);
  SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
  KiIntSteerInit();
  if ( (int)off_140321B18() < 0 || v105 )
    MmEnablePAT();
  if ( (KiCacheErrataMonitor & 3) != 0 )
  {
    if ( (KiCacheErrataMonitor & 2) != 0 )
    {
      KiTLBCOverride = 2;
    }
    else if ( MEMORY[0xFFFFF780000002EC] )
    {
      KiTLBCOverride = 1;
    }
    else
    {
      KiTLBCOverride &= 1u;
    }
  }
  else
  {
    KiTLBCOverride = 0;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v61 = 0;
  PreviousAffinity.Group = 0;
  v62 = 0;
  PreviousAffinity.Mask = 0LL;
  v63 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      if ( v61 )
      {
        KiSetSystemAffinityThreadToProcessor(v63, 0LL);
        v64 = 1LL;
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v63, &PreviousAffinity);
        v64 = 1LL;
        v61 = 1;
      }
      if ( v63 == (_DWORD)KeNumberProcessors_0 - 1 )
        v62 = 1;
      if ( (KiCacheErrataMonitor & 3) != 0 )
      {
        LOBYTE(v64) = v62;
        if ( !(unsigned __int8)KiInitializeCacheErrataSupport(v64) )
          goto LABEL_239;
      }
      LOBYTE(v64) = v62;
      KiInitializeMTRR(v64);
      if ( (KeFeatureBits & 0x400000) != 0 )
        __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
      if ( (KeFeatureBits & 0x10000001) != 0 )
      {
        v65 = __readcr4();
        if ( (KeFeatureBits & 1) != 0 )
          v65 |= 0x100000uLL;
        if ( (KeFeatureBits & 0x10000000) != 0 )
          v65 |= 0x10000uLL;
        if ( CurrentPrcb->Number && (KeFeatureBits & 0x10000000000LL) != 0 && KiFlushPcid )
          v65 |= 0x20000uLL;
        __writecr4(v65);
        if ( (v65 & 0x20000) != 0 )
        {
          v66 = __readcr3();
          __writecr3(v66 | 2);
        }
      }
    }
    while ( ++v63 < (unsigned int)KeNumberProcessors_0 );
  }
  if ( CurrentPrcb->CpuVendor == 2 )
    KiIa32MiscEnable = __readmsr(0x1A0u);
  if ( v61 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  qword_140332868 = (__int64)&qword_140332860;
  qword_140332860 = (__int64)&qword_140332860;
  LODWORD(KiUserCodePatchMutex) = 1;
  qword_140332848 = 0LL;
  dword_140332850 = 0;
  word_140332858 = 1;
  byte_14033285A = 6;
  dword_14033285C = 0;
  v67 = *(unsigned int *)(KiProcessorBlock[0] + 1524) * (unsigned __int64)KeMaximumIncrement / 0xA;
  KiShortExecutionCycles = v67 / 0xF0;
  KiCyclesPerClockQuantum = v67 / 3;
  KiDirectQuantumTarget = v67 / 3;
  KiLockQuantumTarget = 3 * (v67 / 3);
  if ( KdpBootedNodebug )
  {
    v68 = KiWaitAlways;
    v69 = (__int64 *)&KdDebuggerDataBlock;
    v70 = KiWaitNever;
    v71 = 108;
    KdpDataBlockEncoded = 1;
    do
    {
      *v69 = v70 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(v68 ^ *v69), v70);
      ++v69;
      --v71;
    }
    while ( v71 );
  }
  v72 = KeExpandKernelStackAndCalloutInternal((void (__fastcall *)(__int64))KiVerifyScopesExecute, 0LL, 49152, 2, 0LL);
  if ( v72 < 0 )
    KeBugCheckEx(0x32u, v72, 0x5356694BuLL, 0LL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v73, v74) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem();
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v76 = DbgkInitialize();
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !SeInitSystem() )
    KeBugCheck(0x63u);
  v77 = BugCheckParameter3;
  PsInitSystem(1, (void *)BugCheckParameter3);
  if ( ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_1407228A8, 1u, 1u) < 0 )
    CallbackObject = 0LL;
  SystemRootLink = CreateSystemRootLink(v77);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !MmInitSystem(1LL, v77) )
    KeBugCheck(0x65u);
  InitMultiSessionSku();
  MaximumSize.QuadPart = InitNlsTableSize;
  v79 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v79 < 0 )
    KeBugCheckEx(0x32u, v79, 1uLL, 0LL, 0LL);
  v80 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v81 = v80;
  ZwClose(SectionHandle);
  if ( (v81 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v81, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v82 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v82 < 0 )
    KeBugCheckEx(0x32u, v82, 3uLL, 0LL, 0LL);
  v83 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v83;
  RtlInitNlsTables(
    (PUSHORT)&v83[InitAnsiCodePageDataOffset],
    (PUSHORT)&v83[InitOemCodePageDataOffset],
    (PUSHORT)&v83[InitUnicodeCaseTableDataOffset],
    v84);
  RtlResetRtlTranslations(v85);
  if ( !CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(v77) )
    KeBugCheck(0x67u);
  v86 = KsrInitSystem_0();
  if ( (int)(v86 + 0x80000000) >= 0 && v86 != -1073741637 )
    KeBugCheckEx(0x32u, v86, 0LL, 1uLL, 0LL);
  v87 = EmInitSystem(0, v77);
  if ( v87 < 0 )
    KeBugCheckEx(0x32u, v87, 8uLL, 0LL, 0LL);
  v88 = MfgInitSystem(v77);
  if ( v88 < 0 )
    KeBugCheckEx(0x32u, v88, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v77 + 240) + 2272LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  LODWORD(Buffer) = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeUtcTimeZoneBias(&CurrentTime);
  v89 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v104 )
  {
    v129 = &Time;
    Time.QuadPart = CurrentTime.QuadPart + ExpTimeZoneBias;
    v130 = &v115;
    v127[0] = 0;
    v131 = 0;
    v128 = 4;
    KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v127);
  }
  else if ( v89 != ExpLastTimeZoneBias )
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
  HvlDebuggerSupportInitialize(v77);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, v77, &KdpContext, v90);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( v6 )
    v91 = strstr(v6, "SAFEBOOT:");
  else
    v91 = 0LL;
  if ( v91 )
  {
    v92 = v91 + 9;
    if ( !strncmp(v92, "MINIMAL", 7uLL) )
    {
      v23 = 1;
      InitSafeBootMode = 1;
    }
    else
    {
      if ( strncmp(v92, "NETWORK", 7uLL) )
      {
        if ( !strncmp(v92, "DSREPAIR", 8uLL) )
        {
          v23 = 3;
          InitSafeBootMode = 3;
          v92 += 8;
        }
        else
        {
          v23 = 0;
          InitSafeBootMode = 0;
        }
        goto LABEL_200;
      }
      InitSafeBootMode = 2;
    }
    v92 += 7;
LABEL_200:
    if ( *v92 )
    {
      v93 = strncmp(v92, "(ALTERNATESHELL)", 0x10uLL);
      v23 = InitSafeBootMode;
      v94 = (unsigned __int8)v107;
      if ( !v93 )
        v94 = 1;
      LODWORD(v107) = v94;
    }
    if ( v23 )
    {
      v95 = 0;
      v96 = v23 - 1;
      if ( v96 )
      {
        v97 = v96 - 1;
        if ( v97 )
        {
          if ( v97 == 1 )
            v95 = 170;
        }
        else
        {
          v95 = 169;
        }
      }
      else
      {
        v95 = 168;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v95, &v118) >= 0 )
        InbvDisplayString((__int64)v118->Text);
    }
  }
  if ( v6 )
    v98 = strstr(v6, "BOOTLOG");
  else
    v98 = 0LL;
  if ( v98 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v108) >= 0 )
      InbvDisplayString((__int64)v108->Text);
    IopInitializeBootLogging(v77, (__int64)v119);
  }
  ExInitSystemPhase2();
  v99 = SeCodeIntegrityInitializePolicy(v77);
  if ( v99 < 0 )
    KeBugCheckEx(0x32u, v99, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v100 = ExInitializeNls();
  if ( v100 < 0 )
    KeBugCheckEx(0x32u, v100, 7uLL, 0LL, 0LL);
  v101 = ExInitializeExternalBootSupport();
  if ( v101 < 0 )
    KeBugCheckEx(0x32u, v101, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, v77) )
    KeBugCheck(0xA0u);
  return v107;
}
