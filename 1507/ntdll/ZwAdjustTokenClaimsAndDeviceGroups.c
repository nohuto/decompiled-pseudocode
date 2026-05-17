/*
 * XREFs of ZwAdjustTokenClaimsAndDeviceGroups @ 0x180093FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAdjustTokenClaimsAndDeviceGroups()
{
  __int64 result; // rax

  result = 107LL;
  __asm { syscall; Low latency system call }
  return result;
}
