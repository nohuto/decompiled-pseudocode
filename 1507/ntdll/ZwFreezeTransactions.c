/*
 * XREFs of ZwFreezeTransactions @ 0x180094700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreezeTransactions(PLARGE_INTEGER FreezeTimeout, PLARGE_INTEGER ThawTimeout)
{
  NTSTATUS result; // eax

  result = 224;
  __asm { syscall; Low latency system call }
  return result;
}
