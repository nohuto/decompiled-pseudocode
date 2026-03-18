/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1402512F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x14001F7CC (UserSetLastStatus.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

void *__fastcall NtUserDwmGetRemoteSessionOcclusionEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  int v7; // eax
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(a1, a2, a3) )
  {
    UserSessionState = W32GetUserSessionState(v4, v3);
    v7 = ObOpenObjectByPointer(
           *(PVOID *)(UserSessionState + 68432),
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v7 < 0 )
      UserSetLastStatus(v7, 1);
  }
  else
  {
    UserSetLastError(5);
  }
  return Handle;
}
