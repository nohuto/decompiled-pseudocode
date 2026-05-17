/*
 * XREFs of ZwCallbackReturn @ 0x180093950
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x180095750 (KiUserCallbackDispatcherHandler.c)
 *     KiUserCallbackDispatcher @ 0x1800957E0 (KiUserCallbackDispatcher.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallbackReturn()
{
  __int64 result; // rax

  result = 5LL;
  __asm { syscall; Low latency system call }
  return result;
}
