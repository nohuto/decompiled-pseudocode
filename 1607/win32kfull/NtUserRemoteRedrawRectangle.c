/*
 * XREFs of NtUserRemoteRedrawRectangle @ 0x1C0218E20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     RemoteRedrawRectangle @ 0x1C01E57FC (RemoteRedrawRectangle.c)
 */

__int64 __fastcall NtUserRemoteRedrawRectangle(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _DWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v8);
  v11 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    v14[0] = a1;
    v14[1] = a2;
    v14[2] = a3;
    v14[3] = a4;
    RemoteRedrawRectangle(v14);
    v12 = 0;
  }
  else
  {
    v12 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
