/*
 * XREFs of ZwSerializeBoot @ 0x180094FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwSerializeBoot(void)
{
  NTSTATUS result; // eax

  result = 363;
  __asm { syscall; Low latency system call }
  return result;
}
