/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C0218EB0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C0154254 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v0);
  v3 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v4 = RemoteRedrawScreen();
    else
      v4 = -1073741823;
  }
  else
  {
    v4 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
