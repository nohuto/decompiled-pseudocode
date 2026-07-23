/*
 * XREFs of ZwVdmControl @ 0x180095420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwVdmControl(VDMSERVICECLASS Service, PVOID ServiceData)
{
  NTSTATUS result; // eax

  result = 434;
  __asm { syscall; Low latency system call }
  return result;
}
