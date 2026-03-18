/*
 * XREFs of RawInputThread @ 0x140270B00
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxTimersProc @ 0x140098800 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     CreatePointerDeviceProcessEvents @ 0x140138F98 (CreatePointerDeviceProcessEvents.c)
 *     IsCurrentSessionHostServiceSession @ 0x140139520 (IsCurrentSessionHostServiceSession.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ @ 0x14013DB70 (-UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x14019B840 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline @ 0x1401DDFA8 (Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline.c)
 *     ?WakeRit@Win32k@InputTraceLogging@@SAXK@Z @ 0x1401E20F0 (-WakeRit@Win32k@InputTraceLogging@@SAXK@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x140201148 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x14020AD6C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x140214C40 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x14022FB54 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     CheckPointerDeviceConfiguration @ 0x140249038 (CheckPointerDeviceConfiguration.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x140249308 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     xxxClientEnableMMCSS @ 0x14024F2D0 (xxxClientEnableMMCSS.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x140255FD8 (-InitTimerPowerSaving@@YAXXZ.c)
 *     RitTakeOver @ 0x140257F58 (RitTakeOver.c)
 *     RegisterCDROMNotify @ 0x1402584F8 (RegisterCDROMNotify.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x14025A03C (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     GreStartTimers @ 0x14025C594 (GreStartTimers.c)
 *     InitKeyboard @ 0x14025E904 (InitKeyboard.c)
 *     InitMice @ 0x14026B254 (InitMice.c)
 *     ?Initialize@InkProcessor@@SAJXZ @ 0x14026E950 (-Initialize@InkProcessor@@SAJXZ.c)
 *     ??4?$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z @ 0x14029AFC0 (--4-$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z.c)
 *     ?RegisterSystemHotkeys@@YAXXZ @ 0x14029B3C4 (-RegisterSystemHotkeys@@YAXXZ.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14029D55C (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall RawInputThread(__int64 *a1)
{
  _QWORD *v2; // rsi
  BOOL v3; // eax
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct _KTIMER *v55; // rax
  __int64 v56; // rdx
  char v57; // r15
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rax
  PVOID v65; // rbx
  ULONG v66; // edi
  __int64 v67; // rcx
  struct tagTHREADINFO *v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  struct _KEVENT *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  NTSTATUS v80; // ebx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  HANDLE v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  int v134; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rdx
  int v141; // ebx
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  InteractiveControlManager *v155; // rax
  IVContainerForegroundSync *v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rbx
  __int64 v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // rdx
  __int64 v172; // rcx
  bool v173; // zf
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rax
  _BYTE v180[8]; // [rsp+48h] [rbp-69h] BYREF
  PVOID Object; // [rsp+50h] [rbp-61h] BYREF
  LegacyInputDispatcher *v182; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-51h] BYREF
  PVOID v184; // [rsp+68h] [rbp-49h] BYREF
  PRKEVENT v185; // [rsp+70h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v187[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v188; // [rsp+98h] [rbp-19h]
  __int64 v189; // [rsp+A8h] [rbp-9h]
  __int64 v190; // [rsp+B8h] [rbp+7h]
  PVOID Event; // [rsp+C8h] [rbp+17h] BYREF

  Handle = 0LL;
  DestinationString = 0LL;
  v185 = 0LL;
  v182 = 0LL;
  Object = (PVOID)GreGetRemoteContext();
  v2 = Object;
  memset_0(v187, 0, 0x50uLL);
  v3 = IsCurrentSessionServiceSession();
  CurrentThread = KeGetCurrentThread();
  v5 = v3;
  *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18720) = CurrentThread;
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v8 = *a1;
  SetThreadBasePriority(KeGetCurrentThread(), 16LL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL, 0LL);
  InitKeyboard(v10, v9);
  InitMice(v12, v11);
  UserSessionSwitchLeaveCrit(v13);
  InkProcessor::Initialize(v15, v14);
  LODWORD(CurrentThread) = InitSystemThread(&DestinationString);
  UserSessionState = W32GetUserSessionState(v17, v16);
  if ( (int)CurrentThread < 0 )
    goto LABEL_99;
  v190 = *(_QWORD *)(UserSessionState + 18760);
  UserGdiSessionState = W32GetUserGdiSessionState(v20);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  if ( ProcessWin32Process )
  {
    v24 = -*(_QWORD *)ProcessWin32Process;
    v23 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
    ProcessWin32Process &= v23;
  }
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v25 = *(_QWORD *)(GetDispInfo(v24, v23) + 96);
  v26 = *(_DWORD *)(*(_QWORD *)(v25 + 40) + 36LL) / 2;
  v28 = *(_QWORD *)(W32GetUserSessionState(v27, (unsigned int)(*(int *)(*(_QWORD *)(v25 + 40) + 36LL) >> 31)) + 19904);
  *(_DWORD *)(v28 + 4960) = v26;
  v29 = *(_DWORD *)(*(_QWORD *)(v25 + 40) + 40LL) / 2;
  v30 = *(_QWORD *)(W32GetUserSessionState(v28, (unsigned int)(*(int *)(*(_QWORD *)(v25 + 40) + 40LL) >> 31)) + 19904);
  *(_DWORD *)(v30 + 4964) = v29;
  v32 = *(_QWORD *)(W32GetUserSessionState(v30, v31) + 19904);
  v33 = *(_QWORD *)(v32 + 4960);
  *(_QWORD *)(W32GetUserSessionState(v32, v34) + 19216) = v33;
  ClearLogicalCursorPos();
  EnterCrit(1LL, 0LL);
  TransitionCursorSuppressionState(10LL, 1LL);
  if ( !v5 )
    RegisterSystemHotkeys();
  v37 = W32GetUserSessionState(v36, v35);
  CInputGlobals::UpdateLastInputTime(
    *(_QWORD *)(v37 + 3056),
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    14LL);
  UserSessionSwitchLeaveCrit(v38);
  v39 = Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
  *(_QWORD *)(W32GetUserSessionState(v41, v40) + 57568) = v39;
  if ( !*(_QWORD *)(W32GetUserSessionState(v43, v42) + 57568) )
    goto LABEL_99;
  v44 = W32GetUserSessionState(v20, v19);
  KeInitializeTimer(*(PKTIMER *)(v44 + 57568));
  v188 = *(_QWORD *)(W32GetUserSessionState(v46, v45) + 57568);
  v48 = W32GetUserSessionState(v188, v47);
  if ( !*(_DWORD *)(W32GetUserSessionState(v50, v49) + 68604) || *(_DWORD *)(W32GetUserSessionState(v52, v51) + 68612) )
  {
    v55 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
    *(_QWORD *)(v48 + 68936) = v55;
    if ( !v55 )
      goto LABEL_99;
    KeInitializeTimerEx(v55, SynchronizationTimer);
  }
  v189 = *(_QWORD *)(v48 + 68936);
  if ( IsRemoteConnection(v54, v53) )
  {
    v57 = 1;
    v58 = W32GetUserSessionState(v20, v56);
    v59 = *(_QWORD *)(v48 + 68936);
    v60 = *(_QWORD *)(v58 + 56968);
    v61 = *((_QWORD *)Object + 5);
    v62 = *(_QWORD *)(v60 + 16);
    v64 = W32GetUserSessionState(v60, v63);
    if ( !(unsigned int)DrvEscapeRemoteDrivers(v62, *(unsigned __int16 *)(v64 + 68744), v61, 2LL, v59, 8) )
      goto LABEL_99;
    v2 = Object;
  }
  else
  {
    v57 = 0;
  }
  if ( v5 )
  {
    LODWORD(Object) = 1;
    SGRDPgbFirstConnectionDone<int>::operator=(v20, &Object);
  }
  if ( IsCurrentSessionHostServiceSession(v20) )
  {
    v66 = 1;
    if ( PoRequestShutdownEvent(&Event) < 0 )
      goto LABEL_99;
    v65 = Event;
  }
  else
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_99;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v65 = Object;
    v66 = 2;
    Event = Object;
    v185 = (PRKEVENT)Object;
  }
  if ( !v5 )
  {
    CreatePointerDeviceProcessEvents(v20, v19);
    v65 = Event;
  }
  if ( v65 )
  {
    *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18728) = v65;
    v68 = PtiCurrent(v67);
    *(_QWORD *)(W32GetUserSessionState(v70, v69) + 18696) = v68;
    v73 = W32GetUserSessionState(v72, v71);
    *(_DWORD *)(v73 + 68928) |= 0x2000u;
    v76 = W32GetUserSessionState(v75, v74);
    v77 = (struct _KEVENT *)a1[1];
    v187[0] = *(_QWORD *)(*(_QWORD *)(v76 + 18696) + 1608LL);
    KeSetEvent(v77, 1, 0);
    v184 = *(PVOID *)(v8 + 56);
    ObReferenceObjectByPointer(v184, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v80 = KeWaitForMultipleObjects(v66, &v184, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v80 == 1 && (*(_DWORD *)(W32GetUserSessionState(v79, v78) + 18740) & 2) == 0 );
    ObfDereferenceObject(v184);
    if ( v80 == 1 && (*(_DWORD *)(W32GetUserSessionState(v82, v81) + 18740) & 2) != 0 )
    {
      KeSetEvent(v185, 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v185);
      v84 = Handle;
      if ( Handle )
        ZwClose(Handle);
      v85 = W32GetUserSessionState(v84, v83);
      KeSetEvent(*(PRKEVENT *)(v85 + 18752), 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v87, v86);
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL, v81) )
    {
      v90 = W32GetUserSessionState(v89, v88);
      KeSetEvent(*(PRKEVENT *)(v90 + 18728), 1, 0);
    }
    EnterCrit(1LL, 0LL);
    v94 = *(_QWORD *)(W32GetUserSessionState(v92, v91) + 18696);
    if ( !*(_QWORD *)(v94 + 488) )
    {
      v95 = *(_QWORD *)(W32GetUserSessionState(v94, v93) + 18696);
      v96 = *(_QWORD *)(*(_QWORD *)(v95 + 648) + 16LL);
      v98 = W32GetUserSessionState(v95, v97);
      if ( (int)xxxSwitchDesktop(*(_QWORD *)(*(_QWORD *)(v98 + 18696) + 648LL), v96, 0, 0) >= 0 )
        W32GetUserSessionState(v94, v93);
    }
    v99 = W32GetUserSessionState(v94, v93);
    KeSetEvent(*(PRKEVENT *)(v99 + 18752), 1, 0);
    if ( v5 )
    {
      v123 = W32GetUserSessionState(v101, v100);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v123 + 16832));
      v126 = W32GetUserSessionState(v125, v124);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v126 + 12920));
    }
    else
    {
      LOBYTE(v100) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v180, v100);
      v104 = W32GetUserSessionState(v103, v102);
      if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v104 + 12920)) >= 0 )
      {
        if ( v57 )
        {
          EnterCrit(1LL, 0LL);
          v109 = W32GetUserSessionState(v108, v107);
          CBaseInput::HandleTSRequest(*(_QWORD *)(v109 + 12920), 0LL);
          UserSessionSwitchLeaveCrit(v110);
        }
        v111 = W32GetUserSessionState(v106, v105);
        CBaseInput::Read(*(CBaseInput **)(v111 + 12920));
      }
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
        || !*(_DWORD *)(W32GetUserSessionState(v113, v112) + 19136) )
      {
        v114 = W32GetUserSessionState(v113, v112);
        if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v114 + 16832)) >= 0 )
        {
          v115 = W32GetUserSessionState(v113, v112);
          CBaseInput::Read(*(CBaseInput **)(v115 + 16832));
        }
      }
      if ( !v57 && !*(_DWORD *)(W32GetUserSessionState(v113, v112) + 68600) )
      {
        RegisterCDROMNotify(v116);
        LODWORD(Object) = 1;
        SGRDPgbFirstConnectionDone<int>::operator=(v117, &Object);
      }
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v180);
      InitTimerPowerSaving(v119, v118);
      ConfigureRITDelayableTimers(0LL, v120);
    }
    *(_DWORD *)(W32GetUserSessionState(v122, v121) + 18716) = 1;
    GreStartTimers();
    UserSessionSwitchLeaveCrit(v127);
    LegacyInputDispatcher::Create(&v182);
    LegacyInputDispatcher::Initialize(v182, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v187);
    v130 = W32GetUserSessionState(v129, v128);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v130 + 12920), v182);
    v133 = W32GetUserSessionState(v132, v131);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v133 + 16832), v182);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_53:
        v134 = LegacyInputDispatcher::WaitAndDispatch(v182);
        if ( !v134 )
        {
          EnterCrit(1LL, 0LL);
          xxxRemoveQueueCompletion(v137);
          goto LABEL_87;
        }
        if ( v134 == 4 )
        {
          LODWORD(Object) = 0;
          v139 = W32GetUserSessionState(v136, v135);
          KeClearEvent(*(PRKEVENT *)(v139 + 18728));
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( !(unsigned int)GetRITWakeReason((unsigned int *)&Object, v140) )
                  goto LABEL_53;
                v141 = (int)Object;
                InputTraceLogging::Win32k::WakeRit((unsigned int)Object);
                if ( v141 == 1 )
                {
                  EnterCrit(1LL, 0LL);
                  xxxProcessMouseEvent();
                  goto LABEL_74;
                }
                if ( v141 == 2 )
                {
                  InitiateWin32kCleanup();
                  if ( !IsCurrentSessionHostServiceSession(v167) )
                  {
                    EnterCrit(1LL, 0LL);
                    *(_QWORD *)(W32GetUserSessionState(v169, v168) + 18728) = 0LL;
                    ObfDereferenceObject(Event);
                    UserSessionSwitchLeaveCrit(v170);
                  }
                  if ( Handle )
                    ZwClose(Handle);
                  EnterCrit(1LL, 0LL);
                  CleanupSensorExplicitly(1LL);
                  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
                    v173 = *(_DWORD *)(W32GetUserSessionState(v172, v171) + 19136) == 0;
                  else
                    v173 = *(_DWORD *)(W32GetUserSessionState(v172, v171) + 18792) == 0;
                  if ( v173 )
                    CleanupSensorExplicitly(2LL);
                  UserSessionSwitchLeaveCrit(v174);
                  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v176, v175);
                  if ( v182 )
                    LegacyInputDispatcher::`scalar deleting destructor'(v182);
                  return;
                }
                if ( v141 != 4 )
                  break;
                v144 = W32GetUserSessionState(v142, v140);
                xxxClientEnableMMCSS((**(_DWORD **)(v144 + 19904) >> 12) & 1);
              }
              if ( v141 == 8 )
              {
                EnterCrit(1LL, 0LL);
                RitTakeOver(v146, v145);
                v149 = W32GetUserSessionState(v148, v147);
                CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v149 + 16832), v182);
                goto LABEL_74;
              }
              if ( v141 != 16 )
                break;
              PrepareForMasterInputThreadTakingOver(v182);
            }
            if ( v141 == 128 )
            {
              EnterCrit(1LL, 0LL);
              v152 = W32GetUserSessionState(v151, v150);
              ZwSetEvent(*(HANDLE *)(v152 + 18744), 0LL);
              goto LABEL_74;
            }
            if ( v141 == 32 )
            {
              EnterCrit(1LL, 0LL);
              goto LABEL_74;
            }
            if ( v141 == 64 )
              break;
            if ( v141 == 256 )
            {
              EnterCrit(1LL, 0LL);
              IVContainerForegroundSync::xxxIVSyncForeground(v156);
LABEL_74:
              UserSessionSwitchLeaveCrit(v143);
            }
          }
          EnterCrit(1LL, 0LL);
          CheckPointerDeviceConfiguration();
          v155 = InteractiveControlManager::Instance(v154, v153);
          InteractiveControlManager::UpdateExternalParameters(v155);
          TraceLoggingMouseWheelRoutingValueAtStartup();
          goto LABEL_74;
        }
        if ( v134 != 2 )
          break;
        EnterCrit(1LL, 0LL);
        v159 = W32GetUserSessionState(v158, v157);
        if ( v57 )
        {
          v161 = *(_QWORD *)(v159 + 56968);
          v162 = v2[5];
          v163 = *(_QWORD *)(v161 + 16);
          v164 = W32GetUserSessionState(v161, v160);
          DrvEscapeRemoteDrivers(v163, *(unsigned __int16 *)(v164 + 68744), v162, 1LL, 0LL, 0);
        }
        else if ( *(_DWORD *)(v159 + 68756) )
        {
          v138 = *(_QWORD *)(v159 + 68800);
          if ( v138 )
            HDXDrvEscape(v138, 1LL, 0LL, 0LL);
        }
LABEL_87:
        UserSessionSwitchLeaveCrit(v138);
      }
      if ( ((v134 - 1) & 0xFFFFFFFD) == 0 )
      {
        EnterCrit(1LL, 0LL);
        if ( (unsigned int)Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline() )
          xxxTimersProc(v166, v165);
        else
          xxxTimersProc_Old(v166, v165);
        goto LABEL_87;
      }
    }
  }
LABEL_99:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v20, v19);
  if ( v182 )
    LegacyInputDispatcher::`scalar deleting destructor'(v182);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  v179 = W32GetUserSessionState(v178, v177);
  KeSetEvent(*(PRKEVENT *)(v179 + 18752), 1, 0);
}
