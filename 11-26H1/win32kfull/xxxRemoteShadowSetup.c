/*
 * XREFs of xxxRemoteShadowSetup @ 0x1402D4974
 * Callers:
 *     NtUserRemoteShadowSetup @ 0x1402BABA0 (NtUserRemoteShadowSetup.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1401B3EEC (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2)
{
  struct MOVESIZEDATA *v2; // rcx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax

  v2 = WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      21,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
  if ( PsGetCurrentProcess(v9) != v8 )
    return 3221225506LL;
  if ( *(_DWORD *)(W32GetUserSessionState(v11, v10) + 68896) || *(_DWORD *)(W32GetUserSessionState(v14, v13) + 68748) )
    xxxRemoteStopScreenUpdates(v14, v13);
  v15 = W32GetUserSessionState(v14, v13);
  ++*(_DWORD *)(v15 + 68896);
  return 0LL;
}
