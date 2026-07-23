/*
 * XREFs of ZwUmsThreadYield @ 0x180095380
 * Callers:
 *     RtlUmsThreadYield @ 0x1800DE320 (RtlUmsThreadYield.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUmsThreadYield(PVOID SchedulerParam)
{
  NTSTATUS result; // eax

  result = 424;
  __asm { syscall; Low latency system call }
  return result;
}
