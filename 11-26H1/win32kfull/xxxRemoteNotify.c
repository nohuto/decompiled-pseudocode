/*
 * XREFs of xxxRemoteNotify @ 0x14024ECD0
 * Callers:
 *     NtUserRemoteNotify @ 0x14024EC90 (NtUserRemoteNotify.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxRemoteNotify(void *Src)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 UserSessionState; // rax
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetUserGdiSessionState(Src) + 40);
  if ( PsGetCurrentProcess(v3) != v2 )
    return 3221225506LL;
  v9 = 0;
  RtlCopyFromUser(&v9, Src, 4uLL);
  if ( v9 == 11 )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    *(_DWORD *)(UserSessionState + 68928) |= 0x4000000u;
    goto LABEL_7;
  }
  if ( v9 == 12 )
  {
    v7 = W32GetUserSessionState(v6, v5);
    *(_DWORD *)(v7 + 68928) |= 0x8000000u;
LABEL_7:
    SetConnectCompletedState(1LL);
  }
  return 0LL;
}
