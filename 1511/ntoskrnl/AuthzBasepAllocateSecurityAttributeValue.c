/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x14009E7F8
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140005B9C (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepAllocateSecurityAttributeValue(unsigned int a1)
{
  POOL_TYPE v1; // r9d
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  v1 = PagedPool;
  if ( KeGetCurrentIrql() >= 2u )
    v1 = NonPagedPoolNx;
  PoolWithTag = ExAllocatePoolWithTag(v1, a1 + 64LL, 0x74416553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x40uLL);
  return v3;
}
