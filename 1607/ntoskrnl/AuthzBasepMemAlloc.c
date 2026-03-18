/*
 * XREFs of AuthzBasepMemAlloc @ 0x14000F2A0
 * Callers:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14000F268 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400A0238 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AC934 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140146050 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x1406C9C70 (AuthzBasepAllocateClaimCollectionNoLists.c)
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
