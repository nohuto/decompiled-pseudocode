/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0131490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C0005C30 (UserSetLastStatus.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

void *NtUserDwmGetRemoteSessionOcclusionEvent()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rbx
  void *Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v3 = ObOpenObjectByPointer(
           gpRemoteSessionOcclusionEvent,
           0,
           0LL,
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           1,
           &Handle);
    if ( v3 < 0 )
    {
      Handle = 0LL;
      UserSetLastStatus(v3, 1);
    }
  }
  else
  {
    Handle = 0LL;
    UserSetLastError(5);
  }
  v6 = Handle;
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
