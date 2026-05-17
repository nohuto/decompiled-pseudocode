/*
 * XREFs of NtQueryInformationResourceManager @ 0x180094C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationResourceManager()
{
  __int64 result; // rax

  result = 307LL;
  __asm { syscall; Low latency system call }
  return result;
}
