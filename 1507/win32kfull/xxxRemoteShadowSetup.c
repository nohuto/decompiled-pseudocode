/*
 * XREFs of xxxRemoteShadowSetup @ 0x1C0203710
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 */

__int64 __fastcall xxxRemoteShadowSetup(__int64 a1, __int64 a2)
{
  int v3; // ecx

  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS )
    return 3221225506LL;
  v3 = gnShadowers;
  if ( gnShadowers || gbConnected )
  {
    xxxRemoteStopScreenUpdates();
    v3 = gnShadowers;
  }
  gnShadowers = v3 + 1;
  return 0LL;
}
