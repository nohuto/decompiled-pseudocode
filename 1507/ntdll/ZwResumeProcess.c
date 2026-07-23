/*
 * XREFs of ZwResumeProcess @ 0x180094F10
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeProcess(HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 353;
  __asm { syscall; Low latency system call }
  return result;
}
