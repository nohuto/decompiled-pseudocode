/*
 * XREFs of NtRegisterProtocolAddressInformation @ 0x180094E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtRegisterProtocolAddressInformation()
{
  __int64 result; // rax

  result = 338LL;
  __asm { syscall; Low latency system call }
  return result;
}
