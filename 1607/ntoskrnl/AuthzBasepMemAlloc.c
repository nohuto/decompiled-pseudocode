/*
 * XREFs of AuthzBasepMemAlloc @ 0x14000EE20
 * Callers:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14000EDE8 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14009EB60 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401465C0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x1406C9DA8 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T a1, __int64 a2, ULONG a3)
{
  POOL_TYPE v4; // ecx

  v4 = PagedPool;
  if ( KeGetCurrentIrql() >= 2u )
    v4 = NonPagedPoolNx;
  return ExAllocatePoolWithTag(v4, a1, a3);
}
