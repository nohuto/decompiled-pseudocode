/*
 * XREFs of xxxRemoteReconnect @ 0x1402D3988
 * Callers:
 *     NtUserRemoteReconnect @ 0x1402BA9B0 (NtUserRemoteReconnect.c)
 * Callees:
 *     SetMouseTrails @ 0x1400F6DA0 (SetMouseTrails.c)
 *     SetPointer @ 0x1400F7230 (SetPointer.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1400F9A0C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1401B3EEC (xxxRemoteStopScreenUpdates.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B42F4 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1401B448C (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x1401B4600 (RemoveInputDevices.c)
 *     GreMultiUserSetDisplayDriverName @ 0x140238DF4 (GreMultiUserSetDisplayDriverName.c)
 *     DrvOcclusionStateChangeNotify @ 0x140239608 (DrvOcclusionStateChangeNotify.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x14024A4B0 (DrvCloseRemoteGraphicsDevices.c)
 *     RegisterCDROMNotify @ 0x1402584F8 (RegisterCDROMNotify.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14025A0C4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DrvOpenLocalGraphicsDevices @ 0x14025B314 (DrvOpenLocalGraphicsDevices.c)
 *     InitKeyboard @ 0x14025E904 (InitKeyboard.c)
 *     xxxUserReinitializeAutoRotation @ 0x140262F60 (xxxUserReinitializeAutoRotation.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x140266B1C (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     AttachInputDevices @ 0x14029FEEC (AttachInputDevices.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxRemoteReconnect(_DWORD *Src)
{
  bool v2; // bl
  BOOL v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // r14
  __int64 v9; // rdx
  __int64 RemoteContext; // r13
  unsigned int *v11; // rcx
  bool v12; // di
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rax
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int64 v24; // rdx
  int v25; // edi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  _DWORD *v30; // rdi
  int v31; // ebx
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  wchar_t *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  _WORD *v46; // rcx
  __int64 v47; // rax
  size_t v48; // rbx
  unsigned __int16 *v49; // rax
  unsigned __int16 *v50; // rdi
  __int64 v51; // rdi
  struct _FILE_OBJECT *v52; // rcx
  __int64 v53; // rcx
  PVOID v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  void *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int16 v62; // ax
  unsigned __int16 v63; // bx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // ebx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbx
  unsigned int v84; // eax
  char v85; // bl
  bool v86; // di
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  __int64 v90; // rdx
  __int64 v91; // rcx
  bool v92; // zf
  unsigned int CurrentWin32kSessionId; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  unsigned int v103; // ebx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int16 v126; // bx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  void (__fastcall *v131)(__int64, _QWORD); // rdi
  Gre::Base *v132; // rcx
  unsigned int RemoteDeviceCount; // eax
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  int HandleInformation; // [rsp+28h] [rbp-370h]
  char v140[8]; // [rsp+60h] [rbp-338h] BYREF
  unsigned __int16 *v141; // [rsp+68h] [rbp-330h]
  int v142; // [rsp+70h] [rbp-328h]
  int v143; // [rsp+74h] [rbp-324h] BYREF
  PVOID Object; // [rsp+78h] [rbp-320h] BYREF
  unsigned __int16 v145; // [rsp+80h] [rbp-318h]
  int v146; // [rsp+84h] [rbp-314h]
  int v147; // [rsp+88h] [rbp-310h]
  int v148; // [rsp+8Ch] [rbp-30Ch]
  int v149; // [rsp+90h] [rbp-308h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v150; // [rsp+98h] [rbp-300h]
  unsigned int v151; // [rsp+A0h] [rbp-2F8h]
  int v152; // [rsp+A4h] [rbp-2F4h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v153; // [rsp+A8h] [rbp-2F0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v154; // [rsp+B0h] [rbp-2E8h] BYREF
  _DWORD *v155; // [rsp+B8h] [rbp-2E0h]
  _BYTE v156[328]; // [rsp+C8h] [rbp-2D0h] BYREF
  _BYTE v157[32]; // [rsp+210h] [rbp-188h] BYREF
  __int64 v158; // [rsp+230h] [rbp-168h]
  __int64 v159; // [rsp+238h] [rbp-160h]
  __int64 v160; // [rsp+240h] [rbp-158h]
  __int64 v161; // [rsp+248h] [rbp-150h]
  __int64 v162; // [rsp+250h] [rbp-148h]
  __int128 v163; // [rsp+260h] [rbp-138h]
  __int128 v164; // [rsp+270h] [rbp-128h]
  __int128 v165; // [rsp+280h] [rbp-118h]
  __int128 v166; // [rsp+290h] [rbp-108h]
  unsigned __int16 v167[29]; // [rsp+2A0h] [rbp-F8h] BYREF
  __int128 v168; // [rsp+2DAh] [rbp-BEh]
  __int16 v169; // [rsp+2EAh] [rbp-AEh]
  __int128 v170; // [rsp+2ECh] [rbp-ACh]
  int v171; // [rsp+2FCh] [rbp-9Ch]
  int v172; // [rsp+300h] [rbp-98h]
  int v173; // [rsp+304h] [rbp-94h]
  unsigned __int16 v174; // [rsp+318h] [rbp-80h]
  __int64 v175; // [rsp+31Ch] [rbp-7Ch]
  int v176; // [rsp+324h] [rbp-74h]
  int v177; // [rsp+328h] [rbp-70h]
  int v178; // [rsp+32Ch] [rbp-6Ch]
  int v179; // [rsp+334h] [rbp-64h]
  GUID v180; // [rsp+350h] [rbp-48h] BYREF

  v155 = Src;
  v2 = 0;
  LOBYTE(v153) = 0;
  v180 = 0LL;
  EtwActivityIdControl(3u, &v180);
  DisplayScenarioContextEnsureAndAssociate(&v180, 0x16u, 0, &v154, (unsigned __int8 *)&v153);
  v150 = v154;
  v142 = 0;
  v3 = 0;
  v146 = 0;
  v147 = 0;
  v151 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 16288) + 1;
  v149 = 0;
  v148 = 0;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v145 = *(_WORD *)(UserSessionState + 68744);
  memset_0(v157, 0, 0x140uLL);
  v143 = 0;
  v141 = 0LL;
  *(_QWORD *)&v180.Data1 = 0LL;
  RemoteContext = GreGetRemoteContext();
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0 )
  {
    v2 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  }
  v11 = &WPP_RECORDER_INITIALIZED;
  v12 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v9);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 69152),
      4,
      3,
      16,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v16 = *(_QWORD *)(W32GetUserGdiSessionState(v11) + 40);
  if ( PsGetCurrentProcess(v17) != v16 )
  {
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v153);
    return 3221225506LL;
  }
  v21 = W32GetUserSessionState(v19, v18);
  *(_DWORD *)(v21 + 68928) |= 0x20u;
  memset_0(v156, 0, 0x140uLL);
  RtlCopyFromUser(v156, Src, 0x140uLL);
  v22 = v157;
  v23 = v156;
  v24 = 2LL;
  do
  {
    *v22 = *v23;
    v22[1] = v23[1];
    v22[2] = v23[2];
    v22[3] = v23[3];
    v22[4] = v23[4];
    v22[5] = v23[5];
    v22[6] = v23[6];
    v22 += 8;
    *(v22 - 1) = v23[7];
    v23 += 8;
    --v24;
  }
  while ( v24 );
  *v22 = *v23;
  v22[1] = v23[1];
  v22[2] = v23[2];
  v22[3] = v23[3];
  if ( *(_DWORD *)(UserSessionState + 68844) )
  {
    v25 = -1073741823;
LABEL_16:
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v153);
    return (unsigned int)v25;
  }
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  *(_QWORD *)(UserSessionState + 68920) = UserSessionState + 68944;
  v25 = PopulateUMKMHandlePair(v160, UserSessionState + 68632);
  if ( v25 < 0 )
    goto LABEL_16;
  v26 = PopulateUMKMHandlePair(v161, UserSessionState + 68648);
  v29 = v26;
  if ( v26 < 0 )
  {
    v25 = v26;
    goto LABEL_16;
  }
  v30 = v155;
  *(_DWORD *)(UserSessionState + 68624) = v155[5];
  *(_DWORD *)(UserSessionState + 68628) = v30[6];
  *(_QWORD *)(UserSessionState + 68616) = v158;
  *(_QWORD *)(UserSessionState + 68664) = v159;
  *(_QWORD *)(UserSessionState + 68680) = v162;
  *(_QWORD *)(UserSessionState + 68832) = v175;
  *(_DWORD *)(UserSessionState + 68840) = v176;
  v31 = v172;
  *(_DWORD *)(W32GetUserSessionState(v28, v27) + 16264) = v31;
  v32 = v173;
  *(_DWORD *)(W32GetUserSessionState(v34, v33) + 14028) = v32;
  v152 = *(_DWORD *)(UserSessionState + 68608);
  *(_DWORD *)(UserSessionState + 68608) = v179;
  *(_DWORD *)(RemoteContext + 64) = v179;
  *(_QWORD *)(UserSessionState + 68688) = *((_QWORD *)v30 + 38);
  *(_DWORD *)(UserSessionState + 68696) = v30[78];
  *(_OWORD *)(UserSessionState + 68700) = *(_OWORD *)((char *)v30 + 162);
  *(_OWORD *)(UserSessionState + 68716) = *(_OWORD *)((char *)v30 + 178);
  *(_QWORD *)(UserSessionState + 68732) = *(_QWORD *)((char *)v30 + 194);
  v37 = W32GetUserSessionState(v36, v35);
  *(_OWORD *)(v37 + 64112) = v163;
  *(_OWORD *)(v37 + 64128) = v164;
  *(_OWORD *)(v37 + 64144) = v165;
  *(_OWORD *)(v37 + 64160) = v166;
  *(_OWORD *)(v37 + 63552) = v168;
  *(_WORD *)(v37 + 63568) = v169;
  *(_OWORD *)(v37 + 63572) = v170;
  *(_DWORD *)(v37 + 63588) = v171;
  v38 = wcschr((const wchar_t *)(v37 + 64112), 0x23u);
  if ( v38 )
    *v38 = 0;
  if ( !IsRemoteConnection(v40, v39) || (FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v143, 0), v143) )
  {
    v45 = W32GetUserSessionState(v42, v41);
    *(_DWORD *)(*(_QWORD *)(v45 + 19904) + 2236LL) |= 4u;
  }
  else
  {
    v43 = W32GetUserSessionState(v42, v41);
    *(_DWORD *)(*(_QWORD *)(v43 + 19904) + 2236LL) &= ~4u;
  }
  v46 = *(_WORD **)(RemoteContext + 40);
  if ( !v46 )
    goto LABEL_29;
  v47 = -1LL;
  do
    ++v47;
  while ( v46[v47] );
  *(_QWORD *)&v180.Data1 = v47 + 1;
  v48 = 2 * (v47 + 1);
  v49 = (unsigned __int16 *)Win32AllocPoolWithQuotaZInit(v48, 2020897621LL);
  v50 = v49;
  v141 = v49;
  if ( v49 )
  {
    memmove(v49, *(const void **)(RemoteContext + 40), v48);
LABEL_29:
    v51 = *(_QWORD *)(UserSessionState + 68904);
    if ( v51 || (v46 = *(_WORD **)(UserSessionState + 68616)) == 0LL )
    {
      if ( !*(_QWORD *)(UserSessionState + 68616) )
      {
        v57 = *(_QWORD *)(UserSessionState + 68912);
        v58 = W32GetUserSessionState(v46, v44);
        if ( !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              *(_QWORD *)(UserSessionState + 68680),
                              *(_QWORD *)(UserSessionState + 68920),
                              *(unsigned int *)(UserSessionState + 68624),
                              *(_DWORD *)(v58 + 68628),
                              v51,
                              v57,
                              8,
                              v167,
                              19,
                              UserSessionState + 68700) )
          v29 = -1073741823;
      }
    }
    else
    {
      Object = 0LL;
      v29 = ObReferenceObjectByHandle(v46, 0, 0LL, 0, &Object, 0LL);
      if ( v29 >= 0 )
      {
        v52 = (struct _FILE_OBJECT *)Object;
        *(_QWORD *)(UserSessionState + 68904) = Object;
        IoGetRelatedDeviceObject(v52);
        Object = 0LL;
        v29 = ObReferenceObjectByHandle(*(HANDLE *)(UserSessionState + 68680), 0, 0LL, 0, &Object, 0LL);
        v54 = Object;
        *(_QWORD *)(UserSessionState + 68912) = Object;
        if ( v29 >= 0 )
        {
          v55 = *(_QWORD *)(UserSessionState + 68904);
          v56 = W32GetUserSessionState(v53, v44);
          if ( !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                *(_QWORD *)(UserSessionState + 68680),
                                *(_QWORD *)(UserSessionState + 68920),
                                *(unsigned int *)(UserSessionState + 68624),
                                *(_DWORD *)(v56 + 68628),
                                v55,
                                v54,
                                8,
                                v167,
                                19,
                                UserSessionState + 68700) )
            v29 = -1073741823;
        }
      }
    }
    if ( v29 < 0 )
      goto LABEL_86;
    v59 = *(void **)(UserSessionState + 68664);
    if ( v59 )
    {
      Object = 0LL;
      v29 = ObReferenceObjectByHandle(v59, 0, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(UserSessionState + 68672) = Object;
    }
    if ( v29 < 0 )
      goto LABEL_86;
    if ( *(_DWORD *)(W32GetUserSessionState(v59, v44) + 68896) )
      xxxRemoteStopScreenUpdates(v61, v60);
    v62 = *(_WORD *)(UserSessionState + 69040);
    if ( v174 == v62 || !v62 )
      goto LABEL_54;
    if ( !v141 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, v180.Data1 - 1, v141) )
    {
      v63 = *(_WORD *)(UserSessionState + 68744);
      v64 = W32GetUserSessionState(v61, v60);
      v29 = xxxRemoteSetDisconnectDisplayMode(*(struct tagDESKTOP **)(v64 + 19176), v63, v150);
      if ( v29 < 0 )
        goto LABEL_86;
      if ( v155[72] )
        DrvCloseRemoteGraphicsDevices();
      if ( !v141 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8, v167) )
      {
LABEL_54:
        SetProtocolType(v174);
        if ( !*(_WORD *)(W32GetUserSessionState(v66, v65) + 68744) )
          DrvNotifySessionStateChange(3LL);
        v148 = 1;
        if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
        {
          if ( *(_WORD *)(UserSessionState + 68744) == *(_WORD *)(UserSessionState + 69040) )
          {
            v69 = GreDrvReconnect(RemoteContext);
            v70 = v142;
          }
          else
          {
            v70 = 1;
            v142 = 1;
            v69 = GreDrvConnect(RemoteContext);
          }
          v29 = v69;
          v3 = v69 >= 0;
        }
        else
        {
          v70 = 1;
          v142 = 1;
          if ( !*(_WORD *)(W32GetUserSessionState(v68, v67) + 68744) )
          {
            v29 = DrvOpenLocalGraphicsDevices(0LL);
            if ( v29 < 0 )
              goto LABEL_86;
            v147 = 1;
          }
        }
        v149 = 1;
        v71 = DrvSetGraphicsDevices(v167);
        v73 = 0LL;
        if ( v71 )
        {
          if ( !v177 && *(_WORD *)(UserSessionState + 68744) == *(_WORD *)(UserSessionState + 69040) && !v178 )
            goto LABEL_133;
          v76 = W32GetUserSessionState(0LL, v72);
          v29 = 0;
          if ( (unsigned int)DrvIsNotUsingGraphicsDevice(*(_QWORD *)(*(_QWORD *)(v76 + 56968) + 16LL)) )
          {
            if ( !(unsigned int)DrvSessionHasAnyGraphicsDevice() )
              goto LABEL_133;
          }
          DispBrokerUpdateKernelDisplayPolicies();
          if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
          {
            v79 = W32GetUserSessionState(v78, v77);
            LOBYTE(HandleInformation) = 0;
            v80 = xxxUserSetDisplayConfig(
                    0LL,
                    0LL,
                    v178 != 0 ? 2447 : 2191,
                    2050LL,
                    *(_QWORD *)(v79 + 19184),
                    HandleInformation,
                    0LL,
                    0LL,
                    0LL,
                    v150,
                    0LL);
          }
          else
          {
            v83 = *(_QWORD *)(W32GetUserSessionState(v78, v77) + 19184);
            if ( v178 || (v92 = *(_WORD *)(W32GetUserSessionState(v82, v81) + 68744) == 0, v84 = 2191, v92) )
              v84 = 2447;
            LOBYTE(HandleInformation) = 0;
            v80 = xxxUserSetDisplayConfig(0LL, 0LL, v84, 2050LL, v83, HandleInformation, 0LL, 0LL, 0LL, v150, 0LL);
            v70 = v142;
          }
          v29 = v80;
          v72 = 0LL;
          if ( v80 < 0 )
          {
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
              || (v85 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v85 = 0;
            }
            v86 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v85 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v87 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, 0LL);
              LOBYTE(v88) = v86;
              LOBYTE(v89) = v85;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v89,
                v88,
                *(_QWORD *)(v87 + 69152),
                4,
                3,
                17,
                (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
            }
          }
          else
          {
LABEL_133:
            if ( IsRemoteConnection(v73, v72) )
            {
              if ( v70 )
              {
                v102 = W32GetUserSessionState(v101, v100);
                v103 = 2;
                if ( !(unsigned int)DrvEscapeRemoteDrivers(
                                      *(_QWORD *)(*(_QWORD *)(v102 + 56968) + 16LL),
                                      *(unsigned __int16 *)(UserSessionState + 68744),
                                      *(_QWORD *)(RemoteContext + 40),
                                      2LL,
                                      *(_QWORD *)(UserSessionState + 68936),
                                      8) )
                  v29 = -1073741823;
              }
              else
              {
                v103 = 2;
              }
              AttachInputDevices(0LL, v100);
            }
            else
            {
              if ( *(_WORD *)(UserSessionState + 69040) )
                RemoveInputDevices(v101, v100);
              AttachInputDevices(1LL, v100);
              xxxUserReinitializeAutoRotation(v107, v106);
              LOBYTE(v108) = 1;
              LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v140, v108);
              RegisterCDROMNotify(v109);
              v146 = 1;
              LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v140);
              v103 = 2;
            }
            v110 = W32GetUserSessionState(v105, v104);
            RemoteRedrawScreen((void **)(v110 + 19184), v111);
            InitKeyboard(v113, v112);
            UpdateKeyLights(0LL);
            SetPointer(1LL);
            *(_DWORD *)(W32GetUserSessionState(v115, v114) + 36372) = 9;
            TransitionCursorSuppressionState(10LL, 0LL);
            if ( *(_DWORD *)(W32GetUserSessionState(v117, v116) + 36372) == 1
              || *(_DWORD *)(W32GetUserSessionState(v119, v118) + 36372) == 5 )
            {
              v103 = *(_DWORD *)(W32GetUserSessionState(v119, v118) + 36372);
            }
            TransitionCursorSuppressionState(v103, 0LL);
            SetConnectedState(1LL, *(unsigned int *)(UserSessionState + 68752));
            if ( !IsRemoteConnection(v121, v120)
              || (FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v143, 0), v143) )
            {
              v125 = *(_QWORD *)(W32GetUserSessionState(v123, v122) + 19904);
              *(_DWORD *)(v125 + 2236) |= 4u;
            }
            else
            {
              v125 = *(_QWORD *)(W32GetUserSessionState(v123, v122) + 19904);
              *(_DWORD *)(v125 + 2236) &= ~4u;
            }
            v126 = *(_WORD *)(W32GetUserSessionState(v125, v124) + 68744);
            v131 = *(void (__fastcall **)(__int64, _QWORD))(DxDdGetDxgkWin32kInterface(v128, v127, v129, v130) + 384);
            RemoteDeviceCount = DrvGetRemoteDeviceCount(v132);
            LOBYTE(v134) = v126 == 0;
            v131(v134, RemoteDeviceCount);
            LOBYTE(v137) = *(_WORD *)(W32GetUserSessionState(v136, v135) + 68744) == 0;
            LOBYTE(v138) = 1;
            CitSessionConnectChange(v138, v137);
          }
          goto LABEL_86;
        }
        if ( *(_DWORD *)(UserSessionState + 68896) )
        {
          v74 = W32GetUserSessionState(0LL, v72);
          RemoteRedrawScreen((void **)(v74 + 19184), v75);
        }
      }
    }
    v29 = -1073741823;
LABEL_86:
    v50 = v141;
    goto LABEL_87;
  }
  v29 = -1073741801;
LABEL_87:
  SetMouseTrails(v151);
  v92 = v29 == 0;
  if ( v29 < 0 )
  {
    if ( v3 )
      GreDrvDisconnect((Gre::Base *)RemoteContext);
    v92 = v29 == 0;
  }
  if ( v92 && !*(_WORD *)(W32GetUserSessionState(v91, v90) + 68744) )
  {
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v91);
    RtlSetActiveConsoleId(CurrentWin32kSessionId);
  }
  if ( !*(_WORD *)(W32GetUserSessionState(v91, v90) + 68744) )
    DrvNotifySessionStateChange(4LL);
  if ( v29 < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  DxgkEngNotifyDisplayChange(0LL);
  if ( v29 < 0 )
  {
    v98 = v152;
    *(_DWORD *)(UserSessionState + 68608) = v152;
    *(_DWORD *)(RemoteContext + 64) = v98;
    if ( v146 )
      UnregisterDeviceClassNotifications(v95, v94);
    if ( v147 )
      DrvCloseGraphicsDevices(1LL);
    if ( v148 )
      SetProtocolType(v145);
    if ( v149 )
      DrvSetGraphicsDevices(v167);
  }
  if ( v50 )
    Win32FreePool(v50);
  if ( !v29 && IsRemoteConnection(v95, v94) )
  {
    v99 = W32GetUserSessionState(v95, v94);
    DrvEscapeRemoteDrivers(
      *(_QWORD *)(*(_QWORD *)(v99 + 56968) + 16LL),
      *(unsigned __int16 *)(UserSessionState + 68744),
      *(_QWORD *)(RemoteContext + 40),
      6LL,
      0LL,
      0);
  }
  DrvOcclusionStateChangeNotify(v95, v94, v96, v97);
  DispBrokerAsyncSessionStateChanged(v150);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v153);
  return (unsigned int)v29;
}
