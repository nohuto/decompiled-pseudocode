/*
 * XREFs of UserPowerInfoCallout @ 0x1C0070B38
 * Callers:
 *     W32CalloutDispatch @ 0x1C001CE70 (W32CalloutDispatch.c)
 * Callees:
 *     IsModerncoreUserPowerInfoCalloutSupported_0 @ 0x1C0001DF8 (IsModerncoreUserPowerInfoCalloutSupported_0.c)
 *     ModerncoreUserPowerInfoCallout_0 @ 0x1C0001E00 (ModerncoreUserPowerInfoCallout_0.c)
 *     QueuePowerRequest @ 0x1C000A740 (QueuePowerRequest.c)
 *     CitLastInputUpdate @ 0x1C0011C00 (CitLastInputUpdate.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     PowerUpdateBrightnessLevels @ 0x1C0053100 (PowerUpdateBrightnessLevels.c)
 *     SqmPowerState @ 0x1C0070710 (SqmPowerState.c)
 *     EtwTraceDisplayReqChange @ 0x1C0071048 (EtwTraceDisplayReqChange.c)
 *     CitDisplayRequestChange @ 0x1C0071068 (CitDisplayRequestChange.c)
 *     UpdateLastInput @ 0x1C0071150 (UpdateLastInput.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0072174 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SetPendingInput @ 0x1C0088BB0 (SetPendingInput.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B20AC (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00B22E8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, char a2, int a3, unsigned __int8 *a4, int a5, int *a6)
{
  int v6; // edi
  int v9; // esi
  unsigned int v10; // r14d
  int v11; // esi
  int v12; // esi
  int *v13; // r15
  int v14; // r13d
  LARGE_INTEGER *v15; // rbx
  struct tagTHREADINFO *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // ecx
  LARGE_INTEGER v20; // rbx
  int v21; // r8d
  int v22; // esi
  int v23; // ebx
  bool v24; // cc
  int v26; // r13d
  __int64 v27; // rsi
  LARGE_INTEGER *v28; // rbx
  struct tagTHREADINFO *v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r15
  int v32; // ecx
  LARGE_INTEGER v33; // rbx
  int v34; // r8d
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  LARGE_INTEGER *v40; // rsi
  struct tagTHREADINFO *v41; // r12
  __int64 v42; // rcx
  __int64 v43; // r15
  int v44; // ecx
  LARGE_INTEGER v45; // rsi
  int v46; // r8d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  __int64 v48; // rcx
  __int64 v49; // r13
  int v50; // ecx
  int v51; // r8d
  LARGE_INTEGER v52; // r12
  int v53; // esi
  int v54; // esi
  int v55; // esi
  int v56; // esi
  char v57; // dl
  LARGE_INTEGER *v58; // rbx
  struct tagTHREADINFO *v59; // r15
  __int64 v60; // rcx
  __int64 v61; // rsi
  int v62; // ecx
  LARGE_INTEGER v63; // rbx
  int v64; // r8d
  int v65; // eax
  char v66; // si
  char v67; // r15
  char v68; // r12
  LARGE_INTEGER *v69; // r15
  __int64 v70; // rcx
  __int64 v71; // r13
  int v72; // ecx
  int v73; // r8d
  LARGE_INTEGER v74; // r15
  LARGE_INTEGER *v75; // rsi
  struct tagTHREADINFO *v76; // r12
  __int64 v77; // rcx
  __int64 v78; // r15
  int v79; // ecx
  LARGE_INTEGER v80; // rsi
  int v81; // r8d
  LARGE_INTEGER *v82; // rsi
  struct tagTHREADINFO *v83; // r12
  __int64 v84; // rcx
  __int64 v85; // r15
  int v86; // ecx
  LARGE_INTEGER v87; // rsi
  int v88; // r8d
  LARGE_INTEGER *v89; // rsi
  struct tagTHREADINFO *v90; // r12
  __int64 v91; // rcx
  __int64 v92; // r15
  int v93; // ecx
  LARGE_INTEGER v94; // rsi
  int v95; // r8d
  __int64 v96; // rcx
  LARGE_INTEGER *v97; // rsi
  struct tagTHREADINFO *v98; // r12
  __int64 v99; // rcx
  __int64 v100; // r15
  int v101; // ecx
  LARGE_INTEGER v102; // rsi
  int v103; // r8d
  __int64 v104; // rcx
  LARGE_INTEGER *v105; // rsi
  struct tagTHREADINFO *v106; // r12
  __int64 v107; // rcx
  __int64 v108; // r15
  int v109; // ecx
  LARGE_INTEGER v110; // rsi
  int v111; // r8d
  __int64 v112; // rcx
  LARGE_INTEGER *v113; // rsi
  struct tagTHREADINFO *v114; // r12
  __int64 v115; // rcx
  __int64 v116; // r15
  int v117; // ecx
  LARGE_INTEGER v118; // rsi
  int v119; // r8d
  __int64 v120; // rcx
  LARGE_INTEGER *v121; // rsi
  struct tagTHREADINFO *v122; // r12
  __int64 v123; // rcx
  __int64 v124; // r15
  int v125; // ecx
  LARGE_INTEGER v126; // rsi
  int v127; // r8d
  enum POWER_MONITOR_REQUEST_REASON v128; // ecx
  __int64 v129; // rcx
  LARGE_INTEGER *v130; // rbx
  struct tagTHREADINFO *v131; // r15
  __int64 v132; // rcx
  __int64 v133; // rsi
  int v134; // ecx
  LARGE_INTEGER v135; // rbx
  int v136; // r8d
  __int64 v137; // rcx
  LARGE_INTEGER *v138; // rsi
  struct tagTHREADINFO *v139; // r12
  __int64 v140; // rcx
  __int64 v141; // r15
  int v142; // ecx
  LARGE_INTEGER v143; // rsi
  int v144; // r8d
  __int64 v145; // rcx
  __int64 v146; // rcx
  LARGE_INTEGER *v147; // rsi
  struct tagTHREADINFO *v148; // r12
  __int64 v149; // rcx
  __int64 v150; // r15
  int v151; // ecx
  LARGE_INTEGER v152; // rsi
  int v153; // r8d
  __int64 v154; // rcx
  LARGE_INTEGER *v155; // rsi
  struct tagTHREADINFO *v156; // r12
  __int64 v157; // rcx
  __int64 v158; // r15
  int v159; // ecx
  LARGE_INTEGER v160; // rsi
  int v161; // r8d
  __int64 v162; // rcx
  LARGE_INTEGER *v163; // rsi
  struct tagTHREADINFO *v164; // r12
  __int64 v165; // rcx
  __int64 v166; // r15
  int v167; // ecx
  LARGE_INTEGER v168; // rsi
  int v169; // r8d
  __int64 v170; // rcx
  LARGE_INTEGER *v171; // rbx
  struct tagTHREADINFO *v172; // r15
  __int64 v173; // rcx
  __int64 v174; // rsi
  int v175; // ecx
  LARGE_INTEGER v176; // rbx
  int v177; // r8d
  int v178; // [rsp+48h] [rbp-18h]
  struct tagTHREADINFO *v179; // [rsp+48h] [rbp-18h]
  struct tagTHREADINFO *v180; // [rsp+48h] [rbp-18h]
  __int128 v181; // [rsp+50h] [rbp-10h] BYREF
  char v182; // [rsp+98h] [rbp+38h] BYREF

  v182 = a2;
  v6 = 0;
  v9 = a1;
  v10 = 0;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v179 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v49 = PsGetCurrentThreadWin32Thread(v48);
    if ( v49 )
    {
      v52 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v49 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v50, (unsigned int)&AcquiredExclusiveUserCritEvent, v51, v52.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v52.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v52.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v51,
          0,
          1000 * v52.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v49 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v179;
    gbValidateHandleForIL = 1;
    UserSessionSwitchLeaveCrit();
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_4:
  if ( !v9 )
  {
    if ( a3 != 20 || !a4 )
      return (unsigned int)-1073741823;
    v36 = *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v36 = *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( !v36 )
    {
      v75 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v75 )
        v75[1] = KeQueryPerformanceCounter(0LL);
      v76 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v78 = PsGetCurrentThreadWin32Thread(v77);
      if ( v78 )
      {
        v80 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v78 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v79) = byte_1C0118B28 - 1;
          Template_xqx(
            v79,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v81,
            v80.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v80.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v81,
            0,
            1000 * v80.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v78 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v76;
      gbValidateHandleForIL = 1;
      if ( gProtocolType )
        goto LABEL_48;
      giPowerOffTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      goto LABEL_76;
    }
    v37 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v37 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( !v37 )
    {
      v82 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v82 )
        v82[1] = KeQueryPerformanceCounter(0LL);
      v83 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v85 = PsGetCurrentThreadWin32Thread(v84);
      if ( v85 )
      {
        v87 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v85 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v86) = byte_1C0118B28 - 1;
          Template_xqx(
            v86,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v88,
            v87.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v87.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v88,
            0,
            1000 * v87.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v85 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v83;
      gbValidateHandleForIL = 1;
      if ( !gProtocolType || !dword_1C011BBF4 )
        goto LABEL_48;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      goto LABEL_76;
    }
    v38 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v38 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( !v38 )
    {
      v89 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v89 )
        v89[1] = KeQueryPerformanceCounter(0LL);
      v90 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v92 = PsGetCurrentThreadWin32Thread(v91);
      if ( v92 )
      {
        v94 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v92 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v93) = byte_1C0118B28 - 1;
          Template_xqx(
            v93,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v95,
            v94.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v94.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v95,
            0,
            1000 * v94.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v92 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v90;
      gbValidateHandleForIL = 1;
      if ( gProtocolType )
        goto LABEL_48;
      giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
      if ( giPowerSessionActivityTimeOutMs )
        gPowerAdaptiveState = 0;
      goto LABEL_76;
    }
    v39 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)a4 )
      v39 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)a4 + 1);
    if ( !v39 )
    {
      v40 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v40 )
        v40[1] = KeQueryPerformanceCounter(0LL);
      v41 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v43 = PsGetCurrentThreadWin32Thread(v42);
      if ( v43 )
      {
        v45 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v43 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v44) = byte_1C0118B28 - 1;
          Template_xqx(
            v44,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v46,
            v45.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v45.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v46,
            0,
            1000 * v45.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v43 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v41;
      gbValidateHandleForIL = 1;
      giDimTimeOutMs = 1000 * *((_DWORD *)a4 + 4);
LABEL_76:
      if ( (int)IsModerncoreUserPowerInfoCalloutSupported_0() >= 0 )
        ModerncoreUserPowerInfoCallout_0();
      goto LABEL_48;
    }
    v96 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
      v96 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
    if ( !v96 )
    {
      v97 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v97 )
        v97[1] = KeQueryPerformanceCounter(0LL);
      v98 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v100 = PsGetCurrentThreadWin32Thread(v99);
      if ( v100 )
      {
        v102 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v100 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v101) = byte_1C0118B28 - 1;
          Template_xqx(
            v101,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v103,
            v102.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v102.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v103,
            0,
            1000 * v102.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v100 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v98;
      gbValidateHandleForIL = 1;
      dword_1C011BB20 = *((_DWORD *)a4 + 4);
      PowerUpdateBrightnessLevels();
      if ( dword_1C011BB10 != 2 || dword_1C011BB30 == dword_1C011BB24 )
        goto LABEL_48;
      LODWORD(v181) = 11;
      *((_QWORD *)&v181 + 1) = 2LL;
      goto LABEL_47;
    }
    v104 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
      v104 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
    if ( !v104 )
    {
      v105 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v105 )
        v105[1] = KeQueryPerformanceCounter(0LL);
      v106 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v108 = PsGetCurrentThreadWin32Thread(v107);
      if ( v108 )
      {
        v110 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v108 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v109) = byte_1C0118B28 - 1;
          Template_xqx(
            v109,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v111,
            v110.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v110.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v111,
            0,
            1000 * v110.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v108 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v106;
      gbValidateHandleForIL = 1;
      dword_1C011BB18 = *((_DWORD *)a4 + 4);
      goto LABEL_404;
    }
    v112 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4 )
      v112 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)a4 + 1);
    if ( !v112 )
    {
      v113 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v113 )
        v113[1] = KeQueryPerformanceCounter(0LL);
      v114 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v116 = PsGetCurrentThreadWin32Thread(v115);
      if ( v116 )
      {
        v118 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v116 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v117) = byte_1C0118B28 - 1;
          Template_xqx(
            v117,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v119,
            v118.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v118.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v119,
            0,
            1000 * v118.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v116 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v114;
      gbValidateHandleForIL = 1;
      dword_1C011BB28 = *((_DWORD *)a4 + 4);
      goto LABEL_404;
    }
    v120 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)a4;
    if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4 )
      v120 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)a4 + 1);
    if ( v120 )
    {
      v129 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)a4;
      if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)a4 )
        v129 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)a4 + 1);
      if ( v129 )
      {
        v137 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4 )
          v137 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)a4 + 1);
        if ( !v137 )
        {
          v138 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v138 )
            v138[1] = KeQueryPerformanceCounter(0LL);
          v139 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v141 = PsGetCurrentThreadWin32Thread(v140);
          if ( v141 )
          {
            v143 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v141 + 8));
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
              && (qword_1C0118B10 & 0x200000010000000LL) != 0
              && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              LOBYTE(v142) = byte_1C0118B28 - 1;
              Template_xqx(
                v142,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v144,
                v143.LowPart,
                0,
                gullUserCritAcquireToken);
            }
            if ( v143.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v144,
                0,
                1000 * v143.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v141 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v139;
          gbValidateHandleForIL = 1;
          LOBYTE(v6) = *((_DWORD *)a4 + 4) != 0;
          dword_1C011BB8C = v6;
          goto LABEL_48;
        }
        v145 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)a4 )
          v145 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)a4 + 1);
        if ( !v145 )
        {
          if ( !*((_DWORD *)a4 + 4) )
          {
            dword_1C011BB5C = 0;
            return v10;
          }
          dword_1C011BB5C = 1;
          LODWORD(v181) = 5;
          *((_QWORD *)&v181 + 1) = 13LL;
          goto LABEL_138;
        }
        v146 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)a4;
        if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4 )
          v146 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)a4 + 1);
        if ( v146 )
        {
          v154 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)a4;
          if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
            v154 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
          if ( v154 )
          {
            v162 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)a4;
            if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4 )
              v162 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)a4 + 1);
            if ( v162 )
            {
              v170 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)a4;
              if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4 )
                v170 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)a4 + 1);
              if ( v170 )
                return (unsigned int)-1073741823;
              if ( !*((_DWORD *)a4 + 4) )
                return v10;
              v171 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v171 )
                v171[1] = KeQueryPerformanceCounter(0LL);
              v172 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v174 = PsGetCurrentThreadWin32Thread(v173);
              if ( v174 )
              {
                v176 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v174 + 8));
                if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                  && (qword_1C0118B10 & 0x200000010000000LL) != 0
                  && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                  && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
                {
                  LOBYTE(v175) = byte_1C0118B28 - 1;
                  Template_xqx(
                    v175,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v177,
                    v176.LowPart,
                    0,
                    gullUserCritAcquireToken);
                }
                if ( v176.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                  && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
                {
                  Template_xqx(
                    gullUserCritAcquireToken,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v177,
                    0,
                    1000 * v176.QuadPart / gliQpcFreq.QuadPart,
                    gullUserCritAcquireToken);
                }
                *(_QWORD *)(v174 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
              }
              gdwUpdateKeyboard |= 2u;
              gptiCurrent = v172;
              gbValidateHandleForIL = 1;
              goto LABEL_48;
            }
            v163 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
            if ( v163 )
              v163[1] = KeQueryPerformanceCounter(0LL);
            v164 = EnterCritAvoidingDitHitTestHazard(0, 1);
            v166 = PsGetCurrentThreadWin32Thread(v165);
            if ( v166 )
            {
              v168 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v166 + 8));
              if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                && (qword_1C0118B10 & 0x200000010000000LL) != 0
                && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
              {
                LOBYTE(v167) = byte_1C0118B28 - 1;
                Template_xqx(
                  v167,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v169,
                  v168.LowPart,
                  0,
                  gullUserCritAcquireToken);
              }
              if ( v168.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              {
                Template_xqx(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v169,
                  0,
                  1000 * v168.QuadPart / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              *(_QWORD *)(v166 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
            gptiCurrent = v164;
            gbValidateHandleForIL = 1;
            dword_1C011BB88 = *((_DWORD *)a4 + 4);
          }
          else
          {
            v155 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
            if ( v155 )
              v155[1] = KeQueryPerformanceCounter(0LL);
            v156 = EnterCritAvoidingDitHitTestHazard(0, 1);
            v158 = PsGetCurrentThreadWin32Thread(v157);
            if ( v158 )
            {
              v160 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v158 + 8));
              if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                && (qword_1C0118B10 & 0x200000010000000LL) != 0
                && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
              {
                LOBYTE(v159) = byte_1C0118B28 - 1;
                Template_xqx(
                  v159,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v161,
                  v160.LowPart,
                  0,
                  gullUserCritAcquireToken);
              }
              if ( v160.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              {
                Template_xqx(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v161,
                  0,
                  1000 * v160.QuadPart / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              *(_QWORD *)(v158 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
            gptiCurrent = v156;
            gbValidateHandleForIL = 1;
            dword_1C011BB2C = *((_DWORD *)a4 + 4);
          }
        }
        else
        {
          v147 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v147 )
            v147[1] = KeQueryPerformanceCounter(0LL);
          v148 = EnterCritAvoidingDitHitTestHazard(0, 1);
          v150 = PsGetCurrentThreadWin32Thread(v149);
          if ( v150 )
          {
            v152 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v150 + 8));
            if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
              && (qword_1C0118B10 & 0x200000010000000LL) != 0
              && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
              && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
            {
              LOBYTE(v151) = byte_1C0118B28 - 1;
              Template_xqx(
                v151,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v153,
                v152.LowPart,
                0,
                gullUserCritAcquireToken);
            }
            if ( v152.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
              && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
            {
              Template_xqx(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v153,
                0,
                1000 * v152.QuadPart / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            *(_QWORD *)(v150 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
          gptiCurrent = v148;
          gbValidateHandleForIL = 1;
          dword_1C011BB84 = *((_DWORD *)a4 + 4);
        }
LABEL_404:
        PowerUpdateBrightnessLevels();
        if ( dword_1C011BB10 != 1 || dword_1C011BB30 == dword_1C011BB1C )
          goto LABEL_48;
        LODWORD(v181) = 11;
        *((_QWORD *)&v181 + 1) = 1LL;
        goto LABEL_47;
      }
      v130 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v130 )
        v130[1] = KeQueryPerformanceCounter(0LL);
      v131 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v133 = PsGetCurrentThreadWin32Thread(v132);
      if ( v133 )
      {
        v135 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v133 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v134) = byte_1C0118B28 - 1;
          Template_xqx(
            v134,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v136,
            v135.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v135.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
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
      if ( gbTtmEnabled || gProtocolType || dword_1C011BB68 )
        goto LABEL_48;
      v128 = MonitorRequestReasonBatteryCountChange;
    }
    else
    {
      v121 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v121 )
        v121[1] = KeQueryPerformanceCounter(0LL);
      v122 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v124 = PsGetCurrentThreadWin32Thread(v123);
      if ( v124 )
      {
        v126 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v124 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v125) = byte_1C0118B28 - 1;
          Template_xqx(
            v125,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v127,
            v126.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v126.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v127,
            0,
            1000 * v126.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v124 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v122;
      gbValidateHandleForIL = 1;
      if ( gSqmIsOptedIn && !gProtocolType )
        SqmPowerState();
      dword_1C011BB68 = *((_DWORD *)a4 + 4) == 0;
      if ( gbTtmEnabled || gProtocolType )
        goto LABEL_48;
      v128 = MonitorRequestReasonAcDcDisplayBurst;
    }
    PowerDisplayBurst(v128);
    goto LABEL_48;
  }
  v11 = v9 - 1;
  if ( !v11 )
  {
    if ( a3 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v26 = *a4;
    v27 = *((int *)a4 + 1);
    v178 = a4[1];
    v28 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v28 )
      v28[1] = KeQueryPerformanceCounter(0LL);
    v29 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v31 = PsGetCurrentThreadWin32Thread(v30);
    if ( v31 )
    {
      v33 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v31 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v32) = byte_1C0118B28 - 1;
        Template_xqx(v32, (unsigned int)&AcquiredExclusiveUserCritEvent, v34, v33.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v33.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v34,
          0,
          1000 * v33.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v31 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v29;
    gbValidateHandleForIL = 1;
    if ( !v26 || !gbBlockSendInputResets )
    {
      v35 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      UpdateLastInput(v35, 3LL);
      CitLastInputUpdate(3, 0, v35);
      if ( !v178 )
      {
        if ( dword_1C011BB60 )
        {
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v27);
          goto LABEL_48;
        }
        LODWORD(v181) = 4;
        *((_QWORD *)&v181 + 1) = v27;
        goto LABEL_47;
      }
    }
    goto LABEL_48;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( a3 == 4 )
    {
      if ( a4 )
      {
        if ( a5 == 4 )
        {
          v13 = a6;
          if ( a6 )
          {
            v14 = *(_DWORD *)a4;
            v15 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
            if ( v15 )
              v15[1] = KeQueryPerformanceCounter(0LL);
            v16 = EnterCritAvoidingDitHitTestHazard(0, 1);
            v18 = PsGetCurrentThreadWin32Thread(v17);
            if ( v18 )
            {
              v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v18 + 8));
              if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
                && (qword_1C0118B10 & 0x200000010000000LL) != 0
                && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
                && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
              {
                LOBYTE(v19) = byte_1C0118B28 - 1;
                Template_xqx(
                  v19,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v21,
                  v20.LowPart,
                  0,
                  gullUserCritAcquireToken);
              }
              if ( v20.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
                && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
              {
                Template_xqx(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v21,
                  0,
                  1000 * v20.QuadPart / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              }
              *(_QWORD *)(v18 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
            }
            v22 = dword_1C011BB08;
            gptiCurrent = v16;
            gbValidateHandleForIL = 1;
            v23 = dword_1C011BB08 + v14;
            dword_1C011BB08 += v14;
            if ( v22 == 1 )
            {
              v24 = v23 <= 0;
              if ( !v23 )
              {
                CitDisplayRequestChange(0);
                EtwTraceDisplayReqChange();
                if ( !gbBlockSendInputResets )
                  UpdateLastInput(
                    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                    8LL);
                goto LABEL_23;
              }
            }
            else
            {
              if ( !v22 && v23 == 1 )
              {
                CitDisplayRequestChange(1u);
                EtwTraceDisplayReqChange();
              }
              v24 = v23 <= 0;
            }
            v182 = 1;
            if ( !v24 )
            {
LABEL_24:
              ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v182, 1LL, 0LL, &gSessionId, 0, 0);
              UserSessionSwitchLeaveCrit();
              if ( !v22 && v23 == 1 )
              {
                if ( dword_1C011BB10 != 2 )
                  goto LABEL_27;
                LODWORD(v181) = 4;
                *((_QWORD *)&v181 + 1) = 0LL;
                QueuePowerRequest(&v181, 0);
              }
              if ( v23 < 0 )
              {
LABEL_28:
                *v13 = v6;
                return v10;
              }
LABEL_27:
              v6 = v23;
              goto LABEL_28;
            }
LABEL_23:
            v182 = 0;
            goto LABEL_24;
          }
        }
      }
    }
    return (unsigned int)-1073741823;
  }
  v53 = v12 - 1;
  if ( !v53 )
  {
    if ( a3 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    if ( *(_DWORD *)a4 )
    {
      if ( *(_DWORD *)a4 == 1 )
      {
        v66 = 1;
LABEL_166:
        UpdateLastInput(
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          3LL);
LABEL_167:
        if ( v67 )
        {
          if ( gSystemIsAoAc )
            SetInputMode(1LL);
LABEL_137:
          LODWORD(v181) = 5 - (v66 != 0);
          *((_QWORD *)&v181 + 1) = *((int *)a4 + 1);
          goto LABEL_138;
        }
LABEL_170:
        if ( !v66 )
          return v10;
        goto LABEL_137;
      }
      if ( *(_DWORD *)a4 != 2 )
        goto LABEL_170;
      v69 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread((unsigned int)(*(_DWORD *)a4 - 1));
      if ( v69 )
        v69[1] = KeQueryPerformanceCounter(0LL);
      v180 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v71 = PsGetCurrentThreadWin32Thread(v70);
      if ( v71 )
      {
        v74 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v71 + 8));
        if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
          && (qword_1C0118B10 & 0x200000010000000LL) != 0
          && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          LOBYTE(v72) = byte_1C0118B28 - 1;
          Template_xqx(
            v72,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v73,
            v74.LowPart,
            0,
            gullUserCritAcquireToken);
        }
        if ( v74.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
          && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        {
          Template_xqx(
            gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v73,
            0,
            1000 * v74.QuadPart / gliQpcFreq.QuadPart,
            gullUserCritAcquireToken);
        }
        *(_QWORD *)(v71 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
      }
      gptiCurrent = v180;
      gbValidateHandleForIL = 1;
      if ( gPowerTransitionsState )
      {
        v10 = 255;
      }
      else
      {
        v68 = 1;
        v66 = 1;
      }
      UserSessionSwitchLeaveCrit();
      v67 = 0;
    }
    else
    {
      v67 = 1;
    }
    if ( !v68 )
      goto LABEL_167;
    goto LABEL_166;
  }
  v54 = v53 - 1;
  if ( v54 )
  {
    v55 = v54 - 1;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        if ( v56 != 1 || a3 != 4 || !a4 )
          return (unsigned int)-1073741823;
        v57 = 1;
        *((_QWORD *)&v181 + 1) = *(int *)a4;
        LODWORD(v181) = 15;
      }
      else
      {
        if ( a3 != 8 || !a4 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        v57 = 0;
        *((_QWORD *)&v181 + 1) = *((int *)a4 + 1);
        if ( *a4 )
          LODWORD(v181) = 13;
        else
          LODWORD(v181) = 14;
      }
LABEL_139:
      QueuePowerRequest(&v181, v57);
      return v10;
    }
    v58 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v58 )
      v58[1] = KeQueryPerformanceCounter(0LL);
    v59 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v61 = PsGetCurrentThreadWin32Thread(v60);
    if ( v61 )
    {
      v63 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v61 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
        && (qword_1C0118B10 & 0x200000010000000LL) != 0
        && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        Template_xqx(v62, (unsigned int)&AcquiredExclusiveUserCritEvent, v64, v63.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v63.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          1000 * v63.QuadPart / gliQpcFreq.QuadPart,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v64,
          0,
          1000 * v63.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v61 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v59;
    gbValidateHandleForIL = 1;
    if ( gWakeInProgress )
    {
      *((_QWORD *)&v181 + 1) = gWakeInProgressReason;
      gWakeInProgress = 0;
      gWakeInProgressReason = MonitorRequestReasonUnknown;
      LODWORD(v181) = 12;
LABEL_47:
      QueuePowerRequest(&v181, 0);
    }
LABEL_48:
    UserSessionSwitchLeaveCrit();
    return v10;
  }
  if ( a3 != 32 || !a4 )
    return (unsigned int)-1073741811;
  dword_1C011BB34 = *(_DWORD *)a4;
  dword_1C011BB38 = *((_DWORD *)a4 + 1);
  dword_1C011BB3C = *((_DWORD *)a4 + 2);
  dword_1C011BB40 = *((_DWORD *)a4 + 3);
  dword_1C011BB44 = *((_DWORD *)a4 + 4);
  dword_1C011BB48 = *((_DWORD *)a4 + 5);
  dword_1C011BB4C = *((_DWORD *)a4 + 6);
  dword_1C011BB50 = *((_DWORD *)a4 + 7);
  gbPowerHighPrecisionBrightness = 1;
  if ( qword_1C011B910 )
  {
    LOBYTE(a1) = 1;
    v10 = qword_1C011B910(a1, a4);
  }
  else
  {
    v10 = -1073741637;
  }
  PowerUpdateBrightnessLevels();
  v65 = dword_1C011BB10;
  if ( dword_1C011BB10 == 1 )
  {
    if ( dword_1C011BB30 == dword_1C011BB34 )
      return v10;
    LODWORD(v181) = 11;
    *((_QWORD *)&v181 + 1) = 1LL;
    QueuePowerRequest(&v181, 0);
    v65 = dword_1C011BB10;
  }
  if ( v65 == 2 && dword_1C011BB30 != dword_1C011BB44 )
  {
    LODWORD(v181) = 11;
    *((_QWORD *)&v181 + 1) = 2LL;
LABEL_138:
    v57 = 0;
    goto LABEL_139;
  }
  return v10;
}
