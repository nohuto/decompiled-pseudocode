/*
 * XREFs of RtlAreAllAccessesGranted @ 0x140532504
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreAllAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (~GrantedAccess & DesiredAccess) == 0;
}
