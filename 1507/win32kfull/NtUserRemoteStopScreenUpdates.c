/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x1C021F5A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
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
    if ( gfSwitchInProgress )
      v5 = -1073741823;
    else
      v5 = xxxRemoteStopScreenUpdates();
  }
  else
  {
    v5 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
