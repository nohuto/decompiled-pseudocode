/*
 * XREFs of CheckCursorClipAccess @ 0x1400293B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x140029660 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1402942C4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x140294BF0 (-IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rax
  struct tagRECT v15; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v6 = CurrentLogicalCursorThread;
  if ( !a1 )
  {
    v8 = *(_QWORD *)(W32GetUserGdiSessionState(v5) + 40);
    if ( **((_QWORD **)v6 + 57) == v8
      || (unsigned int)CheckWinstaAttributeAccess(0x10u)
      || (unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v6 + 57))
      && (unsigned int)IsGpqForegroundAccessibleForPti(v6, 1) )
    {
      UserSessionState = W32GetUserSessionState(v8, v7);
      CCursorClip::GetClip(*(CCursorClip **)(UserSessionState + 36272), &v15);
      if ( *((_QWORD *)v6 + 58) == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18928)
        || a2
        || v15.left < v15.right && v15.top < v15.bottom )
      {
        return 1LL;
      }
    }
    return 0LL;
  }
  v13 = a1 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( (unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 57)) )
        return 0LL;
      if ( !*(_DWORD *)(*((_QWORD *)v6 + 57) + 868LL) )
        return 0LL;
      if ( !(unsigned int)InForegroundQueue(v6, 0) )
        return 0LL;
      v14 = *(_QWORD *)(*((_QWORD *)v6 + 57) + 824LL);
      if ( !v14 || (*(_DWORD *)(v14 + 100) & 1) == 0 )
        return 0LL;
    }
  }
  else if ( !RtlAreAllAccessesGranted(*(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 57) + 672LL), 2u) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  return 1LL;
}
