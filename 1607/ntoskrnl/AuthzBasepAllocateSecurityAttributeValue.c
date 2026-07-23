/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x14000EDE8
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14007C4D8 (AuthzBasepAddSecurityAttributeValues.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14000EE20 (AuthzBasepMemAlloc.c)
 *     memset @ 0x140171AC0 (memset.c)
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
