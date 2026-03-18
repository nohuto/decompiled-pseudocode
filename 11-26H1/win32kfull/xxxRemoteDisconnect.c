/*
 * XREFs of xxxRemoteDisconnect @ 0x1401B3938
 * Callers:
 *     NtUserRemoteDisconnect @ 0x1401B3900 (NtUserRemoteDisconnect.c)
 * Callees:
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1401B3EEC (xxxRemoteStopScreenUpdates.c)
 *     GreDxgkSessionDisconnected @ 0x1401B4268 (GreDxgkSessionDisconnected.c)
 *     GreDxgkPreSessionDisconnected @ 0x1401B4298 (GreDxgkPreSessionDisconnected.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B42F4 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x1401B448C (UnregisterDeviceClassNotifications.c)
 *     RemoveInputDevices @ 0x1401B4600 (RemoveInputDevices.c)
 *     PowerOnGdi @ 0x140248020 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140253020 (PowerOffGdi.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14025A0C4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     AutoRotationUpdateRegistry @ 0x14025DAD0 (AutoRotationUpdateRegistry.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 xxxRemoteDisconnect()
{
  unsigned int v0; // edi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // r13
  __int64 v5; // rcx
  __int64 RemoteContext; // r12
  char v7; // bl
  bool v8; // si
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // esi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  bool v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int16 v44; // bx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  int **v60; // rcx
  int v61; // ebx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 UserSessionState; // rax
  int v66; // r8d
  int v67; // edx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  _BYTE v73[4]; // [rsp+40h] [rbp-40h] BYREF
  int v74; // [rsp+44h] [rbp-3Ch]
  unsigned __int8 v75[8]; // [rsp+48h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v76; // [rsp+50h] [rbp-30h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+58h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-20h] BYREF

  v0 = 0;
  v75[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x15u, 0, &v76, v75);
  v1 = v76;
  Timeout.QuadPart = 0LL;
  v4 = *(_WORD *)(W32GetUserSessionState(v3, v2) + 68744);
  RemoteContext = GreGetRemoteContext();
  v74 = 0;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (v5 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v5 & 4) == 0)
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v5, WPP_GLOBAL_Control);
    LOBYTE(v66) = v8;
    LOBYTE(v67) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v67,
      v66,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      15,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v9 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
  if ( PsGetCurrentProcess(v10) == v9 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v12, v11) + 68748) )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 18716) )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v16, v15) + 68744) && !(unsigned int)UserIsWddmConnectedSession() )
        {
          GreDxgkPreSessionDisconnected(0LL);
          GreDxgkSessionDisconnected(0LL);
        }
        v19 = W32GetUserSessionState(v18, v17);
        *(_DWORD *)(v19 + 68928) |= 0x10u;
        v22 = W32GetUserSessionState(v21, v20);
        memset_0((void *)(v22 + 64112), 0, 0x40uLL);
        if ( !*(_DWORD *)(W32GetUserSessionState(v24, v23) + 68844) )
        {
          if ( !*(_WORD *)(W32GetUserSessionState(v26, v25) + 68744)
            && !*(_DWORD *)(W32GetUserGdiSessionState(v27) + 28) )
          {
            v74 = 1;
            PowerOnGdi(v1, 1LL, 4LL);
          }
          SetConsoleSwitchInProgress(1LL);
          if ( !*(_QWORD *)(W32GetUserSessionState(v29, v28) + 62976) )
          {
            LOBYTE(v30) = 1;
            Timeout.QuadPart = -3000000000LL;
            LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v73, v30);
            v70 = W32GetUserSessionState(v69, v68);
            KeWaitForSingleObject(*(PVOID *)(v70 + 62800), WrUserRequest, 0, 0, &Timeout);
            LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v73);
          }
          if ( *(_QWORD *)(W32GetUserSessionState(v31, v30) + 62976) )
          {
            v34 = xxxRemoteStopScreenUpdates();
            if ( v34 < 0 )
              goto LABEL_15;
            if ( *(_DWORD *)(W32GetUserSessionState(v33, v32) + 68896) )
            {
              v71 = W32GetUserSessionState(v37, v36);
              RemoteRedrawScreen(v71 + 19184);
            }
            if ( !(unsigned int)UserIsWddmConnectedSession() )
            {
              GreDrvDisconnect(RemoteContext);
              goto LABEL_34;
            }
            v40 = *(_WORD *)(W32GetUserSessionState(v39, v38) + 68744) == 0;
            LOBYTE(v41) = v40;
            GreDxgkPreSessionDisconnected(v41);
            v44 = *(_WORD *)(W32GetUserSessionState(v43, v42) + 68744);
            v47 = W32GetUserSessionState(v46, v45);
            v48 = xxxRemoteSetDisconnectDisplayMode(*(struct tagDESKTOP **)(v47 + 19176), v44, v1);
            LOBYTE(v49) = v40;
            v34 = v48;
            GreDxgkSessionDisconnected(v49);
            if ( v34 >= 0 )
            {
              DrvCloseGraphicsDevices(v40);
LABEL_34:
              *(_WORD *)(W32GetUserSessionState(v53, v52) + 69040) = v4;
              if ( !*(_WORD *)(W32GetUserSessionState(v55, v54) + 69040) )
              {
                UnregisterDeviceClassNotifications();
                RemoveInputDevices();
              }
              OPMDestroyAllProtectedOutputs();
              SetConnectedState(0LL, 0LL);
              AutoRotationUpdateRegistry();
              CitSessionConnectChange(0LL, 0LL);
              if ( !v4 )
                DrvSetGraphicsDevices(L"TSDDD");
              if ( IsRemoteConnection(v57, v56) )
              {
                v60 = *(int ***)(W32GetUserSessionState(v59, v58) + 56968);
                v61 = **v60;
                *(_DWORD *)(W32GetUserSessionState(v60, v62) + 68740) = v61;
                W32GetUserSessionState(v64, v63);
              }
              CleanupRemoteHandles(RemoteContext);
              goto LABEL_15;
            }
            v72 = W32GetUserSessionState(v51, v50);
            RemoteRedrawScreen(v72 + 19184);
          }
          else
          {
            v34 = -1073741823;
          }
LABEL_15:
          SetConsoleSwitchInProgress(0LL);
          if ( v34 < 0 && v74 == 1 )
            PowerOffGdi(v1);
          DispBrokerAsyncSessionStateChanged(v1);
          if ( v75[0] )
            DisplayScenarioContextDissociate(&v76);
          return (unsigned int)v34;
        }
        v0 = -1073741267;
      }
      else
      {
        v0 = -1073741823;
      }
    }
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v75);
    return v0;
  }
  if ( v75[0] )
    DisplayScenarioContextDissociate(&v76);
  return 3221225506LL;
}
