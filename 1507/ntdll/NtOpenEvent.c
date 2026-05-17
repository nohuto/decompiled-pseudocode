/*
 * XREFs of NtOpenEvent @ 0x180093D00
 * Callers:
 *     WaitForWerSvc @ 0x180002094 (WaitForWerSvc.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenEvent()
{
  __int64 result; // rax

  result = 64LL;
  __asm { syscall; Low latency system call }
  return result;
}
