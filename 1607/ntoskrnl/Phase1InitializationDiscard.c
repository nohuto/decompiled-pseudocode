/*
 * XREFs of Phase1InitializationDiscard @ 0x140794438
 * Callers:
 *     Phase1Initialization @ 0x14054EDB4 (Phase1Initialization.c)
 * Callees:
 *     TmInitSystem @ 0x140001010 (TmInitSystem.c)
 *     KsrInitSystem_0 @ 0x140001280 (KsrInitSystem_0.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     RtlTimeFieldsToTime @ 0x1400A3298 (RtlTimeFieldsToTime.c)
 *     RtlTimeToTimeFields @ 0x1400A9368 (RtlTimeToTimeFields.c)
 *     FsRtlSendModernAppTermination @ 0x1400AAD94 (FsRtlSendModernAppTermination.c)
 *     RtlStringCbCopyA @ 0x1400C76AC (RtlStringCbCopyA.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 *     PoNotifySystemTimeSet @ 0x140132370 (PoNotifySystemTimeSet.c)
 *     KiCommitNodeAssignment @ 0x140139BC0 (KiCommitNodeAssignment.c)
 *     InbvDisplayString @ 0x140139F64 (InbvDisplayString.c)
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     KeSetAffinityProcess @ 0x14014A628 (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x14014CEC8 (HvlDebuggerSupportInitialize.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _strupr @ 0x14014D1E0 (_strupr.c)
 *     strncmp @ 0x14014D3F0 (strncmp.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     atol @ 0x14014D538 (atol.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x14015C9F0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x14015D510 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlStringCbPrintfExA @ 0x1401B0E60 (RtlStringCbPrintfExA.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     KeInitializeBootProcessorShadowState @ 0x1403DD550 (KeInitializeBootProcessorShadowState.c)
 *     ExInitializePagedLookasideList @ 0x1403E4DC0 (ExInitializePagedLookasideList.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     RtlFindMessage @ 0x1404FF964 (RtlFindMessage.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x14057BD3C (RtlInitNlsTables.c)
 *     AlpcpInitSystem @ 0x14057C1B8 (AlpcpInitSystem.c)
 *     RtlResetRtlTranslations @ 0x14057DD28 (RtlResetRtlTranslations.c)
 *     IopInitializeBootLogging @ 0x140621940 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x140725000 (BgGetDisplayContext.c)
 *     BgDisplayProgressIndicator @ 0x1407271A4 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140728B50 (BgDisplayBackgroundUpdate.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140793198 (KiPerformGroupConfiguration.c)
 *     PsInitSystem @ 0x140793634 (PsInitSystem.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     IoCreateObjectTypes @ 0x14079E844 (IoCreateObjectTypes.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 *     DbgkInitialize @ 0x1407A18C8 (DbgkInitialize.c)
 *     SeInitSystem @ 0x1407A39CC (SeInitSystem.c)
 *     MmInitSystem @ 0x1407A39F8 (MmInitSystem.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     ExInitSystemPhase2 @ 0x1407A916C (ExInitSystemPhase2.c)
 *     GetBootSystemTime @ 0x1407A9E8C (GetBootSystemTime.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     InbvDriverInitialize @ 0x1407B1F00 (InbvDriverInitialize.c)
 *     PfInitializeSuperfetch @ 0x1407B3B44 (PfInitializeSuperfetch.c)
 *     ExInitSystem @ 0x1407B5704 (ExInitSystem.c)
 *     SmInitSystem @ 0x1407B62B8 (SmInitSystem.c)
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1407B9BC4 (SeCodeIntegrityInitializePolicy.c)
 *     VerifierInitSystem @ 0x1407B9E08 (VerifierInitSystem.c)
 *     CreateSystemRootLink @ 0x1407BA050 (CreateSystemRootLink.c)
 *     InitSkuSessionParameters @ 0x1407BB814 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x1407BC118 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x1407BCDA0 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x1407BCE0C (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x1407BCF04 (ExInitializeNls.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407BD1DC (ExInitializeUtcTimeZoneBias.c)
 *     CreateMiniNtBootKey @ 0x1407CCE70 (CreateMiniNtBootKey.c)
 */

