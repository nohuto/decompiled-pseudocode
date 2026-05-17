/*
 * XREFs of NtAdjustGroupsToken @ 0x180093FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAdjustGroupsToken()
{
  __int64 result; // rax

  result = 106LL;
  __asm { syscall; Low latency system call }
  return result;
}
