/*
 * XREFs of NtCreateTimer2 @ 0x180094450
 * Callers:
 *     TppInitializeTimerSubQueue @ 0x18007CEC8 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateTimer2(
        PHANDLE TimerHandle,
        PVOID Reserved1,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Attributes,
        ACCESS_MASK DesiredAccess)
{
  NTSTATUS result; // eax

  result = 181;
  __asm { syscall; Low latency system call }
  return result;
}
