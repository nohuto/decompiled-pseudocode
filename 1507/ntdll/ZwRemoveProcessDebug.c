/*
 * XREFs of ZwRemoveProcessDebug @ 0x180094E70
 * Callers:
 *     DbgUiStopDebugging @ 0x1800BC350 (DbgUiStopDebugging.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  NTSTATUS result; // eax

  result = 343;
  __asm { syscall; Low latency system call }
  return result;
}
