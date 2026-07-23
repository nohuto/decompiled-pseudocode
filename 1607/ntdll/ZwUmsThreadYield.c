/*
 * XREFs of ZwUmsThreadYield @ 0x1800A9A30
 * Callers:
 *     RtlUmsThreadYield @ 0x1800ECC30 (RtlUmsThreadYield.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUmsThreadYield(PVOID SchedulerParam)
{
  NTSTATUS result; // eax

  result = 433;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
