/*
 * XREFs of AuthzBasepMemAlloc @ 0x140006788
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140005FD0 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400066A8 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1401366E8 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140683924 (AuthzBasepAllocateClaimCollectionNoLists.c)
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
