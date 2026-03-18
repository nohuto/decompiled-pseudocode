/*
 * XREFs of ?DxgkEngIsRemoteConnection@@YAHPEAH@Z @ 0x1C006F510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DxgkEngIsRemoteConnection(int *a1)
{
  if ( a1 )
    *a1 = gbConnected;
  return gProtocolType != 0;
}
