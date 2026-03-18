/*
 * XREFs of RtlAreAnyAccessesGranted @ 0x140557CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreAnyAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (GrantedAccess & DesiredAccess) != 0;
}
