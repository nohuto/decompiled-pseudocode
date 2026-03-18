/*
 * XREFs of NtUserRemoteRedrawScreen @ 0x1C021F540
 * Callers:
 *     <none>
 * Callees:
 *     RemoteRedrawScreen @ 0x1C012ED14 (RemoteRedrawScreen.c)
 */

__int64 NtUserRemoteRedrawScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v4 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gnShadowers || gbConnected )
      v5 = RemoteRedrawScreen();
    else
      v5 = -1073741823;
  }
  else
  {
    v5 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
