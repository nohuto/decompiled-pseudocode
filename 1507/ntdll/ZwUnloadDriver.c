/*
 * XREFs of ZwUnloadDriver @ 0x180095390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  NTSTATUS result; // eax

  result = 425;
  __asm { syscall; Low latency system call }
  return result;
}
