/*
 * XREFs of ZwCallbackReturn @ 0x180093950
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x180095750 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800957E0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallbackReturn(PVOID OutputBuffer, ULONG OutputLength, NTSTATUS Status)
{
  NTSTATUS result; // eax

  result = 5;
  __asm { syscall; Low latency system call }
  return result;
}
