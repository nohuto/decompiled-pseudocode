/*
 * XREFs of NtUnloadKey2 @ 0x1800953B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUnloadKey2()
{
  __int64 result; // rax

  result = 427LL;
  __asm { syscall; Low latency system call }
  return result;
}
