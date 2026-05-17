/*
 * XREFs of NtSetSecurityObject @ 0x1800951B0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18007FA84 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x18007FC70 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 NtSetSecurityObject()
{
  __int64 result; // rax

  result = 395LL;
  __asm { syscall; Low latency system call }
  return result;
}
