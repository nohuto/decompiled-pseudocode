/*
 * XREFs of xxxInjectTouchInput @ 0x14029E10C
 * Callers:
 *     NtUserInjectTouchInput @ 0x1402B6AF0 (NtUserInjectTouchInput.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1401736A8 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140197844 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1401A3DAC (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CheckGrantedAccess @ 0x1401AC1D4 (CheckGrantedAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401B9FB8 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT@@I@Z @ 0x14024B6D0 (-ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagRECT.c)
 *     ?SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x14024BC7C (-SortTouchContacts@@YAHPEAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?CheckCurrentInjectionConfiguration@@YAXXZ @ 0x14025A210 (-CheckCurrentInjectionConfiguration@@YAXXZ.c)
 *     GetScreenRect @ 0x14025BAE8 (GetScreenRect.c)
 *     ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1402612DC (-_GetQpcBasedTouchStackTime@@YAKXZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140262100 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x14026ED64 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x14028A8E4 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 *     ?_ValidateInjectionQpcCount@@YAH_K00HH@Z @ 0x140295450 (-_ValidateInjectionQpcCount@@YAH_K00HH@Z.c)
 *     ?_ValidateInjectionTime@@YAHKKKHH@Z @ 0x140296950 (-_ValidateInjectionTime@@YAHKKKHH@Z.c)
 *     ?DoInputCheck@@YA?AW4InputCheckResult@@W4InputCheckRequest@@@Z @ 0x14029B104 (-DoInputCheck@@YA-AW4InputCheckResult@@W4InputCheckRequest@@@Z.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x14029D0FC (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x14029DE30 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInjectTouchInput(__int64 a1, struct tagPOINTER_TOUCH_INFO *a2)
{
  struct tagPOINTER_TOUCH_INFO *v2; // r14
  unsigned int v3; // ebx
  int v4; // esi
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // bp
  int v11; // edx
  int v12; // edi
  int v13; // r8d
  char v14; // bl
  bool v15; // r14
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  bool v20; // bl
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // bl
  bool v29; // di
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  bool v39; // r14
  __int64 v40; // rax
  int v41; // edx
  int v42; // r8d
  __int64 v43; // r9
  unsigned __int64 v44; // r8
  unsigned int v45; // ecx
  unsigned __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rbx
  int v49; // r12d
  unsigned int v50; // eax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r13
  __int64 v54; // r9
  __int64 v55; // rcx
  struct tagINJECTED_CONTACT *v56; // r12
  __int64 v57; // rax
  char v58; // r14
  __int64 v59; // rax
  bool v60; // bl
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  int v64; // ecx
  bool v65; // di
  int v66; // edx
  int v67; // r8d
  __int64 v68; // r9
  bool v69; // r15
  int v70; // ebx
  __int64 v71; // rax
  int v72; // r8d
  __int64 v73; // rax
  _DWORD *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rax
  bool v77; // zf
  __int64 v78; // r8
  int v79; // r9d
  int v80; // eax
  bool v81; // bl
  __int64 v82; // rax
  bool v83; // bl
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  int v87; // eax
  __int64 v88; // r15
  bool v89; // bl
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  bool v93; // cf
  ULONG v94; // r12d
  int QpcBasedTouchStackTime; // eax
  __int64 v96; // rcx
  __int64 v97; // rdx
  unsigned int *v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rcx
  INT *v103; // r13
  char *v104; // r15
  __int64 v105; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  INT DpiForSystem; // edi
  INT v108; // ebx
  INT v109; // eax
  INT v110; // ecx
  INT v111; // eax
  int v112; // edx
  _DWORD *v113; // rax
  int v114; // r8d
  __int64 v115; // rcx
  unsigned __int64 v116; // rax
  unsigned int v117; // [rsp+20h] [rbp-E8h]
  int v118; // [rsp+28h] [rbp-E0h]
  int v119; // [rsp+30h] [rbp-D8h]
  __int16 v120; // [rsp+30h] [rbp-D8h]
  __int16 v121; // [rsp+30h] [rbp-D8h]
  __int16 v122; // [rsp+30h] [rbp-D8h]
  __int16 v123; // [rsp+30h] [rbp-D8h]
  int v124; // [rsp+38h] [rbp-D0h]
  char v125; // [rsp+40h] [rbp-C8h]
  int v126; // [rsp+40h] [rbp-C8h]
  char v127; // [rsp+48h] [rbp-C0h]
  unsigned int v128; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v129; // [rsp+68h] [rbp-A0h]
  __int64 v130; // [rsp+70h] [rbp-98h] BYREF
  int v131; // [rsp+78h] [rbp-90h]
  unsigned int v132; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v133; // [rsp+80h] [rbp-88h]
  unsigned __int64 v134; // [rsp+88h] [rbp-80h]
  __int128 v135; // [rsp+90h] [rbp-78h]
  struct tagPOINTER_TOUCH_INFO *v136; // [rsp+A0h] [rbp-68h]
  __m128i v137; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v138; // [rsp+B8h] [rbp-50h] BYREF

  v2 = a2;
  v136 = a2;
  v3 = a1;
  v133 = a1;
  v4 = 0;
  v5 = PtiCurrent(a1);
  LODWORD(v130) = 0;
  v6 = *((_QWORD *)v5 + 57);
  CheckCurrentInjectionConfiguration(v7);
  v10 = 1;
  if ( !(unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( *((_QWORD *)v5 + 61) != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19176) )
    {
      SetLastNtError(-1073741790);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v120 = 20;
      goto LABEL_321;
    }
    if ( !(unsigned int)CheckGrantedAccess(*((_DWORD *)v5 + 232), 0x20u) )
    {
      SetLastNtError(-1073741790);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v120 = 21;
      goto LABEL_321;
    }
    if ( !*(_QWORD *)(W32GetUserSessionState(v25, v24) + 18984)
      || *(struct tagTHREADINFO **)(W32GetUserSessionState(v27, v26) + 18984) == v5 )
    {
      if ( (unsigned int)IsGpqForegroundAccessibleCurrent(1LL) )
        goto LABEL_47;
      MSGLUA_GPQFOREGROUND(v33);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v28 = 0;
      }
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v32 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v121 = 23;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v28 = 0;
      }
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v28 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 1LL;
      v32 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v121 = 22;
    }
    LOBYTE(v31) = v29;
    LOBYTE(v30) = v28;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v31,
      v32,
      2,
      20,
      v121,
      (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids);
    return 1LL;
  }
  v12 = DoInputCheck(127LL, v8);
  if ( v12 )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v14 = 0;
    }
    v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        20,
        19,
        (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
        v12);
    }
    if ( (unsigned int)(v12 - 4) > 1 )
    {
      RtlNtStatusToDosError(-1073741790);
      return 0LL;
    }
    return 1LL;
  }
LABEL_47:
  v34 = *(_QWORD *)(v6 + 880);
  if ( !v34 )
  {
    SetLastNtError(-1073741790);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
    v120 = 24;
    goto LABEL_321;
  }
  InputTraceLogging::RIM::InjectInput(*(_QWORD *)(v34 + 16), v11, v13);
  *(_QWORD *)(W32GetUserSessionState(v36, v35) + 18880) = v6;
  v37 = *(_QWORD *)(v6 + 880);
  v38 = *(unsigned int *)(v37 + 28);
  if ( v3 > (unsigned int)v38 )
  {
    UserSetLastError(87);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v40 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
    v127 = v38;
    LOBYTE(v42) = v39;
    v125 = v3;
    v43 = *(_QWORD *)(v40 + 69152);
    v122 = 25;
    goto LABEL_259;
  }
  v44 = *((_QWORD *)v2 + 10);
  v128 = *((_DWORD *)v2 + 16);
  v45 = *(_DWORD *)(v37 + 40);
  v46 = *(_QWORD *)(v37 + 64);
  v132 = v45;
  v134 = v46;
  v129 = v44;
  if ( !(unsigned int)SortTouchContacts(v2, v3) )
  {
    UserSetLastError(87);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v10 = 0;
    }
    v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0LL;
    v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
    v120 = 26;
    goto LABEL_321;
  }
  v47 = 0;
  if ( !v3 )
  {
LABEL_103:
    v52 = *(_QWORD *)(v6 + 880);
    v53 = *(_QWORD *)(v52 + 16);
    *(_QWORD *)&v135 = v53;
    if ( !*(_DWORD *)(*(_QWORD *)(v53 + 456) + 1016LL) )
    {
      *(_DWORD *)(v52 + 32) = 0;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 36LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 40LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 48LL) = 0;
      *(_QWORD *)(*(_QWORD *)(v6 + 880) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v6 + 880) + 64LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)(v6 + 880) + 72LL) = 0;
    }
    v54 = *(_QWORD *)(v6 + 880);
    v55 = v129;
    v56 = *(struct tagINJECTED_CONTACT **)(v54 + 80);
    if ( v128 && v129 || *(_DWORD *)(v54 + 32) && v129 || (v57 = *(_QWORD *)(v54 + 56)) != 0 && v128 )
    {
      xxxSendLastFrameTouchUp(v56, (struct DEVICEINFO *)v53, (unsigned int)v38, *(_DWORD *)(v54 + 36));
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v59 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_didi(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v58,
          *(_QWORD *)(v59 + 69152),
          v117,
          v118,
          v119,
          v124);
      }
      return 0LL;
    }
    if ( v129 || (v72 = 1, v57) )
      v72 = 0;
    v73 = *(_QWORD *)(v53 + 456);
    v131 = v72;
    if ( !*(_DWORD *)(v73 + 1016) && (_DWORD)v38 )
    {
      v74 = (_DWORD *)((char *)v56 + 8);
      v75 = v38;
      do
      {
        if ( ((*v74 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          *v74 = 0x40000;
          LODWORD(v130) = 1;
        }
        v74 += 3;
        --v75;
      }
      while ( v75 );
      v55 = v129;
    }
    v76 = *(_QWORD *)(v6 + 880);
    v77 = v72 == 0;
    v78 = *(_QWORD *)(v53 + 456);
    v79 = 0;
    if ( v77 )
    {
      LOBYTE(v79) = *(_DWORD *)(v78 + 1016) == 0;
      if ( !(unsigned int)_ValidateInjectionQpcCount(v55, v134, *(_QWORD *)(v78 + 808), v79, *(_DWORD *)(v76 + 72)) )
      {
        xxxSendLastFrameTouchUp(
          v56,
          (struct DEVICEINFO *)v53,
          (unsigned int)v38,
          (unsigned __int64)(10000LL * *(_QWORD *)(*(_QWORD *)(v6 + 880) + 56LL)) / gliQpcFreq);
        UserSetLastError(87);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v10 = 0;
        }
        v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v84 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
          v85 = v129;
          LOBYTE(v86) = v10;
          LOBYTE(v85) = v83;
          WPP_RECORDER_AND_TRACE_SF_ii(*((_QWORD *)WPP_GLOBAL_Control + 3), v86, v85, *(_QWORD *)(v84 + 69152), 2);
        }
        return 0LL;
      }
    }
    else
    {
      LOBYTE(v79) = *(_DWORD *)(v78 + 1016) == 0;
      LOBYTE(v80) = _ValidateInjectionTime(v128, v132, *(_DWORD *)(v78 + 800), v79, *(_DWORD *)(v76 + 48));
      if ( !v80 )
      {
        xxxSendLastFrameTouchUp(
          v56,
          (struct DEVICEINFO *)v53,
          (unsigned int)v38,
          *(_DWORD *)(*(_QWORD *)(v6 + 880) + 36LL));
        UserSetLastError(87);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v10 = 0;
        }
        v81 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return 0LL;
        v82 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
        LOBYTE(v42) = v81;
        v43 = *(_QWORD *)(v82 + 69152);
        v127 = v132;
        v125 = v128;
        v122 = 45;
        goto LABEL_259;
      }
    }
    v138 = (struct tagRECT)*GetScreenRect(&v137);
    v87 = ValidateInjectedTouchFrame(v3, v2, v56, &v138, v38);
    v88 = *(_QWORD *)(v6 + 880);
    v137.m128i_i64[0] = v88;
    if ( !v87 )
    {
      xxxSendLastFrameTouchUp(v56, (struct DEVICEINFO *)v53, (unsigned int)v38, *(_DWORD *)(v88 + 36));
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v89 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v90 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
        LOBYTE(v91) = v89;
        LOBYTE(v92) = v10;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v92,
          v91,
          *(_QWORD *)(v90 + 69152),
          2,
          20,
          47,
          (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
          v130);
      }
      v93 = (_DWORD)v130 != 0;
      LODWORD(v130) = -(int)v130;
      v64 = v93 ? 1460 : 87;
      goto LABEL_126;
    }
    if ( v131 )
    {
      v94 = 10 * (v128 - *(_DWORD *)(v88 + 32));
      QpcBasedTouchStackTime = _GetQpcBasedTouchStackTime();
      v96 = *(_QWORD *)(v53 + 456);
      if ( !*(_DWORD *)(v96 + 1016) )
      {
        v96 = v128;
        *(_DWORD *)(v88 + 32) = v128;
        *(_DWORD *)(v88 + 36) = QpcBasedTouchStackTime;
LABEL_312:
        v94 = 0;
        goto LABEL_284;
      }
      if ( v94 )
        goto LABEL_284;
      v96 = *(unsigned int *)(v88 + 44);
      v94 = QpcBasedTouchStackTime - *(_DWORD *)(v88 + 36);
      if ( v94 > (unsigned int)v96 )
        goto LABEL_284;
      if ( (unsigned int)v96 - v94 < 5 )
      {
        v94 = v96 + 1;
LABEL_284:
        if ( (_DWORD)v38 )
        {
          v96 = 0LL;
          v97 = v38;
          do
          {
            v96 += 12LL;
            *(_DWORD *)(v96 + *(_QWORD *)(v88 + 80) - 4) = 0x40000;
            --v97;
          }
          while ( v97 );
        }
        if ( v3 )
        {
          v98 = (unsigned int *)((char *)v2 + 4);
          v99 = v3;
          do
          {
            v100 = 3LL * *v98;
            *(_DWORD *)(*(_QWORD *)(v88 + 80) + 4 * v100 + 8) = v98[2] & 0xFFFF7FFF;
            v101 = *(_QWORD *)(v98 + 7);
            v98 += 36;
            v96 = *(_QWORD *)(v88 + 80);
            *(_QWORD *)(v96 + 4 * v100) = v101;
            --v99;
          }
          while ( v99 );
        }
        if ( (W32GetCurrentThreadDpiAwarenessContext(v96) & 0xF) != 2 && v3 )
        {
          v103 = (INT *)((char *)v2 + 116);
          v104 = (char *)v2 + 32;
          v105 = v3;
          do
          {
            v130 = 0LL;
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v102);
            LogicalToPhysicalDPIPoint(v104, v104, CurrentThreadDpiAwarenessContext, &v130);
            DpiForSystem = GetDpiForSystem();
            v108 = *(unsigned __int16 *)(*(_QWORD *)(v130 + 40) + 60LL);
            v109 = EngMulDiv(*(v103 - 1) - *(v103 - 3), v108, DpiForSystem);
            v110 = *v103 - *(v103 - 2);
            *(v103 - 1) = v109;
            v111 = EngMulDiv(v110, v108, DpiForSystem);
            *(_QWORD *)(v103 - 3) = 0LL;
            *v103 = v111;
            v104 += 144;
            v103 += 36;
            --v105;
          }
          while ( v105 );
          v2 = v136;
          v88 = v137.m128i_i64[0];
          v53 = v135;
          v3 = v133;
        }
        v135 = *(_OWORD *)(*(_QWORD *)(v53 + 456) + 160LL);
        if ( v3 )
        {
          v112 = DWORD1(v135);
          v113 = (_DWORD *)((char *)v2 + 36);
          v114 = v135;
          v115 = v3;
          do
          {
            *(v113 - 1) -= v114;
            *v113 -= v112;
            v113 += 36;
            --v115;
          }
          while ( v115 );
        }
        *(_DWORD *)(v88 + 44) = v94;
        if ( v131 )
        {
          if ( v132 && !v128 )
            v4 = 1;
          *(_DWORD *)(v88 + 48) = v4;
          *(_DWORD *)(v88 + 40) = v128;
        }
        else
        {
          if ( v134 && !v129 )
            v4 = 1;
          *(_DWORD *)(v88 + 72) = v4;
          *(_QWORD *)(v88 + 64) = v129;
        }
        xxxSendToTouchStack((struct DEVICEINFO *)v53, v3, v2, v94);
        return 1LL;
      }
      UserSetLastError(21);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v120 = 48;
    }
    else
    {
      v116 = 10000 * (v129 - *(_QWORD *)(v88 + 56)) / gliQpcFreq;
      v96 = *(_QWORD *)(v53 + 456);
      v94 = v116;
      if ( !*(_DWORD *)(v96 + 1016) )
      {
        *(_QWORD *)(v88 + 56) = v129;
        goto LABEL_312;
      }
      if ( (_DWORD)v116 != *(_DWORD *)(v88 + 44) )
        goto LABEL_284;
      UserSetLastError(21);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v120 = 49;
    }
LABEL_321:
    LOBYTE(v22) = v20;
    LOBYTE(v21) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v22,
      v23,
      2,
      20,
      v120,
      (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids);
    return 0LL;
  }
  while ( 1 )
  {
    v48 = 18LL * v47;
    if ( *((_DWORD *)v2 + 36 * v47 + 1) >= (unsigned int)v38 )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v69 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v70 = *((_DWORD *)v2 + 2 * v48 + 1);
      v71 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
      v127 = v38;
      LOBYTE(v42) = v69;
      v125 = v70;
      v43 = *(_QWORD *)(v71 + 69152);
      v122 = 27;
LABEL_259:
      LOBYTE(v41) = v10;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v41,
        v42,
        v43,
        2,
        20,
        v122,
        (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
        v125,
        v127);
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47) != 2 )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v126 = *((_DWORD *)v2 + 2 * v48);
      v68 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v123 = 28;
LABEL_232:
      LOBYTE(v67) = v65;
      LOBYTE(v66) = v10;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v66,
        v67,
        v68,
        2,
        20,
        v123,
        (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
        v126);
      return 0LL;
    }
    v49 = *((_DWORD *)v2 + 36 * v47 + 3);
    v50 = v49 & 0xFFFF7FFF;
    if ( (v49 & 0xFFFF7FFF) != 0x20002
      && v50 != 131078
      && v50 != 65542
      && v50 != 262146
      && v50 != 0x20000
      && v50 != 0x40000 )
    {
      break;
    }
    v51 = *((_DWORD *)v2 + 36 * v47 + 25);
    if ( (v51 & 2) != 0 && *((_DWORD *)v2 + 36 * v47 + 34) >= 0x168u )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v126 = *((_DWORD *)v2 + 2 * v48 + 34);
      v68 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v123 = 30;
      goto LABEL_232;
    }
    if ( (v51 & 4) != 0 && *((_DWORD *)v2 + 36 * v47 + 35) > 0xFDE8u )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v65 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return 0LL;
      v126 = *((_DWORD *)v2 + 2 * v48 + 35);
      v68 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
      v123 = 31;
      goto LABEL_232;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 24) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 32;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 31)
      || *((_DWORD *)v2 + 36 * v47 + 33)
      || *((_DWORD *)v2 + 36 * v47 + 30)
      || *((_DWORD *)v2 + 36 * v47 + 32) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 33;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 2) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 34;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_QWORD *)v2 + 18 * v47 + 2) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 35;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_QWORD *)v2 + 18 * v47 + 3) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 36;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 10) || *((_DWORD *)v2 + 36 * v47 + 11) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 37;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 12) || *((_DWORD *)v2 + 36 * v47 + 13) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 38;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 14) || *((_DWORD *)v2 + 36 * v47 + 15) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 39;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 17) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 40;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 18) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 41;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 19) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 42;
        goto LABEL_321;
      }
      return 0LL;
    }
    if ( *((_DWORD *)v2 + 36 * v47 + 22) )
    {
      UserSetLastError(87);
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69152);
        v120 = 43;
        goto LABEL_321;
      }
      return 0LL;
    }
    v3 = v133;
    if ( ++v47 >= v133 )
      goto LABEL_103;
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v10 = 0;
  }
  v60 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v61 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
    LOBYTE(v62) = v60;
    LOBYTE(v63) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v63,
      v62,
      *(_QWORD *)(v61 + 69152),
      2,
      20,
      29,
      (__int64)&WPP_0188b97e70b83b293653bee646bd69b6_Traceguids,
      v49);
  }
  v64 = 87;
LABEL_126:
  UserSetLastError(v64);
  return 0LL;
}
