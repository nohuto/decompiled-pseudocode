/*
 * XREFs of ZwTestAlert @ 0x180095330
 * Callers:
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x180095660 (KiUserApcHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  NTSTATUS result; // eax

  result = 419;
  __asm { syscall; Low latency system call }
  return result;
}
