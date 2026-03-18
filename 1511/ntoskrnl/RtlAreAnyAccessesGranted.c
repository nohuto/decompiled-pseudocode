/*
 * XREFs of RtlAreAnyAccessesGranted @ 0x1404C1D1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreAnyAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (GrantedAccess & DesiredAccess) != 0;
}
