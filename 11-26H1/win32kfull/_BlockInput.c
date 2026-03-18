/*
 * XREFs of _BlockInput @ 0x140237008
 * Callers:
 *     NtUserBlockInput @ 0x140236FB0 (NtUserBlockInput.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall BlockInput(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rdi
  const struct tagUIPI_INFO *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD v15[4]; // [rsp+20h] [rbp-28h] BYREF

  v15[0] = 12288;
  v15[2] = 0;
  v1 = a1;
  v15[1] = -1;
  v3 = PtiCurrent(a1);
  if ( v1 )
  {
    v5 = *(_QWORD *)(W32GetUserGdiSessionState(v2) + 40);
    if ( PsGetCurrentProcess(v6) != v5
      && (*((_QWORD *)v3 + 61) != *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19176)
       || !RtlAreAllAccessesGranted(*((_DWORD *)v3 + 232), 0x20u)) )
    {
      SetLastNtError(-1073741790);
      return 0LL;
    }
  }
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*((_QWORD *)v3 + 57) + 864LL),
          (const struct tagUIPI_INFO *)v15,
          v4) )
  {
    SetLastNtError(-1073741790);
    EtwTraceUIPISystemError(*((_QWORD *)v3 + 57), 0LL, 2LL);
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v10, v9);
  if ( v1 )
  {
    if ( !*(_QWORD *)(UserSessionState + 18984)
      && (_InterlockedCompareExchange((volatile signed __int32 *)v3 + 130, 0, 0) & 1) == 0 )
    {
      *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18984) = v3;
      return 1LL;
    }
    return 0LL;
  }
  if ( *(struct tagTHREADINFO **)(UserSessionState + 18984) != v3 )
    return 0LL;
  *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18984) = 0LL;
  return 1LL;
}
