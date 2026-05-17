/*
 * XREFs of NtQueryEvent @ 0x180093E60
 * Callers:
 *     PsspDumpObject_Event @ 0x180082CC0 (PsspDumpObject_Event.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryEvent()
{
  __int64 result; // rax

  result = 86LL;
  __asm { syscall; Low latency system call }
  return result;
}
