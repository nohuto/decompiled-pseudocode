/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800952E0
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x18000A9E4 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     <none>
 */

__int64 NtSubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 414LL;
  __asm { syscall; Low latency system call }
  return result;
}
