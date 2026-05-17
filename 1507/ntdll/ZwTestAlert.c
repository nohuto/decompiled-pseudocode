/*
 * XREFs of ZwTestAlert @ 0x180095330
 * Callers:
 *     _LdrpInitialize @ 0x18006BE24 (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x180095660 (KiUserApcHandler.c)
 * Callees:
 *     <none>
 */

__int64 ZwTestAlert()
{
  __int64 result; // rax

  result = 419LL;
  __asm { syscall; Low latency system call }
  return result;
}