bool __fastcall Phase1InitializationDiscard(_QWORD *BugCheckParameter3)
{
  bool v2; // r12
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char *v5; // rcx
  char *v6; // r14
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
  ULONG_PTR v62; // rbx
  int v63; // eax
  int v64; // eax
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // rcx
  __int64 v68; // r9
  char *v69; // rbx
  const char *v70; // rbx
  int v71; // eax
  ULONG v72; // r9d
  int v73; // edi
  int v74; // edi
  int v75; // eax
  int v76; // eax
  int v77; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  PMESSAGE_RESOURCE_ENTRY v82; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Type; // [rsp+5Ch] [rbp-A4h] BYREF
  int Buffer; // [rsp+60h] [rbp-A0h] BYREF
  size_t pcbRemaining; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER CurrentTime; // [rsp+78h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-80h] BYREF
  PVOID MappedBase; // [rsp+88h] [rbp-78h] BYREF
  char v91; // [rsp+90h] [rbp-70h] BYREF
  PMESSAGE_RESOURCE_ENTRY v92; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp-50h] BYREF
  PMESSAGE_RESOURCE_ENTRY v96; // [rsp+B8h] [rbp-48h] BYREF
  _STRING v97; // [rsp+C0h] [rbp-40h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D0h] [rbp-30h] BYREF
  char v99[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v100; // [rsp+E4h] [rbp-1Ch]
  LARGE_INTEGER *p_Time; // [rsp+E8h] [rbp-18h]
  char *v102; // [rsp+F0h] [rbp-10h]
  char v103; // [rsp+100h] [rbp+0h]
  char v104[4]; // [rsp+108h] [rbp+8h] BYREF
  int v105; // [rsp+10Ch] [rbp+Ch]
  LARGE_INTEGER *v106; // [rsp+110h] [rbp+10h]
  char *v107; // [rsp+118h] [rbp+18h]
  char v108; // [rsp+128h] [rbp+28h]
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  char pszDest[24]; // [rsp+140h] [rbp+40h] BYREF

  v2 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v80 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  byte_1403C01ED &= 0xF9u;
  byte_1403C01EC = 0;
  word_140328F18 = 0;
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
    v7 = byte_140328E20;
    byte_140323478 = 0;
    if ( byte_140328E20 )
    {
      v8 = byte_140328D13;
      if ( byte_140328D13 )
      {
        v9 = BgDisplayProgressIndicator(1);
        v10 = byte_140328D12;
        v11 = v9 < 0;
        v7 = byte_140328E20;
        if ( !v11 )
          v10 = 1;
        byte_140328D12 = v10;
        v8 = byte_140328D13;
      }
      if ( v7 && v8 )
      {
        v12 = BgDisplayBackgroundUpdate(1);
        v13 = byte_140328D10;
        if ( v12 >= 0 )
          v13 = 1;
        byte_140328D10 = v13;
      }
    }
    qword_140323480 = (__int64 (__fastcall *)(_QWORD))DisplayFilter;
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v82);
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
    LODWORD(MessageResourceEntry) = 14393;
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v82->Text, pszDest, MessageResourceEntry, PoolWithTag);
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
      v80 = 1;
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
  v99[0] = 0;
  p_Time = &Time;
  v103 = 0;
  v102 = &v91;
  v100 = 4;
  KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v99);
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
  qword_1407605E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_1407605F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  KeInitializeBootProcessorShadowState();
  if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v92) < 0 )
    Text = "MultiProcessor Kernel\r\n";
  else
    Text = (const CHAR *)v92->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v97, Text);
  if ( v97.Length >= 2u )
    v97.Length -= 2;
  v44 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v44 = 1073741981;
  v45 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v44, &v82);
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
            &v97);
  else
    v49 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v82->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v46 + 255) >> 8,
            &v97);
  if ( v49 < 0 )
    KeBugCheckEx(0x32u, v49, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !(unsigned __int8)ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  if ( !(unsigned __int8)IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !KeInitSystem(1) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL, v50, v51) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem();
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v53 = DbgkInitialize();
  if ( v53 < 0 )
    KeBugCheckEx(0x32u, v53, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !(unsigned __int8)SeInitSystem() )
    KeBugCheck(0x63u);
  PsInitSystem(1, BugCheckParameter3);
  if ( ExCreateCallback((PCALLBACK_OBJECT *)&CallbackObject, (POBJECT_ATTRIBUTES)&stru_1406EA880, 1u, 1u) < 0 )
    CallbackObject = 0LL;
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !(unsigned __int8)MmInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
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
  if ( !(unsigned __int8)CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1((ULONG_PTR)BugCheckParameter3) )
    KeBugCheck(0x67u);
  InitSkuSessionParameters();
  qword_1407605D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( VslVsmEnabled )
  {
    VslpIumKsrInitContext = (__int64)VslpKsrEnterIumSecureMode;
    qword_1407605B8 = (__int64)VslpRegisterKsrCallback;
  }
  BgGetDisplayContext();
  v62 = (int)KsrInitSystem_0();
  qword_1407605E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v62 + 0x80000000) >= 0 && (_DWORD)v62 != -1073741637 )
    KeBugCheckEx(0x32u, v62, 0LL, 1uLL, 0LL);
  v63 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v63 < 0 )
    KeBugCheckEx(0x32u, v63, 8uLL, 0LL, 0LL);
  v64 = MfgInitSystem(BugCheckParameter3);
  if ( v64 < 0 )
    KeBugCheckEx(0x32u, v64, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch(v65);
  SmInitSystem(0LL);
  if ( (*(_BYTE *)(BugCheckParameter3[30] + 2272LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( (HvlpFlags & 2) != 0 )
    ZwUpdateWnfStateData(&WNF_HVL_CPU_MGMT_PARTITION, 0LL, 0, 0LL, 0LL, 0, 0);
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeUtcTimeZoneBias(&CurrentTime);
  v66 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v80 )
  {
    v106 = &Time;
    Time.QuadPart = CurrentTime.QuadPart + ExpTimeZoneBias;
    v107 = &v91;
    v104[0] = 0;
    v108 = 0;
    v105 = 4;
    KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v104);
  }
  else if ( v66 != ExpLastTimeZoneBias )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v67) )
    KeBugCheck(0x68u);
  ExInitializeNPagedLookasideList(&RtlLznt1DecompressChunkLookaside, 0LL, 0LL, 0x200u, 0x58uLL, 0x63647A6Cu, 0);
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList,
    0LL,
    0LL,
    0,
    0x38uLL,
    0x656C5252u,
    0x10u);
  HvlDebuggerSupportInitialize((__int64)BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext, v68);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  LpcLegacyMaxMessageLength = 648;
  if ( (int)AlpcpInitSystem() < 0 )
    KeBugCheck(0x6Au);
  LpcPortObjectType = AlpcPortObjectType;
  LpcWaitablePortObjectType = (__int64)AlpcPortObjectType;
  if ( v6 )
    v69 = strstr(v6, "SAFEBOOT:");
  else
    v69 = 0LL;
  if ( v69 )
  {
    v70 = v69 + 9;
    if ( !strncmp(v70, "MINIMAL", 7uLL) )
    {
      v23 = 1;
    }
    else if ( strncmp(v70, "NETWORK", 7uLL) )
    {
      if ( !strncmp(v70, "DSREPAIR", 8uLL) )
      {
        v23 = 3;
        v70 += 8;
        InitSafeBootMode = 3;
      }
      else
      {
        v23 = 0;
        InitSafeBootMode = 0;
      }
      goto LABEL_130;
    }
    InitSafeBootMode = v23;
    v70 += 7;
LABEL_130:
    if ( *v70 )
    {
      v71 = strncmp(v70, "(ALTERNATESHELL)", 0x10uLL);
      v23 = InitSafeBootMode;
      v2 = v71 == 0;
    }
    if ( v23 )
    {
      v72 = 0;
      v73 = v23 - 1;
      if ( v73 )
      {
        v74 = v73 - 1;
        if ( v74 )
        {
          if ( v74 == 1 )
            v72 = 170;
        }
        else
        {
          v72 = 169;
        }
      }
      else
      {
        v72 = 168;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v72, &v96) >= 0 )
        InbvDisplayString((__int64)v96->Text);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter3[30] + 116LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v82) >= 0 )
      InbvDisplayString((__int64)v82->Text);
    IopInitializeBootLogging((__int64)BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v75 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v75 < 0 )
    KeBugCheckEx(0x32u, v75, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v76 = ExInitializeNls();
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 7uLL, 0LL, 0LL);
  v77 = ExInitializeExternalBootSupport();
  if ( v77 < 0 )
    KeBugCheckEx(0x32u, v77, 8uLL, 0LL, 0LL);
  if ( !(unsigned __int8)PoInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0xA0u);
  return v2;
}
