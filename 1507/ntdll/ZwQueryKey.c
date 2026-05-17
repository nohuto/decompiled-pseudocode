/*
 * XREFs of ZwQueryKey @ 0x180093A60
 * Callers:
 *     RtlpValidateKeyTrust @ 0x18000DFD8 (RtlpValidateKeyTrust.c)
 *     LdrpCodeAuthzInitialize @ 0x180070784 (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryKey()
{
  __int64 result; // rax

  result = 22LL;
  __asm { syscall; Low latency system call }
  return result;
}
