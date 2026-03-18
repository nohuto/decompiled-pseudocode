/*
 * XREFs of RtlAreAllAccessesGranted @ 0x1404A6B44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreAllAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (~GrantedAccess & DesiredAccess) == 0;
}
