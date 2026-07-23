/*
 * XREFs of NtFlushWriteBuffer @ 0x1800A8010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtFlushWriteBuffer(void)
{
  NTSTATUS result; // eax

  result = 224;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
