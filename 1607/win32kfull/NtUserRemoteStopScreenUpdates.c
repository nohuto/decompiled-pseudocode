/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x1C0218F10
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
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
    if ( gfSwitchInProgress )
      v4 = -1073741823;
    else
      v4 = xxxRemoteStopScreenUpdates();
  }
  else
  {
    v4 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
