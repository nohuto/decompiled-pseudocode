/*
 * XREFs of ZwQuerySecurityAttributesToken @ 0x180094D10
 * Callers:
 *     RtlpQueryPackageIdentityAttributes @ 0x180064A9C (RtlpQueryPackageIdentityAttributes.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySecurityAttributesToken()
{
  __int64 result; // rax

  result = 321LL;
  __asm { syscall; Low latency system call }
  return result;
}
