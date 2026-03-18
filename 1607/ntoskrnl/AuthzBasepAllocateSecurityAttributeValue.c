/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x14000F268
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000ED90 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14007C458 (AuthzBasepAddSecurityAttributeValues.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14000F2A0 (AuthzBasepMemAlloc.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void *__fastcall AuthzBasepAllocateSecurityAttributeValue(unsigned int a1, __int64 a2)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)AuthzBasepMemAlloc(a1 + 64LL, a2, 1950442835LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x40uLL);
  return v3;
}
