/*
 * XREFs of UserPowerInfoCallout @ 0x1C000517C
 * Callers:
 *     W32CalloutDispatch @ 0x1C00045B0 (W32CalloutDispatch.c)
 * Callees:
 *     IsModerncoreUserPowerInfoCalloutSupported_0 @ 0x1C0002238 (IsModerncoreUserPowerInfoCalloutSupported_0.c)
 *     ModerncoreUserPowerInfoCallout_0 @ 0x1C0002240 (ModerncoreUserPowerInfoCallout_0.c)
 *     IsWakeRITForConfigSwitchSupported_0 @ 0x1C0002248 (IsWakeRITForConfigSwitchSupported_0.c)
 *     WakeRITForConfigSwitch_0 @ 0x1C0002250 (WakeRITForConfigSwitch_0.c)
 *     IsSendPTPLatencyMgtRequestSupported_0 @ 0x1C0002258 (IsSendPTPLatencyMgtRequestSupported_0.c)
 *     SendPTPLatencyMgtRequest_0 @ 0x1C0002260 (SendPTPLatencyMgtRequest_0.c)
 *     EtwTraceDisplayReqChange @ 0x1C000733C (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C000735C (CitDisplayRequestChange.c)
 *     UpdateLastInput @ 0x1C0007440 (UpdateLastInput.c)
 *     QueuePowerRequest @ 0x1C0007A70 (QueuePowerRequest.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0007B9C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0007DB4 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0044E4C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0044EC4 (EnterCritAvoidingDitHitTestHazard.c)
 *     CitLastInputUpdate @ 0x1C0052950 (CitLastInputUpdate.c)
 *     SetPendingInput @ 0x1C00708A0 (SetPendingInput.c)
 *     SqmPowerState @ 0x1C0079410 (SqmPowerState.c)
 *     PowerUpdateBrightnessLevels @ 0x1C007BAD8 (PowerUpdateBrightnessLevels.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A4AD8 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5, int *a6)
{
  unsigned int v6; // edi
  int v8; // r14d
  int v9; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  struct tagTHREADINFO *v11; // r15
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rcx
  PVOID v14; // rcx
  __int64 v15; // r13
  int v16; // ecx
  int v17; // r8d
  LARGE_INTEGER v18; // r12
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  LARGE_INTEGER *v22; // rbx
  struct tagTHREADINFO *v23; // rbx
  __int64 v24; // r8
  unsigned __int8 v25; // dl
  int v26; // ecx
  int v27; // r15d
  LARGE_INTEGER *v28; // rbx
  struct tagTHREADINFO *v29; // rbx
  int v30; // esi
  int v31; // ebx
  __int64 v32; // r8
  int v33; // r14d
  int v34; // r15d
  __int64 v35; // rsi
  LARGE_INTEGER *v36; // rbx
  struct tagTHREADINFO *v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // r8
  LARGE_INTEGER *v40; // rbx
  struct tagTHREADINFO *v41; // rbx
  struct tagTHREADINFO **v42; // rax
  __int64 v43; // rcx
  PVOID v44; // rcx
  __int64 v45; // r15
  int v46; // ecx
  int v47; // r8d
  LARGE_INTEGER v48; // r14
  LARGE_INTEGER *v49; // rbx
  struct tagTHREADINFO *v50; // rbx
  struct tagTHREADINFO **v51; // rax
  __int64 v52; // rcx
  PVOID v53; // rcx
  __int64 v54; // r15
  int v55; // ecx
  int v56; // r8d
  LARGE_INTEGER v57; // r14
  LARGE_INTEGER *v58; // rbx
  struct tagTHREADINFO *v59; // rbx
  struct tagTHREADINFO **v60; // rax
  __int64 v61; // rcx
  PVOID v62; // rcx
  __int64 v63; // r15
  int v64; // ecx
  int v65; // r8d
  LARGE_INTEGER v66; // r14
  LARGE_INTEGER *v67; // rbx
  struct tagTHREADINFO *v68; // rbx
  struct tagTHREADINFO **v69; // rax
  __int64 v70; // rcx
  PVOID v71; // rcx
  __int64 v72; // r15
  int v73; // ecx
  int v74; // r8d
  LARGE_INTEGER v75; // r14
  LARGE_INTEGER *v76; // rbx
  struct tagTHREADINFO *v77; // rbx
  struct tagTHREADINFO **v78; // rax
  __int64 v79; // rcx
  PVOID v80; // rcx
  __int64 v81; // r15
  int v82; // ecx
  int v83; // r8d
  LARGE_INTEGER v84; // r14
  LARGE_INTEGER *v85; // rbx
  struct tagTHREADINFO *v86; // rbx
  struct tagTHREADINFO **v87; // rax
  __int64 v88; // rcx
  PVOID v89; // rcx
  __int64 v90; // r15
  int v91; // ecx
  int v92; // r8d
  LARGE_INTEGER v93; // r14
  LARGE_INTEGER *v94; // rbx
  struct tagTHREADINFO *v95; // rbx
  struct tagTHREADINFO **v96; // rax
  __int64 v97; // rcx
  PVOID v98; // rcx
  __int64 v99; // r15
  int v100; // ecx
  int v101; // r8d
  LARGE_INTEGER v102; // r14
  LARGE_INTEGER *v103; // rbx
  struct tagTHREADINFO *v104; // rbx
  struct tagTHREADINFO **v105; // rax
  __int64 v106; // rcx
  PVOID v107; // rcx
  __int64 v108; // r15
  int v109; // ecx
  int v110; // r8d
  LARGE_INTEGER v111; // r14
  enum POWER_MONITOR_REQUEST_REASON v112; // ecx
  LARGE_INTEGER *v113; // rbx
  struct tagTHREADINFO *v114; // rbx
  struct tagTHREADINFO **v115; // rax
  __int64 v116; // rcx
  PVOID v117; // rcx
  __int64 v118; // r14
  int v119; // ecx
  LARGE_INTEGER v120; // rsi
  int v121; // r8d
  LARGE_INTEGER *v122; // rbx
  struct tagTHREADINFO *v123; // rbx
  struct tagTHREADINFO **v124; // rax
  __int64 v125; // rcx
  PVOID v126; // rcx
  __int64 v127; // r14
  int v128; // ecx
  LARGE_INTEGER v129; // rsi
  int v130; // r8d
  LARGE_INTEGER *v131; // rbx
  struct tagTHREADINFO *v132; // rbx
  struct tagTHREADINFO **v133; // rax
  __int64 v134; // rcx
  PVOID v135; // rcx
  __int64 v136; // r15
  int v137; // ecx
  int v138; // r8d
  LARGE_INTEGER v139; // r14
  LARGE_INTEGER *v140; // rbx
  struct tagTHREADINFO *v141; // rbx
  struct tagTHREADINFO **v142; // rax
  __int64 v143; // rcx
  PVOID v144; // rcx
  __int64 v145; // r15
  int v146; // ecx
  int v147; // r8d
  LARGE_INTEGER v148; // r14
  LARGE_INTEGER *v149; // rbx
  struct tagTHREADINFO *v150; // rbx
  struct tagTHREADINFO **v151; // rax
  __int64 v152; // rcx
  PVOID v153; // rcx
  __int64 v154; // r15
  int v155; // ecx
  int v156; // r8d
  LARGE_INTEGER v157; // r14
  LARGE_INTEGER *v158; // rbx
  struct tagTHREADINFO *v159; // rbx
  struct tagTHREADINFO **v160; // rax
  __int64 v161; // rcx
  PVOID v162; // rcx
  __int64 v163; // r14
  int v164; // ecx
  LARGE_INTEGER v165; // rsi
  int v166; // r8d
  int v168; // [rsp+30h] [rbp-10h] BYREF
  __int64 v169; // [rsp+38h] [rbp-8h]

  v6 = 0;
  v8 = a3;
  v9 = a1;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_32;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      if ( (unsigned int)IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v11 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v11 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v14 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
    }
    v15 = PsGetCurrentThreadWin32Thread(v13);
    if ( v15 )
    {
      v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v16, (unsigned int)&AcquiredExclusiveUserCritEvent, v17, v18.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v18.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v18.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v17,
          0,
          1000 * v18.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    UserSessionSwitchLeaveCrit();
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_32:
  if ( !v9 )
  {
    if ( v8 != 20 || !a4 )
      return (unsigned int)-1073741823;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v40 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v40 )
        v40[1] = KeQueryPerformanceCounter(0LL);
      v41 = 0LL;
      while ( 1 )
      {
        v42 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v42 )
          v41 = *v42;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v41 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v41 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v44 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v41 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v44 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v44, UserRequest, 0, 0, 0LL);
      }
      v45 = PsGetCurrentThreadWin32Thread(v43);
      if ( v45 )
      {
        v48 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v45 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v46,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v47,
            v48.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v48.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v48.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v47,
            0,
            1000 * v48.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v45 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v41;
      gbValidateHandleForIL = 1;
      if ( gProtocolType )
        goto LABEL_82;
      giPowerOffTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      goto LABEL_211;
    }
    if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v49 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v49 )
        v49[1] = KeQueryPerformanceCounter(0LL);
      v50 = 0LL;
      while ( 1 )
      {
        v51 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v51 )
          v50 = *v51;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v50 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v50 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v53 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v50 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v53 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v53, UserRequest, 0, 0, 0LL);
      }
      v54 = PsGetCurrentThreadWin32Thread(v52);
      if ( v54 )
      {
        v57 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v54 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v55,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v56,
            v57.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v57.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v57.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v56,
            0,
            1000 * v57.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v54 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v50;
      gbValidateHandleForIL = 1;
      if ( !gProtocolType || !dword_1C0100024 )
        goto LABEL_82;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      goto LABEL_211;
    }
    if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v58 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v58 )
        v58[1] = KeQueryPerformanceCounter(0LL);
      v59 = 0LL;
      while ( 1 )
      {
        v60 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v60 )
          v59 = *v60;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v59 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v59 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v62 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v59 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v62 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v62, UserRequest, 0, 0, 0LL);
      }
      v63 = PsGetCurrentThreadWin32Thread(v61);
      if ( v63 )
      {
        v66 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v63 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v64,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v65,
            v66.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v66.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v66.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v65,
            0,
            1000 * v66.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v63 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v59;
      gbValidateHandleForIL = 1;
      if ( gProtocolType )
        goto LABEL_82;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      if ( giPowerSessionActivityTimeOutMs )
        gPowerAdaptiveState = 0;
      goto LABEL_211;
    }
    if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v67 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v67 )
        v67[1] = KeQueryPerformanceCounter(0LL);
      v68 = 0LL;
      while ( 1 )
      {
        v69 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v69 )
          v68 = *v69;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v68 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v68 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v71 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v68 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v71 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v71, UserRequest, 0, 0, 0LL);
      }
      v72 = PsGetCurrentThreadWin32Thread(v70);
      if ( v72 )
      {
        v75 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v72 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v73,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v74,
            v75.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v75.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v75.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v74,
            0,
            1000 * v75.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v72 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v68;
      gbValidateHandleForIL = 1;
      giDimTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
LABEL_211:
      if ( (int)IsModerncoreUserPowerInfoCalloutSupported_0() >= 0 )
        ModerncoreUserPowerInfoCallout_0();
      goto LABEL_82;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v76 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v76 )
        v76[1] = KeQueryPerformanceCounter(0LL);
      v77 = 0LL;
      while ( 1 )
      {
        v78 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v78 )
          v77 = *v78;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v77 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v77 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v80 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v77 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v80 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v80, UserRequest, 0, 0, 0LL);
      }
      v81 = PsGetCurrentThreadWin32Thread(v79);
      if ( v81 )
      {
        v84 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v81 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v82,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v83,
            v84.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v84.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v84.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v83,
            0,
            1000 * v84.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v81 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v77;
      gbValidateHandleForIL = 1;
      dword_1C00FFF98 = *((_DWORD *)a4 + 4);
      PowerUpdateBrightnessLevels();
      if ( dword_1C00FFF88 != 2 || dword_1C00FFFA8 == dword_1C00FFF9C )
        goto LABEL_82;
      v168 = 7;
      goto LABEL_492;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v85 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v85 )
        v85[1] = KeQueryPerformanceCounter(0LL);
      v86 = 0LL;
      while ( 1 )
      {
        v87 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v87 )
          v86 = *v87;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v86 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v86 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v89 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v86 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v89 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v89, UserRequest, 0, 0, 0LL);
      }
      v90 = PsGetCurrentThreadWin32Thread(v88);
      if ( v90 )
      {
        v93 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v90 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v91,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v92,
            v93.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v93.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v93.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v92,
            0,
            1000 * v93.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v90 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v86;
      gbValidateHandleForIL = 1;
      dword_1C00FFF90 = *((_DWORD *)a4 + 4);
    }
    else
    {
      if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 != *(_QWORD *)a4
        || *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 != *((_QWORD *)a4 + 1) )
      {
        if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == *((_QWORD *)a4 + 1) )
        {
          v103 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v103 )
            v103[1] = KeQueryPerformanceCounter(0LL);
          v104 = 0LL;
          while ( 1 )
          {
            v105 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
            if ( v105 )
              v104 = *v105;
            if ( (unsigned int)IsCurrentProcessDwm()
              || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v104 != (struct tagTHREADINFO *)gptiTSRequest )
            {
              break;
            }
            if ( gbRITBlockedOnDIT )
            {
              if ( v104 == gptiRit )
                break;
              ++gcRITBlockedOnDITWaiters;
              ExReleaseResourceAndLeavePriorityRegion(gpresUser);
              v107 = gpsemRITBlockedOnDITWaiters;
            }
            else
            {
              if ( gbDITInHitTest != 1 || v104 == gptiRit )
                break;
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeavePriorityRegion(gpresUser);
              v107 = gpsemDITHitTestWaiters;
            }
            KeWaitForSingleObject(v107, UserRequest, 0, 0, 0LL);
          }
          v108 = PsGetCurrentThreadWin32Thread(v106);
          if ( v108 )
          {
            v111 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v108 + 8));
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
              && (qword_1C00FEA40 & 0x200000010000000LL) != 0
              && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              Template_xqx(
                v109,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v110,
                v111.LowPart,
                0,
                gullUserCritAcquireToken);
            }
            if ( v111.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                1000 * v111.QuadPart / gliQpcFreq.QuadPart,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v110,
                0,
                1000 * v111.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v108 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v104;
          gbValidateHandleForIL = 1;
          if ( gSqmIsOptedIn && !gProtocolType )
            SqmPowerState();
          dword_1C00FFFC0 = *((_DWORD *)a4 + 4) == 0;
          if ( gProtocolType )
            goto LABEL_82;
          v112 = MonitorRequestReasonAcDcDisplayBurst;
        }
        else
        {
          if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 != *(_QWORD *)a4
            || *(_QWORD *)GUID_BATTERY_COUNT.Data4 != *((_QWORD *)a4 + 1) )
          {
            if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == *((_QWORD *)a4 + 1) )
            {
              v122 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v122 )
                v122[1] = KeQueryPerformanceCounter(0LL);
              v123 = 0LL;
              while ( 1 )
              {
                v124 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
                if ( v124 )
                  v123 = *v124;
                if ( (unsigned int)IsCurrentProcessDwm()
                  || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v123 != (struct tagTHREADINFO *)gptiTSRequest )
                {
                  break;
                }
                if ( gbRITBlockedOnDIT )
                {
                  if ( v123 == gptiRit )
                    break;
                  ++gcRITBlockedOnDITWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v126 = gpsemRITBlockedOnDITWaiters;
                }
                else
                {
                  if ( gbDITInHitTest != 1 || v123 == gptiRit )
                    break;
                  ++gcDITHitTestWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v126 = gpsemDITHitTestWaiters;
                }
                KeWaitForSingleObject(v126, UserRequest, 0, 0, 0LL);
              }
              v127 = PsGetCurrentThreadWin32Thread(v125);
              if ( v127 )
              {
                v129 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v127 + 8));
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
                  && (qword_1C00FEA40 & 0x200000010000000LL) != 0
                  && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v128,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v130,
                    v129.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v129.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v129.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v130,
                    0,
                    1000 * v129.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v127 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v123;
              gbValidateHandleForIL = 1;
              goto LABEL_82;
            }
            if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 == *((_QWORD *)a4 + 1) )
            {
              if ( *((_DWORD *)a4 + 4) )
              {
                dword_1C00FFFB4 = 1;
                v168 = 5;
                v169 = 13LL;
                QueuePowerRequest(&v168, 0LL, a3);
              }
              else
              {
                dword_1C00FFFB4 = 0;
              }
              return v6;
            }
            if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 == *((_QWORD *)a4 + 1) )
            {
              v131 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v131 )
                v131[1] = KeQueryPerformanceCounter(0LL);
              v132 = 0LL;
              while ( 1 )
              {
                v133 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
                if ( v133 )
                  v132 = *v133;
                if ( (unsigned int)IsCurrentProcessDwm()
                  || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v132 != (struct tagTHREADINFO *)gptiTSRequest )
                {
                  break;
                }
                if ( gbRITBlockedOnDIT )
                {
                  if ( v132 == gptiRit )
                    break;
                  ++gcRITBlockedOnDITWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v135 = gpsemRITBlockedOnDITWaiters;
                }
                else
                {
                  if ( gbDITInHitTest != 1 || v132 == gptiRit )
                    break;
                  ++gcDITHitTestWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v135 = gpsemDITHitTestWaiters;
                }
                KeWaitForSingleObject(v135, UserRequest, 0, 0, 0LL);
              }
              v136 = PsGetCurrentThreadWin32Thread(v134);
              if ( v136 )
              {
                v139 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v136 + 8));
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
                  && (qword_1C00FEA40 & 0x200000010000000LL) != 0
                  && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v137,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v138,
                    v139.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v139.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v139.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v138,
                    0,
                    1000 * v139.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v136 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v132;
              gbValidateHandleForIL = 1;
              dword_1C00FFFDC = *((_DWORD *)a4 + 4);
            }
            else if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4
                   && *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
            {
              v140 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v140 )
                v140[1] = KeQueryPerformanceCounter(0LL);
              v141 = 0LL;
              while ( 1 )
              {
                v142 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
                if ( v142 )
                  v141 = *v142;
                if ( (unsigned int)IsCurrentProcessDwm()
                  || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v141 != (struct tagTHREADINFO *)gptiTSRequest )
                {
                  break;
                }
                if ( gbRITBlockedOnDIT )
                {
                  if ( v141 == gptiRit )
                    break;
                  ++gcRITBlockedOnDITWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v144 = gpsemRITBlockedOnDITWaiters;
                }
                else
                {
                  if ( gbDITInHitTest != 1 || v141 == gptiRit )
                    break;
                  ++gcDITHitTestWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v144 = gpsemDITHitTestWaiters;
                }
                KeWaitForSingleObject(v144, UserRequest, 0, 0, 0LL);
              }
              v145 = PsGetCurrentThreadWin32Thread(v143);
              if ( v145 )
              {
                v148 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v145 + 8));
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
                  && (qword_1C00FEA40 & 0x200000010000000LL) != 0
                  && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v146,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v147,
                    v148.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v148.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v148.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v147,
                    0,
                    1000 * v148.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v145 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v141;
              gbValidateHandleForIL = 1;
              dword_1C00FFFA4 = *((_DWORD *)a4 + 4);
            }
            else
            {
              if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 != *(_QWORD *)a4
                || *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 != *((_QWORD *)a4 + 1) )
              {
                if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4
                  && *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 == *((_QWORD *)a4 + 1) )
                {
                  if ( !*((_DWORD *)a4 + 4) )
                    return v6;
                  v158 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                  if ( v158 )
                    v158[1] = KeQueryPerformanceCounter(0LL);
                  v159 = 0LL;
                  while ( 1 )
                  {
                    v160 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v160 )
                      v159 = *v160;
                    if ( (unsigned int)IsCurrentProcessDwm()
                      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v159 != (struct tagTHREADINFO *)gptiTSRequest )
                    {
                      break;
                    }
                    if ( gbRITBlockedOnDIT )
                    {
                      if ( v159 == gptiRit )
                        break;
                      ++gcRITBlockedOnDITWaiters;
                      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                      v162 = gpsemRITBlockedOnDITWaiters;
                    }
                    else
                    {
                      if ( gbDITInHitTest != 1 || v159 == gptiRit )
                        break;
                      ++gcDITHitTestWaiters;
                      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                      v162 = gpsemDITHitTestWaiters;
                    }
                    KeWaitForSingleObject(v162, UserRequest, 0, 0, 0LL);
                  }
                  v163 = PsGetCurrentThreadWin32Thread(v161);
                  if ( v163 )
                  {
                    v165 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v163 + 8));
                    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
                      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
                      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
                      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
                      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                    {
                      Template_xqx(
                        v164,
                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                        v166,
                        v165.LowPart,
                        0,
                        gullUserCritAcquireToken);
                    }
                    if ( v165.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                    {
                      Template_xqx(
                        1000 * v165.QuadPart / gliQpcFreq.QuadPart,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v166,
                        0,
                        1000 * v165.QuadPart / gliQpcFreq.QuadPart,
                        gullUserCritAcquireToken);
                    }
                    *(_QWORD *)(v163 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                  }
                  gdwUpdateKeyboard |= 2u;
                  gptiCurrent = v159;
                  gbValidateHandleForIL = 1;
                  goto LABEL_82;
                }
                return (unsigned int)-1073741823;
              }
              v149 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v149 )
                v149[1] = KeQueryPerformanceCounter(0LL);
              v150 = 0LL;
              while ( 1 )
              {
                v151 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
                if ( v151 )
                  v150 = *v151;
                if ( (unsigned int)IsCurrentProcessDwm()
                  || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v150 != (struct tagTHREADINFO *)gptiTSRequest )
                {
                  break;
                }
                if ( gbRITBlockedOnDIT )
                {
                  if ( v150 == gptiRit )
                    break;
                  ++gcRITBlockedOnDITWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v153 = gpsemRITBlockedOnDITWaiters;
                }
                else
                {
                  if ( gbDITInHitTest != 1 || v150 == gptiRit )
                    break;
                  ++gcDITHitTestWaiters;
                  ExReleaseResourceAndLeavePriorityRegion(gpresUser);
                  v153 = gpsemDITHitTestWaiters;
                }
                KeWaitForSingleObject(v153, UserRequest, 0, 0, 0LL);
              }
              v154 = PsGetCurrentThreadWin32Thread(v152);
              if ( v154 )
              {
                v157 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v154 + 8));
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
                  && (qword_1C00FEA40 & 0x200000010000000LL) != 0
                  && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v155,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v156,
                    v157.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v157.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v157.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v156,
                    0,
                    1000 * v157.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v154 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v150;
              gbValidateHandleForIL = 1;
              dword_1C00FFFE0 = *((_DWORD *)a4 + 4);
            }
            goto LABEL_488;
          }
          v113 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v113 )
            v113[1] = KeQueryPerformanceCounter(0LL);
          v114 = 0LL;
          while ( 1 )
          {
            v115 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
            if ( v115 )
              v114 = *v115;
            if ( (unsigned int)IsCurrentProcessDwm()
              || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v114 != (struct tagTHREADINFO *)gptiTSRequest )
            {
              break;
            }
            if ( gbRITBlockedOnDIT )
            {
              if ( v114 == gptiRit )
                break;
              ++gcRITBlockedOnDITWaiters;
              ExReleaseResourceAndLeavePriorityRegion(gpresUser);
              v117 = gpsemRITBlockedOnDITWaiters;
            }
            else
            {
              if ( gbDITInHitTest != 1 || v114 == gptiRit )
                break;
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeavePriorityRegion(gpresUser);
              v117 = gpsemDITHitTestWaiters;
            }
            KeWaitForSingleObject(v117, UserRequest, 0, 0, 0LL);
          }
          v118 = PsGetCurrentThreadWin32Thread(v116);
          if ( v118 )
          {
            v120 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v118 + 8));
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
              && (qword_1C00FEA40 & 0x200000010000000LL) != 0
              && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              Template_xqx(
                v119,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v121,
                v120.LowPart,
                0,
                gullUserCritAcquireToken);
            }
            if ( v120.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                1000 * v120.QuadPart / gliQpcFreq.QuadPart,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v121,
                0,
                1000 * v120.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v118 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v114;
          gbValidateHandleForIL = 1;
          if ( gProtocolType || dword_1C00FFFC0 )
            goto LABEL_82;
          v112 = MonitorRequestReasonBatteryCountChange;
        }
        PowerDisplayBurst(v112);
LABEL_82:
        UserSessionSwitchLeaveCrit();
        return v6;
      }
      v94 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v94 )
        v94[1] = KeQueryPerformanceCounter(0LL);
      v95 = 0LL;
      while ( 1 )
      {
        v96 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
        if ( v96 )
          v95 = *v96;
        if ( (unsigned int)IsCurrentProcessDwm()
          || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v95 != (struct tagTHREADINFO *)gptiTSRequest )
        {
          break;
        }
        if ( gbRITBlockedOnDIT )
        {
          if ( v95 == gptiRit )
            break;
          ++gcRITBlockedOnDITWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v98 = gpsemRITBlockedOnDITWaiters;
        }
        else
        {
          if ( gbDITInHitTest != 1 || v95 == gptiRit )
            break;
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeavePriorityRegion(gpresUser);
          v98 = gpsemDITHitTestWaiters;
        }
        KeWaitForSingleObject(v98, UserRequest, 0, 0, 0LL);
      }
      v99 = PsGetCurrentThreadWin32Thread(v97);
      if ( v99 )
      {
        v102 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v99 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
          && (qword_1C00FEA40 & 0x200000010000000LL) != 0
          && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v100,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v101,
            v102.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v102.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v102.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v101,
            0,
            1000 * v102.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v99 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v95;
      gbValidateHandleForIL = 1;
      dword_1C00FFFA0 = *((_DWORD *)a4 + 4);
    }
LABEL_488:
    PowerUpdateBrightnessLevels();
    if ( dword_1C00FFF88 != 1 || dword_1C00FFFA8 == dword_1C00FFF94 )
      goto LABEL_82;
    v169 = 13LL;
    goto LABEL_491;
  }
  v19 = v9 - 1;
  if ( !v19 )
  {
    if ( v8 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v33 = *a4;
    v34 = a4[1];
    v35 = *((int *)a4 + 1);
    v36 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v36 )
      v36[1] = KeQueryPerformanceCounter(0LL);
    v37 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v37;
    gbValidateHandleForIL = 1;
    if ( v33 && gbBlockSendInputResets )
      goto LABEL_82;
    v38 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateLastInput(v38, 3LL);
    CitLastInputUpdate(3LL, 0LL, (unsigned int)v38);
    if ( v34 )
      goto LABEL_82;
    if ( dword_1C00FFFB8 )
    {
      if ( !*(_BYTE *)gpbIgnoreSleepInput )
        SetPendingInput((unsigned int)v35);
      goto LABEL_82;
    }
    v169 = v35;
LABEL_491:
    v168 = 4;
LABEL_492:
    QueuePowerRequest(&v168, 0LL, v39);
    goto LABEL_82;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( v8 != 4 || !a4 || a5 != 4 || !a6 )
      return (unsigned int)-1073741823;
    v27 = *(_DWORD *)a4;
    v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v28 )
      v28[1] = KeQueryPerformanceCounter(0LL);
    v29 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    v30 = dword_1C00FFF80;
    gptiCurrent = v29;
    gbValidateHandleForIL = 1;
    v31 = dword_1C00FFF80 + v27;
    dword_1C00FFF80 += v27;
    if ( v30 == 1 )
    {
      if ( !v31 )
      {
        CitDisplayRequestChange(0);
        EtwTraceDisplayReqChange();
        if ( !gbBlockSendInputResets )
          UpdateLastInput(
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            8LL);
      }
    }
    else if ( !v30 && v31 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange();
    }
    UserSessionSwitchLeaveCrit();
    if ( !v30 && v31 == 1 )
    {
      if ( dword_1C00FFF88 != 2 )
      {
LABEL_75:
        *a6 = v31;
        return v6;
      }
      v168 = 4;
      v169 = 0LL;
      QueuePowerRequest(&v168, 0LL, v32);
    }
    if ( v31 < 0 )
      v31 = 0;
    goto LABEL_75;
  }
  v21 = v20 - 1;
  if ( v21 )
  {
    if ( v21 == 1 )
    {
      v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v22 )
        v22[1] = KeQueryPerformanceCounter(0LL);
      v23 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(1LL);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v23;
      gbValidateHandleForIL = 1;
      if ( v8 == 4 && a4 )
      {
        if ( *(_DWORD *)a4 )
        {
          if ( *(_DWORD *)a4 == 1 )
          {
            if ( (int)IsSendPTPLatencyMgtRequestSupported_0() >= 0 )
              SendPTPLatencyMgtRequest_0();
            *(_DWORD *)gpsi |= 0x2000u;
            dword_1C00FFFCC = 1;
            *(_DWORD *)gpsi &= ~0x4000u;
            dword_1C00FFFD0 = 0;
          }
          else
          {
            *(_DWORD *)gpsi &= ~0x2000u;
            dword_1C00FFFCC = 0;
            *(_DWORD *)gpsi |= 0x4000u;
            dword_1C00FFFD0 = 1;
          }
        }
        else
        {
          *(_DWORD *)gpsi &= ~0x4000u;
          dword_1C00FFFD0 = 0;
          *(_DWORD *)gpsi &= ~0x2000u;
          dword_1C00FFFCC = 0;
          if ( (int)IsWakeRITForConfigSwitchSupported_0() >= 0 )
            WakeRITForConfigSwitch_0();
        }
      }
      else
      {
        v6 = -1073741811;
      }
      goto LABEL_82;
    }
    return (unsigned int)-1073741823;
  }
  if ( v8 != 8 || !a4 )
    return (unsigned int)-1073741823;
  UserSessionSwitchBlock_Start();
  v25 = a4[1];
  v26 = -(*a4 != 0);
  v169 = *((int *)a4 + 1);
  v168 = v26 + 11;
  if ( v25 )
    UpdateLastInput(
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      3LL);
  if ( (int)QueuePowerRequest(&v168, 0LL, v24) < 0 )
    UserSessionSwitchBlock_End();
  return v6;
}
