/*
 * XREFs of AuthzBasepMemAlloc @ 0x140015FA4
 * Callers:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x140015F6C (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14011CC68 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14015EB3C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x1407085C8 (AuthzBasepAllocateClaimCollectionNoLists.c)
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
