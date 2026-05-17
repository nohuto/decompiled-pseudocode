/*
 * XREFs of NtSetInformationResourceManager @ 0x1800950D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetInformationResourceManager()
{
  __int64 result; // rax

  result = 381LL;
  __asm { syscall; Low latency system call }
  return result;
}
