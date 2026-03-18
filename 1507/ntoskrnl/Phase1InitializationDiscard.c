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
  __int64 v33; // rcx
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  const char *Text; // rbx
  ULONG v45; // r9d
  NTSTATUS v46; // eax
  __int64 v47; // r9
  __int64 v48; // rdx
  _QWORD *v49; // rcx
  NTSTATUS v50; // eax
  unsigned int v51; // r12d
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 *v54; // r14
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 *v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  int v62; // r12d
  char v63; // si
  int v64; // ebx
  __int64 v65; // rcx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // r10
  __int64 *v70; // rdx
  __int64 v71; // r9
  int v72; // r8d
  int v73; // eax
  __int64 v74; // r8
  __int64 v75; // r9
  int inited; // eax
  int v77; // eax
  ULONG_PTR v78; // rsi
  int SystemRootLink; // eax
  NTSTATUS v80; // eax
  NTSTATUS v81; // eax
  ULONG_PTR v82; // rbx
  NTSTATUS v83; // eax
  char *v84; // rbx
  PNLSTABLEINFO v85; // r9
  PNLSTABLEINFO v86; // rcx
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // ebx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  char *v95; // rbx
  const char *v96; // rbx
  int v97; // eax
  int v98; // ecx
  ULONG v99; // r9d
  int v100; // edi
  int v101; // edi
  char *v102; // rax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  char v108; // [rsp+48h] [rbp-C0h]
  char v109; // [rsp+49h] [rbp-BFh]
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v111; // [rsp+58h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v112; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v113; // [rsp+68h] [rbp-A0h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-98h] BYREF
  __int64 v115; // [rsp+78h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+80h] [rbp-88h] BYREF
  int v117; // [rsp+88h] [rbp-80h]
  LARGE_INTEGER CurrentTime; // [rsp+90h] [rbp-78h] BYREF
  char v119; // [rsp+98h] [rbp-70h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-68h] BYREF
  PVOID MappedBase; // [rsp+A8h] [rbp-60h] BYREF
  PMESSAGE_RESOURCE_ENTRY v122; // [rsp+B0h] [rbp-58h] BYREF
  char *v123; // [rsp+B8h] [rbp-50h]
  STRING v124; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+D0h] [rbp-38h]
  LARGE_INTEGER MaximumSize; // [rsp+D8h] [rbp-30h] BYREF
  PMESSAGE_RESOURCE_ENTRY v127; // [rsp+E0h] [rbp-28h] BYREF
  PVOID Object; // [rsp+F0h] [rbp-18h] BYREF
  ULONG_PTR ViewSize; // [rsp+F8h] [rbp-10h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+100h] [rbp-8h] BYREF
  char v131[4]; // [rsp+110h] [rbp+8h] BYREF
  int v132; // [rsp+114h] [rbp+Ch]
  LARGE_INTEGER *v133; // [rsp+118h] [rbp+10h]
  char *v134; // [rsp+120h] [rbp+18h]
  char v135; // [rsp+130h] [rbp+28h]
  char v136[4]; // [rsp+138h] [rbp+30h] BYREF
  int v137; // [rsp+13Ch] [rbp+34h]
  LARGE_INTEGER *p_Time; // [rsp+140h] [rbp+38h]
  char *v139; // [rsp+148h] [rbp+40h]
  char v140; // [rsp+158h] [rbp+50h]
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp+58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+170h] [rbp+68h] BYREF
  char pszDest[24]; // [rsp+180h] [rbp+78h] BYREF

  BugCheckParameter3 = a1;
  LOBYTE(v111) = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  v4 = PoolWithTag + 256;
  v108 = 0;
  v123 = PoolWithTag + 256;
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v112);
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
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v112->Text, pszDest, MessageResourceEntry, v3);
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
      v108 = 1;
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
  v136[0] = 0;
  p_Time = &Time;
  v140 = 0;
  v139 = &v119;
  v137 = 4;
  KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v136);
  PoNotifySystemTimeSet();
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v115, (__int64)&KeRegisteredProcessors) < 0
    || v117 != 4
    || (_DWORD)v115 != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v6 )
  {
    v34 = strstr(v6, " BOOTPROC=");
    if ( v34 )
    {
      v35 = strstr(v34, "=");
      if ( v35 )
        KeBootprocSpecified = atol(v35 + 1);
    }
    v36 = strstr(v6, " NUMPROC=");
    if ( v36 )
    {
      v37 = strstr(v36, "=");
      if ( v37 )
        KeNumprocSpecified = atol(v37 + 1);
    }
    v38 = strstr(v6, " HYPERVISORNUMPROC=");
    if ( v38 )
    {
      v39 = strstr(v38, "=");
      if ( v39 )
        KeHypervisorNumprocSpecified = atol(v39 + 1);
    }
    v40 = strstr(v6, " HYPERVISORROOTPROC=");
    if ( v40 )
    {
      v41 = strstr(v40, "=");
      if ( v41 )
        KeRootProcSpecified = atol(v41 + 1);
    }
    v42 = strstr(v6, " HYPERVISORROOTPROCPERNODE=");
    if ( v42 )
    {
      v43 = strstr(v42, "=");
      if ( v43 )
        KeRootProcPerNodeSpecified = atol(v43 + 1);
    }
    if ( strstr(v6, " MAXPROC") )
      KeMaximumProcessors = 640;
  }
  KeStartAllProcessors(v33);
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (__int16 *)KeActiveProcessors);
  KeInitializeBootProcessorShadowState();
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v127) < 0 )
    Text = "MultiProcessor Kernel\r\n";
  else
    Text = (const char *)v127->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v124, Text);
  if ( v124.Length >= 2u )
    v124.Length -= 2;
  v45 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v45 = 1073741981;
  v46 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v45, &v112);
  v47 = 0LL;
  v48 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v48 )
  {
    v49 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v47 += *v49;
      v49 += 2;
      --v48;
    }
    while ( v48 );
  }
  if ( v46 < 0 )
    v50 = RtlStringCbPrintfA(
            v3,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v124);
  else
    v50 = RtlStringCbPrintfA(
            v3,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v112->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v47 + 255) >> 8,
            &v124);
  if ( v50 < 0 )
    KeBugCheckEx(0x32u, v50, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)v3);
  ExFreePoolWithTag(v3, 0);
  if ( !ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  v51 = KeNumberProcessors_0;
  KiClockKeepAliveCycle = ((unsigned int)KeNumberProcessors_0 + (KeMaximumIncrement + 29999999) / KeMaximumIncrement - 1)
                        / (unsigned int)KeNumberProcessors_0;
  v54 = KiProcessorBlock;
  if ( HviIsAnyHypervisorPresent() )
  {
    if ( (HvlpFlags & 1) == 0 || (HvlEnlightenments & 0x20) != 0 )
    {
      v55 = 0;
      v56 = 0LL;
      KeDpcWatchdogPeriod = 0;
      v52 = 1LL;
      KiDPCTimeout = 0;
    }
    else
    {
      v55 = KeDpcWatchdogPeriod;
      v52 = 0LL;
      v56 = (unsigned int)KiDPCTimeout;
    }
    LOBYTE(v53) = KeEnableWatchdogTimeout == 0;
    if ( (_DWORD)v52 )
    {
      KeEnableWatchdogTimeout = 0;
    }
    else
    {
      if ( !KeEnableWatchdogTimeout )
      {
        if ( (_DWORD)KeNumberProcessors_0 )
        {
          v57 = KiProcessorBlock;
          v52 = (unsigned int)KeNumberProcessors_0;
          do
          {
            v58 = *v57++;
            *(_DWORD *)(v58 + 22636) = 0;
            *(_DWORD *)(v58 + 23328) = 0;
            --v52;
          }
          while ( v52 );
        }
        v56 = (unsigned int)KiDPCTimeout;
        v55 = KeDpcWatchdogPeriod;
      }
      KeEnableWatchdogTimeout = 1;
    }
  }
  else
  {
    v55 = KeDpcWatchdogPeriod;
    v56 = (unsigned int)KiDPCTimeout;
  }
  if ( v55 )
  {
    if ( v55 < 0x7D0 )
    {
      v55 = 2000;
      KeDpcWatchdogPeriod = 2000;
    }
    v52 = 240000LL;
    if ( v55 > 0x3A980 )
    {
      v55 = 240000;
      KeDpcWatchdogPeriod = 240000;
    }
  }
  if ( (_DWORD)v56 )
  {
    if ( (unsigned int)v56 < 0x14 )
    {
      v56 = 20LL;
      KiDPCTimeout = 20;
    }
    v52 = 20000LL;
    if ( (unsigned int)v56 > 0x4E20 )
    {
      v56 = 20000LL;
      KiDPCTimeout = 20000;
    }
  }
  if ( ViVerifierEnabled )
  {
    v52 = (unsigned int)KeVerifierDpcScalingFactor;
    if ( !KeVerifierDpcScalingFactor )
    {
      v52 = 1LL;
      KeVerifierDpcScalingFactor = 1;
    }
    if ( (unsigned int)v52 > 0x64 )
    {
      v52 = 100LL;
      KeVerifierDpcScalingFactor = 100;
    }
    v56 = (unsigned int)(v52 * v56);
    KeDpcWatchdogPeriod = v52 * v55;
    KiDPCTimeout = v56;
  }
  v59 = 0;
  if ( v51 )
  {
    while ( 1 )
    {
      v60 = *v54;
      KiInitializeProcessor(*v54);
      if ( KeThreadDpcEnable )
      {
        if ( (int)KiStartDpcThread(v60) < 0 )
          break;
      }
      ++v59;
      ++v54;
      if ( v59 >= v51 )
        goto LABEL_120;
    }
LABEL_239:
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  }
LABEL_120:
  KiComputeNumaCosts(v56, v52, v53);
  SymCryptInitEnvWindowsKernelmodeWin8_1nLater();
  KiIntSteerInit();
  if ( (int)off_140321B18() < 0 || v109 )
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
  v62 = 0;
  PreviousAffinity.Group = 0;
  v63 = 0;
  PreviousAffinity.Mask = 0LL;
  v64 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      if ( v62 )
      {
        KiSetSystemAffinityThreadToProcessor(v64, 0LL);
        v65 = 1LL;
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v64, &PreviousAffinity);
        v65 = 1LL;
        v62 = 1;
      }
      if ( v64 == (_DWORD)KeNumberProcessors_0 - 1 )
        v63 = 1;
      if ( (KiCacheErrataMonitor & 3) != 0 )
      {
        LOBYTE(v65) = v63;
        if ( !(unsigned __int8)KiInitializeCacheErrataSupport(v65) )
          goto LABEL_239;
      }
      LOBYTE(v65) = v63;
      KiInitializeMTRR(v65);
      if ( (KeFeatureBits & 0x400000) != 0 )
        __writemsr(0x1A0u, __readmsr(0x1A0u) | 0x8000000);
      if ( (KeFeatureBits & 0x10000001) != 0 )
      {
        v66 = __readcr4();
        if ( (KeFeatureBits & 1) != 0 )
          v66 |= 0x100000uLL;
        if ( (KeFeatureBits & 0x10000000) != 0 )
          v66 |= 0x10000uLL;
        if ( CurrentPrcb->Number && (KeFeatureBits & 0x10000000000LL) != 0 && KiFlushPcid )
          v66 |= 0x20000uLL;
        __writecr4(v66);
        if ( (v66 & 0x20000) != 0 )
        {
          v67 = __readcr3();
          __writecr3(v67 | 2);
        }
      }
    }
    while ( ++v64 < (unsigned int)KeNumberProcessors_0 );
  }
  if ( CurrentPrcb->CpuVendor == 2 )
    KiIa32MiscEnable = __readmsr(0x1A0u);
  if ( v62 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  qword_140332868 = (__int64)&qword_140332860;
  qword_140332860 = (__int64)&qword_140332860;
  LODWORD(KiUserCodePatchMutex) = 1;
  qword_140332848 = 0LL;
  dword_140332850 = 0;
  word_140332858 = 1;
  byte_14033285A = 6;
  dword_14033285C = 0;
  v68 = *(unsigned int *)(KiProcessorBlock[0] + 1524) * (unsigned __int64)KeMaximumIncrement / 0xA;
  KiShortExecutionCycles = v68 / 0xF0;
  KiCyclesPerClockQuantum = v68 / 3;
  KiDirectQuantumTarget = v68 / 3;
  KiLockQuantumTarget = 3 * (v68 / 3);
  if ( KdpBootedNodebug )
  {
    v69 = KiWaitAlways;
    v70 = (__int64 *)&KdDebuggerDataBlock;
    v71 = KiWaitNever;
    v72 = 108;
    KdpDataBlockEncoded = 1;
    do
    {
      *v70 = v71 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(v69 ^ *v70), v71);
      ++v70;
      --v72;
    }
    while ( v72 );
  }
  v73 = KeExpandKernelStackAndCalloutInternal((void (__fastcall *)(__int64))KiVerifyScopesExecute, 0LL, 49152, 2, 0LL);
  if ( v73 < 0 )
    KeBugCheckEx(0x32u, v73, 0x5356694BuLL, 0LL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v74, v75) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem();
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v77 = DbgkInitialize();
  if ( v77 < 0 )
    KeBugCheckEx(0x32u, v77, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !SeInitSystem() )
    KeBugCheck(0x63u);
  v78 = BugCheckParameter3;
  PsInitSystem(1, (void *)BugCheckParameter3);
  if ( ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_1407228A8, 1u, 1u) < 0 )
    CallbackObject = 0LL;
  SystemRootLink = CreateSystemRootLink(v78);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !MmInitSystem(1LL, v78) )
    KeBugCheck(0x65u);
  InitMultiSessionSku();
  MaximumSize.QuadPart = InitNlsTableSize;
  v80 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v80 < 0 )
    KeBugCheckEx(0x32u, v80, 1uLL, 0LL, 0LL);
  v81 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v82 = v81;
  ZwClose(SectionHandle);
  if ( (v82 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v82, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v83 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v83 < 0 )
    KeBugCheckEx(0x32u, v83, 3uLL, 0LL, 0LL);
  v84 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v84;
  RtlInitNlsTables(
    (PUSHORT)&v84[InitAnsiCodePageDataOffset],
    (PUSHORT)&v84[InitOemCodePageDataOffset],
    (PUSHORT)&v84[InitUnicodeCaseTableDataOffset],
    v85);
  RtlResetRtlTranslations(v86);
  if ( !CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(v78) )
    KeBugCheck(0x67u);
  v87 = KsrInitSystem_0();
  if ( (int)(v87 + 0x80000000) >= 0 && v87 != -1073741637 )
    KeBugCheckEx(0x32u, v87, 0LL, 1uLL, 0LL);
  v88 = EmInitSystem(0, v78);
  if ( v88 < 0 )
    KeBugCheckEx(0x32u, v88, 8uLL, 0LL, 0LL);
  v89 = MfgInitSystem(v78);
  if ( v89 < 0 )
    KeBugCheckEx(0x32u, v89, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v78 + 240) + 2272LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0LL);
  LODWORD(v113) = 0;
  FsRtlSendModernAppTermination(&v113, 1u, 1);
  ExInitializeUtcTimeZoneBias(&CurrentTime);
  v90 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v108 )
  {
    v133 = &Time;
    Time.QuadPart = CurrentTime.QuadPart + ExpTimeZoneBias;
    v134 = &v119;
    v131[0] = 0;
    v135 = 0;
    v132 = 4;
    KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v131);
  }
  else if ( v90 != ExpLastTimeZoneBias )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v92, v91, v93) )
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
  HvlDebuggerSupportInitialize(v78);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, v78, &KdpContext, v94);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( v6 )
    v95 = strstr(v6, "SAFEBOOT:");
  else
    v95 = 0LL;
  if ( v95 )
  {
    v96 = v95 + 9;
    if ( !strncmp(v96, "MINIMAL", 7uLL) )
    {
      v23 = 1;
      InitSafeBootMode = 1;
    }
    else
    {
      if ( strncmp(v96, "NETWORK", 7uLL) )
      {
        if ( !strncmp(v96, "DSREPAIR", 8uLL) )
        {
          v23 = 3;
          InitSafeBootMode = 3;
          v96 += 8;
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
    v96 += 7;
LABEL_200:
    if ( *v96 )
    {
      v97 = strncmp(v96, "(ALTERNATESHELL)", 0x10uLL);
      v23 = InitSafeBootMode;
      v98 = (unsigned __int8)v111;
      if ( !v97 )
        v98 = 1;
      LODWORD(v111) = v98;
    }
    if ( v23 )
    {
      v99 = 0;
      v100 = v23 - 1;
      if ( v100 )
      {
        v101 = v100 - 1;
        if ( v101 )
        {
          if ( v101 == 1 )
            v99 = 170;
        }
        else
        {
          v99 = 169;
        }
      }
      else
      {
        v99 = 168;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v99, &v122) >= 0 )
        InbvDisplayString((__int64)v122->Text);
    }
  }
  if ( v6 )
    v102 = strstr(v6, "BOOTLOG");
  else
    v102 = 0LL;
  if ( v102 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v112) >= 0 )
      InbvDisplayString((__int64)v112->Text);
    IopInitializeBootLogging(v78, (__int64)v123);
  }
  ExInitSystemPhase2();
  v103 = SeCodeIntegrityInitializePolicy(v78);
  if ( v103 < 0 )
    KeBugCheckEx(0x32u, v103, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v104 = ExInitializeNls();
  if ( v104 < 0 )
    KeBugCheckEx(0x32u, v104, 7uLL, 0LL, 0LL);
  v105 = ExInitializeExternalBootSupport();
  if ( v105 < 0 )
    KeBugCheckEx(0x32u, v105, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, v78) )
    KeBugCheck(0xA0u);
  return v111;
}
