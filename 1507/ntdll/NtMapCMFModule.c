/*
 * XREFs of NtMapCMFModule @ 0x180094900
 * Callers:
 *     _ResCMapCMFModule @ 0x18000EED8 (_ResCMapCMFModule.c)
 * Callees:
 *     <none>
 */

__int64 NtMapCMFModule()
{
  __int64 result; // rax

  result = 256LL;
  __asm { syscall; Low latency system call }
  return result;
}
