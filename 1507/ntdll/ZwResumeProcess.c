/*
 * XREFs of ZwResumeProcess @ 0x180094F10
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeProcess()
{
  __int64 result; // rax

  result = 353LL;
  __asm { syscall; Low latency system call }
  return result;
}
