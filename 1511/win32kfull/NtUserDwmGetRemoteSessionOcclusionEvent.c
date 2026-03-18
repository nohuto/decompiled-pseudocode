/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0112910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0007BB0 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 */

void *NtUserDwmGetRemoteSessionOcclusionEvent()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v5 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v5 < 0 )
    {
      Handle = 0LL;
      UserSetLastStatus(v5, 1);
    }
  }
  else
  {
    Handle = 0LL;
    UserSetLastError(5);
  }
  v8 = Handle;
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
