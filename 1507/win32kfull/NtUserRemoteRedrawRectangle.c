/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C021F4C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C01EFABC (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // ebx
  _DWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF

  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v9, v8);
  v12 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    v15[0] = a1;
    v15[1] = a2;
    v15[2] = a3;
    v15[3] = a4;
    RemoteRedrawRectangle(v15);
    v13 = 0;
  }
  else
  {
    v13 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v12);
  return v13;
}
