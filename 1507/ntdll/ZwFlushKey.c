/*
 * XREFs of ZwFlushKey @ 0x1800946A0
 * Callers:
 *     RtlApplyRXact @ 0x18007E210 (RtlApplyRXact.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushKey()
{
  __int64 result; // rax

  result = 218LL;
  __asm { syscall; Low latency system call }
  return result;
}
