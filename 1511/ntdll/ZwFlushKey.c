/*
 * XREFs of ZwFlushKey @ 0x1800A6C10
 * Callers:
 *     RtlApplyRXact @ 0x180086800 (RtlApplyRXact.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 219;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
