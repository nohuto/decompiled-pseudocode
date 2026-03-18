/*
 * XREFs of RemotePassthruDisable @ 0x14023BB7C
 * Callers:
 *     NtUserRemotePassthruDisable @ 0x1402BA930 (NtUserRemotePassthruDisable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     bDrvReconnect @ 0x140291B28 (bDrvReconnect.c)
 *     GetRemoteHDEV @ 0x140291FF4 (GetRemoteHDEV.c)
 */

__int64 RemotePassthruDisable()
{
  __int64 RemoteContext; // rbp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rdi
  bool v5; // bl
  bool v6; // si
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rax

  RemoteContext = GreGetRemoteContext();
  UserSessionState = W32GetUserSessionState(v2, v1);
  v5 = 0;
  if ( WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control )
  {
    v3 = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (v3 & 4) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(v3, WPP_GLOBAL_Control);
    LOBYTE(v16) = v6;
    LOBYTE(v17) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 69152),
      4,
      3,
      26,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v7 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
  if ( PsGetCurrentProcess(v8) != v7 )
    return 3221225506LL;
  if ( *(_DWORD *)(UserSessionState + 68748) )
  {
    if ( *(_DWORD *)(UserSessionState + 68756) )
    {
      RemoteHDEV = *(_QWORD *)(UserSessionState + 68800);
      v10 = *(_QWORD *)(UserSessionState + 68792);
      v11 = *(_QWORD *)(UserSessionState + 68824);
    }
    else
    {
      v11 = *(_QWORD *)(UserSessionState + 68912);
      v10 = *(_QWORD *)(UserSessionState + 68680);
      RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(UserSessionState + 68744), *(_QWORD *)(RemoteContext + 40));
    }
    if ( !(unsigned int)bDrvReconnect(RemoteHDEV, v10, v11, 1LL) )
      return 3221880856LL;
    v18 = W32GetUserSessionState(v13, v12);
    RemoteRedrawScreen(v18 + 19184);
    UpdateKeyLights(0LL);
  }
  return 0LL;
}
