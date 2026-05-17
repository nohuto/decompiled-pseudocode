/*
 * XREFs of NtOpenThreadTokenEx @ 0x180093BF0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlpOpenThreadToken @ 0x18006E804 (RtlpOpenThreadToken.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadTokenEx()
{
  __int64 result; // rax

  result = 47LL;
  __asm { syscall; Low latency system call }
  return result;
}
