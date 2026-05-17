/*
 * XREFs of NtQueryInformationJobObject @ 0x180094C10
 * Callers:
 *     TppJobpRundownJob @ 0x18007A72C (TppJobpRundownJob.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationJobObject()
{
  __int64 result; // rax

  result = 305LL;
  __asm { syscall; Low latency system call }
  return result;
}
