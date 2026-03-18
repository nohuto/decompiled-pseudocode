/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C0203AB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C009D96C (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ecx

  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 3221225506LL;
  v5 = gnShadowers;
  if ( gnShadowers || gbConnected )
  {
    xxxRemoteStopScreenUpdates();
    v5 = gnShadowers;
  }
  gnShadowers = v5 + 1;
  return 0LL;
}
