/*
 * XREFs of CtxDisplayIOCtl @ 0x1402D297C
 * Callers:
 *     NtUserCtxDisplayIOCtl @ 0x1402B0C40 (NtUserCtxDisplayIOCtl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetRemoteHDEV @ 0x140291FF4 (GetRemoteHDEV.c)
 *     RemoteRedrawRectangle @ 0x1402CB024 (RemoteRedrawRectangle.c)
 *     bDrvDisplayIOCtl @ 0x140336358 (bDrvDisplayIOCtl.c)
 */

__int64 __fastcall CtxDisplayIOCtl(char a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 RemoteContext; // rbp
  bool v9; // bl
  bool v10; // di
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v17; // rbx
  __int64 v18; // rax

  RemoteContext = GreGetRemoteContext();
  v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      27,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v7, v6) + 68756) )
  {
    RemoteHDEV = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 68800);
  }
  else
  {
    v17 = *(_QWORD *)(RemoteContext + 40);
    v18 = W32GetUserSessionState(v15, v14);
    RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(v18 + 68744), v17);
  }
  if ( !(unsigned int)bDrvDisplayIOCtl(RemoteHDEV, a2, a3) )
    return 3221880856LL;
  if ( (a1 & 1) != 0 )
    RemoteRedrawRectangle(0LL);
  return 0LL;
}
