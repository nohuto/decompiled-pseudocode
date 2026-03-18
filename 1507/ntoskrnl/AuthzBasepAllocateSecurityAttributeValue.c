/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x140015F6C
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttributeValues @ 0x14002BD14 (AuthzBasepAddSecurityAttributeValues.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140015FA4 (AuthzBasepMemAlloc.c)
 *     memset @ 0x140195A80 (memset.c)
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
