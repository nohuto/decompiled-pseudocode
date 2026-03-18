/*
 * XREFs of RemoteShadowCleanup @ 0x1400F6EE4
 * Callers:
 *     NtUserRemoteShadowCleanup @ 0x1402BAB50 (NtUserRemoteShadowCleanup.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     GetRemoteHDEV @ 0x140291FF4 (GetRemoteHDEV.c)
 *     bDrvShadowDisconnect @ 0x140293AD4 (bDrvShadowDisconnect.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall RemoteShadowCleanup(volatile void *a1, unsigned int a2)
{
  SIZE_T v2; // rsi
  __int64 v3; // rdx
  __int64 RemoteContext; // r14
  bool v5; // bl
  unsigned int *v6; // rcx
  bool v7; // di
  __int64 v8; // rbx
  __int64 v9; // rcx
  void *v10; // rax
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 RemoteHDEV; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 UserSessionState; // rax
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax

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
    LOBYTE(v33) = v7;
    LOBYTE(v34) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v34,
      v33,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      24,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( PsGetCurrentProcess(v9) != v8 )
    return 3221225506LL;
  ProbeForRead(a1, v2, 1u);
  v10 = (void *)Win32AllocPoolWithQuotaZInit(v2, 1769435989LL);
  v11 = v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  memmove(v10, (const void *)a1, v2);
  v14 = W32GetUserSessionState(v13, v12);
  if ( *(_DWORD *)(v14 + 68756) )
  {
    RemoteHDEV = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 68800);
  }
  else
  {
    v30 = *(_QWORD *)(RemoteContext + 40);
    v31 = W32GetUserSessionState(v16, v15);
    RemoteHDEV = GetRemoteHDEV(*(unsigned __int16 *)(v31 + 68744), v30);
  }
  bDrvShadowDisconnect(RemoteHDEV, v11, (unsigned int)v2);
  Win32FreePool(v11);
  if ( *(_DWORD *)(W32GetUserSessionState(v19, v18) + 68896) )
  {
    v35 = W32GetUserSessionState(v21, v20);
    --*(_DWORD *)(v35 + 68896);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v21, v20) + 68896) || *(_DWORD *)(W32GetUserSessionState(v23, v22) + 68748) )
  {
    v24 = W32GetUserSessionState(v23, v22);
    RemoteRedrawScreen(v24 + 19184);
  }
  LOBYTE(v23) = 1;
  SetPointerInternal(v23, 6LL);
  if ( !*(_DWORD *)(W32GetUserSessionState(v26, v25) + 68896) )
  {
    v36 = W32GetUserSessionState(v28, v27);
    *(_DWORD *)(*(_QWORD *)(v36 + 19904) + 2236LL) &= ~2u;
  }
  return 0LL;
}
