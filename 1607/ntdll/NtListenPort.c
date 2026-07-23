/*
 * XREFs of NtListenPort @ 0x1800A8310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtListenPort(HANDLE PortHandle, PPORT_MESSAGE ConnectionRequest)
{
  NTSTATUS result; // eax

  result = 248;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
