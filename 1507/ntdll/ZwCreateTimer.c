/*
 * XREFs of ZwCreateTimer @ 0x180094440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  NTSTATUS result; // eax

  result = 180;
  __asm { syscall; Low latency system call }
  return result;
}
