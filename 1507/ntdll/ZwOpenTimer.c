/*
 * XREFs of ZwOpenTimer @ 0x180094AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 282;
  __asm { syscall; Low latency system call }
  return result;
}
