/*
 * XREFs of ZwCreateJobSet @ 0x180094320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateJobSet(ULONG NumJob, PJOB_SET_ARRAY UserJobSet, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 162;
  __asm { syscall; Low latency system call }
  return result;
}
