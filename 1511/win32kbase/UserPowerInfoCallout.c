/*
 * XREFs of UserPowerInfoCallout @ 0x1C000CEC8
 * Callers:
 *     W32CalloutDispatch @ 0x1C000C060 (W32CalloutDispatch.c)
 * Callees:
 *     IsSendPTPLatencyMgtRequestSupported_0 @ 0x1C0002200 (IsSendPTPLatencyMgtRequestSupported_0.c)
 *     SendPTPLatencyMgtRequest_0 @ 0x1C0002208 (SendPTPLatencyMgtRequest_0.c)
 *     IsWakeRITForConfigSwitchSupported_0 @ 0x1C0002210 (IsWakeRITForConfigSwitchSupported_0.c)
 *     WakeRITForConfigSwitch_0 @ 0x1C0002218 (WakeRITForConfigSwitch_0.c)
 *     IsModerncoreUserPowerInfoCalloutSupported_0 @ 0x1C0002298 (IsModerncoreUserPowerInfoCalloutSupported_0.c)
 *     ModerncoreUserPowerInfoCallout_0 @ 0x1C00022A0 (ModerncoreUserPowerInfoCallout_0.c)
 *     QueuePowerRequest @ 0x1C000BF30 (QueuePowerRequest.c)
 *     UpdateLastInput @ 0x1C000E9A0 (UpdateLastInput.c)
 *     EtwTraceDisplayReqChange @ 0x1C000EC20 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C000EC40 (CitDisplayRequestChange.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     CitLastInputUpdate @ 0x1C0047AA0 (CitLastInputUpdate.c)
 *     SqmPowerState @ 0x1C0063030 (SqmPowerState.c)
 *     PowerUpdateBrightnessLevels @ 0x1C0067944 (PowerUpdateBrightnessLevels.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E0BC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E4F8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C007EC58 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     SetPendingInput @ 0x1C0087B10 (SetPendingInput.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, char a2, int a3, unsigned __int8 *a4, int a5, int *a6)
{
  unsigned int v6; // edi
  int v9; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  struct tagTHREADINFO *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // ecx
  int v15; // r8d
  LARGE_INTEGER v16; // r15
  int v17; // esi
  int v18; // esi
  int v19; // esi
  LARGE_INTEGER *v20; // rsi
  struct tagTHREADINFO *v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // ecx
  LARGE_INTEGER v25; // rsi
  int v26; // r8d
  unsigned __int8 v27; // dl
  int v28; // ecx
  int *v29; // r14
  int v30; // r12d
  LARGE_INTEGER *v31; // rbx
  struct tagTHREADINFO *v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rsi
  int v35; // ecx
  LARGE_INTEGER v36; // rbx
  int v37; // r8d
  int v38; // esi
  int v39; // ebx
  bool v40; // cc
  int v41; // r12d
  int v42; // r13d
  __int64 v43; // rsi
  LARGE_INTEGER *v44; // rbx
  struct tagTHREADINFO *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // r14
  int v48; // ecx
  LARGE_INTEGER v49; // rbx
  int v50; // r8d
  unsigned __int64 v51; // rbx
  LARGE_INTEGER *v52; // rsi
  struct tagTHREADINFO *v53; // r15
  __int64 v54; // rcx
  __int64 v55; // r14
  int v56; // ecx
  LARGE_INTEGER v57; // rsi
  int v58; // r8d
  LARGE_INTEGER *v59; // rsi
  struct tagTHREADINFO *v60; // r15
  __int64 v61; // rcx
  __int64 v62; // r14
  int v63; // ecx
  LARGE_INTEGER v64; // rsi
  int v65; // r8d
  LARGE_INTEGER *v66; // rsi
  struct tagTHREADINFO *v67; // r15
  __int64 v68; // rcx
  __int64 v69; // r14
  int v70; // ecx
  LARGE_INTEGER v71; // rsi
  int v72; // r8d
  LARGE_INTEGER *v73; // rsi
  struct tagTHREADINFO *v74; // r15
  __int64 v75; // rcx
  __int64 v76; // r14
  int v77; // ecx
  LARGE_INTEGER v78; // rsi
  int v79; // r8d
  LARGE_INTEGER *v80; // rsi
  struct tagTHREADINFO *v81; // r15
  __int64 v82; // rcx
  __int64 v83; // r14
  int v84; // ecx
  LARGE_INTEGER v85; // rsi
  int v86; // r8d
  LARGE_INTEGER *v87; // rsi
  struct tagTHREADINFO *v88; // r15
  __int64 v89; // rcx
  __int64 v90; // r14
  int v91; // ecx
  LARGE_INTEGER v92; // rsi
  int v93; // r8d
  LARGE_INTEGER *v94; // rsi
  struct tagTHREADINFO *v95; // r15
  __int64 v96; // rcx
  __int64 v97; // r14
  int v98; // ecx
  LARGE_INTEGER v99; // rsi
  int v100; // r8d
  LARGE_INTEGER *v101; // rsi
  struct tagTHREADINFO *v102; // r15
  __int64 v103; // rcx
  __int64 v104; // r14
  int v105; // ecx
  LARGE_INTEGER v106; // rsi
  int v107; // r8d
  enum POWER_MONITOR_REQUEST_REASON v108; // ecx
  LARGE_INTEGER *v109; // rbx
  struct tagTHREADINFO *v110; // r14
  __int64 v111; // rcx
  __int64 v112; // rsi
  int v113; // ecx
  LARGE_INTEGER v114; // rbx
  int v115; // r8d
  LARGE_INTEGER *v116; // rbx
  struct tagTHREADINFO *v117; // r14
  __int64 v118; // rcx
  __int64 v119; // rsi
  int v120; // ecx
  LARGE_INTEGER v121; // rbx
  int v122; // r8d
  LARGE_INTEGER *v123; // rsi
  struct tagTHREADINFO *v124; // r15
  __int64 v125; // rcx
  __int64 v126; // r14
  int v127; // ecx
  LARGE_INTEGER v128; // rsi
  int v129; // r8d
  LARGE_INTEGER *v130; // rsi
  struct tagTHREADINFO *v131; // r15
  __int64 v132; // rcx
  __int64 v133; // r14
  int v134; // ecx
  LARGE_INTEGER v135; // rsi
  int v136; // r8d
  LARGE_INTEGER *v137; // rsi
  struct tagTHREADINFO *v138; // r15
  __int64 v139; // rcx
  __int64 v140; // r14
  int v141; // ecx
  LARGE_INTEGER v142; // rsi
  int v143; // r8d
  LARGE_INTEGER *v144; // rbx
  struct tagTHREADINFO *v145; // r14
  __int64 v146; // rcx
  __int64 v147; // rsi
  int v148; // ecx
  LARGE_INTEGER v149; // rbx
  int v150; // r8d
  __int128 v152; // [rsp+40h] [rbp-10h] BYREF
  char v153; // [rsp+88h] [rbp+38h] BYREF

  v153 = a2;
  v6 = 0;
  v9 = a1;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_19;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v11 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v13 = PsGetCurrentThreadWin32Thread(v12);
    if ( v13 )
    {
      v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v14, (unsigned int)&AcquiredExclusiveUserCritEvent, v15, v16.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v16.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v15,
          0,
          1000 * v16.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    UserSessionSwitchLeaveCrit();
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_19:
  if ( !v9 )
  {
    if ( a3 != 20 || !a4 )
      return (unsigned int)-1073741823;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v52 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v52 )
        v52[1] = KeQueryPerformanceCounter(0LL);
      v53 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v55 = PsGetCurrentThreadWin32Thread(v54);
      if ( v55 )
      {
        v57 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v55 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v56,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v58,
            v57.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v57.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v57.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v58,
            0,
            1000 * v57.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v55 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v53;
      gbValidateHandleForIL = 1;
      if ( gProtocolType )
        goto LABEL_105;
      giPowerOffTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      goto LABEL_182;
    }
    if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v59 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v59 )
        v59[1] = KeQueryPerformanceCounter(0LL);
      v60 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v62 = PsGetCurrentThreadWin32Thread(v61);
      if ( v62 )
      {
        v64 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v62 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v63,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v65,
            v64.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v64.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v64.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v65,
            0,
            1000 * v64.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v62 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v60;
      gbValidateHandleForIL = 1;
      if ( !gProtocolType || !dword_1C01047F4 )
        goto LABEL_105;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      goto LABEL_182;
    }
    if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v66 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v66 )
        v66[1] = KeQueryPerformanceCounter(0LL);
      v67 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v69 = PsGetCurrentThreadWin32Thread(v68);
      if ( v69 )
      {
        v71 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v69 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v70,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v72,
            v71.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v71.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v71.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v72,
            0,
            1000 * v71.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v69 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v67;
      gbValidateHandleForIL = 1;
      if ( gProtocolType )
        goto LABEL_105;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      if ( giPowerSessionActivityTimeOutMs )
        gPowerAdaptiveState = 0;
      goto LABEL_182;
    }
    if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v73 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v73 )
        v73[1] = KeQueryPerformanceCounter(0LL);
      v74 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v76 = PsGetCurrentThreadWin32Thread(v75);
      if ( v76 )
      {
        v78 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v76 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v77,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v79,
            v78.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v78.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v78.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v79,
            0,
            1000 * v78.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v76 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v74;
      gbValidateHandleForIL = 1;
      giDimTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
LABEL_182:
      if ( (int)IsModerncoreUserPowerInfoCalloutSupported_0() >= 0 )
        ModerncoreUserPowerInfoCallout_0();
      goto LABEL_105;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v80 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v80 )
        v80[1] = KeQueryPerformanceCounter(0LL);
      v81 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v83 = PsGetCurrentThreadWin32Thread(v82);
      if ( v83 )
      {
        v85 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v83 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v84,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v86,
            v85.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v85.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v85.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v86,
            0,
            1000 * v85.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v83 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v81;
      gbValidateHandleForIL = 1;
      dword_1C0104744 = *((_DWORD *)a4 + 4);
      PowerUpdateBrightnessLevels();
      if ( dword_1C0104734 != 2 || dword_1C0104754 == dword_1C0104748 )
        goto LABEL_105;
      LODWORD(v152) = 7;
      goto LABEL_346;
    }
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
    {
      v87 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v87 )
        v87[1] = KeQueryPerformanceCounter(0LL);
      v88 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v90 = PsGetCurrentThreadWin32Thread(v89);
      if ( v90 )
      {
        v92 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v90 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v91,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v93,
            v92.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v92.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v92.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v93,
            0,
            1000 * v92.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v90 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v88;
      gbValidateHandleForIL = 1;
      dword_1C010473C = *((_DWORD *)a4 + 4);
    }
    else
    {
      if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 != *(_QWORD *)a4
        || *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 != *((_QWORD *)a4 + 1) )
      {
        if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == *((_QWORD *)a4 + 1) )
        {
          v101 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v101 )
            v101[1] = KeQueryPerformanceCounter(0LL);
          v102 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          v104 = PsGetCurrentThreadWin32Thread(v103);
          if ( v104 )
          {
            v106 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v104 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
              && (qword_1C01020B0 & 0x200000010000000LL) != 0
              && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              Template_xqx(
                v105,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v107,
                v106.LowPart,
                0,
                gullUserCritAcquireToken);
            }
            if ( v106.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                1000 * v106.QuadPart / gliQpcFreq.QuadPart,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v107,
                0,
                1000 * v106.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v104 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v102;
          gbValidateHandleForIL = 1;
          if ( gSqmIsOptedIn && !gProtocolType )
            SqmPowerState();
          dword_1C0104768 = *((_DWORD *)a4 + 4) == 0;
          if ( gProtocolType )
            goto LABEL_105;
          v108 = MonitorRequestReasonAcDcDisplayBurst;
        }
        else
        {
          if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 != *(_QWORD *)a4
            || *(_QWORD *)GUID_BATTERY_COUNT.Data4 != *((_QWORD *)a4 + 1) )
          {
            if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == *((_QWORD *)a4 + 1) )
            {
              v116 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v116 )
                v116[1] = KeQueryPerformanceCounter(0LL);
              v117 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
              v119 = PsGetCurrentThreadWin32Thread(v118);
              if ( v119 )
              {
                v121 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v119 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
                  && (qword_1C01020B0 & 0x200000010000000LL) != 0
                  && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v120,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v122,
                    v121.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v121.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v121.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v122,
                    0,
                    1000 * v121.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v119 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v117;
              gbValidateHandleForIL = 1;
              goto LABEL_105;
            }
            if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 == *((_QWORD *)a4 + 1) )
            {
              if ( *((_DWORD *)a4 + 4) )
              {
                dword_1C010475C = 1;
                LODWORD(v152) = 5;
                *((_QWORD *)&v152 + 1) = 13LL;
                QueuePowerRequest(&v152, 0);
              }
              else
              {
                dword_1C010475C = 0;
              }
              return v6;
            }
            if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 == *((_QWORD *)a4 + 1) )
            {
              v123 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v123 )
                v123[1] = KeQueryPerformanceCounter(0LL);
              v124 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
              v126 = PsGetCurrentThreadWin32Thread(v125);
              if ( v126 )
              {
                v128 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v126 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
                  && (qword_1C01020B0 & 0x200000010000000LL) != 0
                  && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v127,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v129,
                    v128.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v128.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v128.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v129,
                    0,
                    1000 * v128.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v126 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v124;
              gbValidateHandleForIL = 1;
              dword_1C0104784 = *((_DWORD *)a4 + 4);
            }
            else if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4
                   && *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
            {
              v130 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v130 )
                v130[1] = KeQueryPerformanceCounter(0LL);
              v131 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
              v133 = PsGetCurrentThreadWin32Thread(v132);
              if ( v133 )
              {
                v135 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v133 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
                  && (qword_1C01020B0 & 0x200000010000000LL) != 0
                  && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v134,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v136,
                    v135.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v135.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v135.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v136,
                    0,
                    1000 * v135.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v133 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v131;
              gbValidateHandleForIL = 1;
              dword_1C0104750 = *((_DWORD *)a4 + 4);
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
                  v144 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                  if ( v144 )
                    v144[1] = KeQueryPerformanceCounter(0LL);
                  v145 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                  v147 = PsGetCurrentThreadWin32Thread(v146);
                  if ( v147 )
                  {
                    v149 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v147 + 8));
                    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
                      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
                      && (qword_1C01020B0 & 0x200000010000000LL) != 0
                      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
                      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                    {
                      Template_xqx(
                        v148,
                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                        v150,
                        v149.LowPart,
                        0,
                        gullUserCritAcquireToken);
                    }
                    if ( v149.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                    {
                      Template_xqx(
                        1000 * v149.QuadPart / gliQpcFreq.QuadPart,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v150,
                        0,
                        1000 * v149.QuadPart / gliQpcFreq.QuadPart,
                        gullUserCritAcquireToken);
                    }
                    *(_QWORD *)(v147 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                  }
                  gdwUpdateKeyboard |= 2u;
                  gptiCurrent = v145;
                  gbValidateHandleForIL = 1;
                  goto LABEL_105;
                }
                return (unsigned int)-1073741823;
              }
              v137 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v137 )
                v137[1] = KeQueryPerformanceCounter(0LL);
              v138 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
              v140 = PsGetCurrentThreadWin32Thread(v139);
              if ( v140 )
              {
                v142 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v140 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
                  && (qword_1C01020B0 & 0x200000010000000LL) != 0
                  && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  Template_xqx(
                    v141,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v143,
                    v142.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v142.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    1000 * v142.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v143,
                    0,
                    1000 * v142.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v140 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gptiCurrent = v138;
              gbValidateHandleForIL = 1;
              dword_1C0104788 = *((_DWORD *)a4 + 4);
            }
            goto LABEL_342;
          }
          v109 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v109 )
            v109[1] = KeQueryPerformanceCounter(0LL);
          v110 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          v112 = PsGetCurrentThreadWin32Thread(v111);
          if ( v112 )
          {
            v114 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v112 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
              && (qword_1C01020B0 & 0x200000010000000LL) != 0
              && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              Template_xqx(
                v113,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v115,
                v114.LowPart,
                0,
                gullUserCritAcquireToken);
            }
            if ( v114.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                1000 * v114.QuadPart / gliQpcFreq.QuadPart,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v115,
                0,
                1000 * v114.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v112 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v110;
          gbValidateHandleForIL = 1;
          if ( gProtocolType || dword_1C0104768 )
            goto LABEL_105;
          v108 = MonitorRequestReasonBatteryCountChange;
        }
        PowerDisplayBurst(v108);
LABEL_105:
        UserSessionSwitchLeaveCrit();
        return v6;
      }
      v94 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v94 )
        v94[1] = KeQueryPerformanceCounter(0LL);
      v95 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v97 = PsGetCurrentThreadWin32Thread(v96);
      if ( v97 )
      {
        v99 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v97 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v98,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v100,
            v99.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v99.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v99.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v100,
            0,
            1000 * v99.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v97 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v95;
      gbValidateHandleForIL = 1;
      dword_1C010474C = *((_DWORD *)a4 + 4);
    }
LABEL_342:
    PowerUpdateBrightnessLevels();
    if ( dword_1C0104734 != 1 || dword_1C0104754 == dword_1C0104740 )
      goto LABEL_105;
    *((_QWORD *)&v152 + 1) = 13LL;
    goto LABEL_345;
  }
  v17 = v9 - 1;
  if ( !v17 )
  {
    if ( a3 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v41 = *a4;
    v42 = a4[1];
    v43 = *((int *)a4 + 1);
    v44 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v44 )
      v44[1] = KeQueryPerformanceCounter(0LL);
    v45 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v47 = PsGetCurrentThreadWin32Thread(v46);
    if ( v47 )
    {
      v49 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v47 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v48, (unsigned int)&AcquiredExclusiveUserCritEvent, v50, v49.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v49.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v49.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v50,
          0,
          1000 * v49.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v47 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v45;
    gbValidateHandleForIL = 1;
    if ( v41 && gbBlockSendInputResets )
      goto LABEL_105;
    v51 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    UpdateLastInput((unsigned int)v51, 3LL);
    CitLastInputUpdate(3LL, 0LL, (unsigned int)v51);
    if ( v42 )
      goto LABEL_105;
    if ( dword_1C0104760 )
    {
      if ( !*(_BYTE *)gpbIgnoreSleepInput )
        SetPendingInput((unsigned int)v43);
      goto LABEL_105;
    }
    *((_QWORD *)&v152 + 1) = v43;
LABEL_345:
    LODWORD(v152) = 4;
LABEL_346:
    QueuePowerRequest(&v152, 0);
    goto LABEL_105;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( a3 != 4 )
      return (unsigned int)-1073741823;
    if ( !a4 )
      return (unsigned int)-1073741823;
    if ( a5 != 4 )
      return (unsigned int)-1073741823;
    v29 = a6;
    if ( !a6 )
      return (unsigned int)-1073741823;
    v30 = *(_DWORD *)a4;
    v31 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v31 )
      v31[1] = KeQueryPerformanceCounter(0LL);
    v32 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v34 = PsGetCurrentThreadWin32Thread(v33);
    if ( v34 )
    {
      v36 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v34 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v35, (unsigned int)&AcquiredExclusiveUserCritEvent, v37, v36.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v36.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v36.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v37,
          0,
          1000 * v36.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v34 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    v38 = dword_1C010472C;
    gptiCurrent = v32;
    gbValidateHandleForIL = 1;
    v39 = dword_1C010472C + v30;
    dword_1C010472C += v30;
    if ( v38 == 1 )
    {
      v40 = v39 <= 0;
      if ( !v39 )
      {
        CitDisplayRequestChange(0);
        EtwTraceDisplayReqChange();
        if ( !gbBlockSendInputResets )
          UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 8LL);
        goto LABEL_80;
      }
    }
    else
    {
      if ( !v38 && v39 == 1 )
      {
        CitDisplayRequestChange(1u);
        EtwTraceDisplayReqChange();
      }
      v40 = v39 <= 0;
    }
    v153 = 1;
    if ( !v40 )
    {
LABEL_81:
      ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v153, 1LL, 0LL, &gSessionId, 0, 0);
      UserSessionSwitchLeaveCrit();
      if ( !v38 && v39 == 1 )
      {
        if ( dword_1C0104734 != 2 )
        {
LABEL_87:
          *v29 = v39;
          return v6;
        }
        LODWORD(v152) = 4;
        *((_QWORD *)&v152 + 1) = 0LL;
        QueuePowerRequest(&v152, 0);
      }
      if ( v39 < 0 )
        v39 = 0;
      goto LABEL_87;
    }
LABEL_80:
    v153 = 0;
    goto LABEL_81;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      v20 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v20 )
        v20[1] = KeQueryPerformanceCounter(0LL);
      v21 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v23 = PsGetCurrentThreadWin32Thread(v22);
      if ( v23 )
      {
        v25 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v23 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(
            v24,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v26,
            v25.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v25.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            1000 * v25.QuadPart / gliQpcFreq.QuadPart,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v26,
            0,
            1000 * v25.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v23 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v21;
      gbValidateHandleForIL = 1;
      if ( a3 == 4 && a4 )
      {
        if ( *(_DWORD *)a4 )
        {
          if ( *(_DWORD *)a4 == 1 )
          {
            if ( (int)IsSendPTPLatencyMgtRequestSupported_0() >= 0 )
              SendPTPLatencyMgtRequest_0();
            *(_DWORD *)gpsi |= 0x2000u;
            dword_1C0104774 = 1;
            *(_DWORD *)gpsi &= ~0x4000u;
            dword_1C0104778 = 0;
          }
          else
          {
            *(_DWORD *)gpsi &= ~0x2000u;
            dword_1C0104774 = 0;
            *(_DWORD *)gpsi |= 0x4000u;
            dword_1C0104778 = 1;
          }
        }
        else
        {
          *(_DWORD *)gpsi &= ~0x4000u;
          dword_1C0104778 = 0;
          *(_DWORD *)gpsi &= ~0x2000u;
          dword_1C0104774 = 0;
          if ( (int)IsWakeRITForConfigSwitchSupported_0() >= 0 )
            WakeRITForConfigSwitch_0();
        }
      }
      else
      {
        v6 = -1073741811;
      }
      goto LABEL_105;
    }
    return (unsigned int)-1073741823;
  }
  if ( a3 != 8 || !a4 )
    return (unsigned int)-1073741823;
  UserSessionSwitchBlock_Start();
  v27 = a4[1];
  v28 = -(*a4 != 0);
  *((_QWORD *)&v152 + 1) = *((int *)a4 + 1);
  LODWORD(v152) = v28 + 11;
  if ( v27 )
    UpdateLastInput((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24, 3LL);
  if ( (int)QueuePowerRequest(&v152, 0) < 0 )
    UserSessionSwitchBlock_End();
  return v6;
}
