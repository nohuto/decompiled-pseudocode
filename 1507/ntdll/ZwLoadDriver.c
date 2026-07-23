/*
 * XREFs of ZwLoadDriver @ 0x180094850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  NTSTATUS result; // eax

  result = 245;
  __asm { syscall; Low latency system call }
  return result;
}
