/*
 * XREFs of RemoteRedrawScreen @ 0x14026EB0C
 * Callers:
 *     RemoteShadowCleanup @ 0x1400F6EE4 (RemoteShadowCleanup.c)
 *     xxxRemoteDisconnect @ 0x1401B3938 (xxxRemoteDisconnect.c)
 *     RemotePassthruDisable @ 0x14023BB7C (RemotePassthruDisable.c)
 *     NtUserRemoteRedrawScreen @ 0x1402BAAA0 (NtUserRemoteRedrawScreen.c)
 *     RemoteShadowStart @ 0x1402D2ACC (RemoteShadowStart.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14025A0C4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??4?$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z @ 0x1402965F8 (--4-$SGRDPgbFreezeScreenUpdates@H@@QEAAAEAHAEBH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RemoteRedrawScreen(void **a1, __int64 a2)
{
  struct MOVESIZEDATA *v3; // rcx
  bool v4; // bl
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v21; // [rsp+40h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // [rsp+48h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23[2]; // [rsp+50h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]

  v3 = WPP_GLOBAL_Control;
  v4 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      13,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v3, a2) + 68852) )
  {
    v21 = 0;
    SGRDPgbFreezeScreenUpdates<int>::operator=(v9, &v21);
    if ( (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      LOBYTE(v22) = 0;
      ActivityId = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x42u, 0, v23, (unsigned __int8 *)&v22);
      v12 = v23[0];
      v15 = W32GetUserSessionState(v14, v13);
      DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v15 + 56968) + 16LL), 1LL, 0LL, v12);
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v22);
    }
    else
    {
      v18 = W32GetUserSessionState(v11, v10);
      KeSetEvent(*(PRKEVENT *)(v18 + 68432), 1, 0);
    }
    if ( *a1 )
    {
      *(_DWORD *)(W32GetUserSessionState(v17, v16) + 62824) = 0;
      v19 = *((_QWORD *)*a1 + 5);
      if ( (*((_DWORD *)*a1 + 12) & 8) == 0 )
      {
        Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(&v22, *((void **)*a1 + 5));
        Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(&ActivityId, *a1);
        xxxSwitchDesktop(v19, (__int64)*a1, 2, 0);
        if ( v25 != -1 )
        {
          PopAndFreeW32ThreadLock((__int64)&ActivityId);
          v25 = -1LL;
        }
        if ( v23[1] != (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)-1LL )
          PopAndFreeW32ThreadLock((__int64)&v22);
      }
      LockObjectAssignment(a1, 0LL);
    }
  }
  return 0LL;
}
