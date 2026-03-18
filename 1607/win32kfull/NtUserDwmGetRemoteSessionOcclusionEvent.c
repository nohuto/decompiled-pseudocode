/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C01330C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C000C524 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

void *NtUserDwmGetRemoteSessionOcclusionEvent()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // rbx
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v0);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v2 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v2 < 0 )
    {
      Handle = 0LL;
      UserSetLastStatus(v2, 1);
    }
  }
  else
  {
    Handle = 0LL;
    UserSetLastError(5LL);
  }
  v5 = Handle;
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
