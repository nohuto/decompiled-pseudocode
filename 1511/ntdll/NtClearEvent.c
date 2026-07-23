/*
 * XREFs of NtClearEvent @ 0x1800A5880
 * Callers:
 *     RtlBarrier @ 0x1800DBBA0 (RtlBarrier.c)
 *     RtlBarrierForDelete @ 0x1800DBCE0 (RtlBarrierForDelete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtClearEvent(HANDLE EventHandle)
{
  NTSTATUS result; // eax

  result = 62;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
