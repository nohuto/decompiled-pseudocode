/*
 * XREFs of NtUserRemoteStopScreenUpdates @ 0x1C021F3C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C009D96C (xxxRemoteStopScreenUpdates.c)
 */

__int64 NtUserRemoteStopScreenUpdates()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v6 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( gfSwitchInProgress )
      v7 = -1073741823;
    else
      v7 = xxxRemoteStopScreenUpdates();
  }
  else
  {
    v7 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
