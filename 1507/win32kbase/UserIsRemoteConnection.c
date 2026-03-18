/*
 * XREFs of UserIsRemoteConnection @ 0x1C0066750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsRemoteConnection()
{
  return gProtocolType != 0;
}
