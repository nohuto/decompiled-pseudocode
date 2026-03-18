/*
 * XREFs of RemoteShadowStart @ 0x1402D2ACC
 * Callers:
 *     NtUserRemoteShadowStart @ 0x1402BABE0 (NtUserRemoteShadowStart.c)
 * Callees:
 *     SetPointer @ 0x1400F7230 (SetPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x140291FF4 (GetRemoteHDEV.c)
 *     bDrvShadowConnect @ 0x140336578 (bDrvShadowConnect.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall RemoteShadowStart(volatile void *a1, unsigned int a2)
{
  SIZE_T v2; // rsi
  __int64 v3; // rdx
  __int64 RemoteContext; // r14
  bool v5; // bl
  unsigned int *v6; // rcx
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rcx
  void *v14; // rax
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax

  v2 = a2;
  RemoteContext = GreGetRemoteContext();
  v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = &WPP_RECORDER_INITIALIZED;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      22,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v11 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( PsGetCurrentProcess(v12) != v11 )
    return 3221225506LL;
  ProbeForRead(a1, v2, 1u);
  v14 = (void *)Win32AllocPoolWithQuotaZInit(v2, 1769435989LL);
  v15 = v14;
  if ( !v14 )
    ExRaiseStatus(-1073741801);
  memmove(v14, (const void *)a1, v2);
  if ( *(_DWORD *)(W32GetUserSessionState(v17, v16) + 68756) )
  {
    RemoteHDEV = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 68800);
  }
  else
  {
    v21 = *(_QWORD *)(RemoteContext + 40);
    v22 = W32GetUserSessionState(v19, v18);
    RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(v22 + 68744), v21);
  }
  v23 = bDrvShadowConnect(RemoteHDEV, v15, (unsigned int)v2);
  Win32FreePool(v15);
  if ( !v23 )
    return 3221880856LL;
  v26 = W32GetUserSessionState(v25, v24);
  RemoteRedrawScreen((void **)(v26 + 19184), v27);
  SetPointer(1LL);
  v30 = W32GetUserSessionState(v29, v28);
  *(_DWORD *)(*(_QWORD *)(v30 + 19904) + 2236LL) |= 2u;
  return 0LL;
}
