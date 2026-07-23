/*
 * XREFs of ZwLoadDriver @ 0x1800A8330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  NTSTATUS result; // eax

  result = 249;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
