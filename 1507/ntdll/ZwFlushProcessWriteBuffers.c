/*
 * XREFs of ZwFlushProcessWriteBuffers @ 0x1800946B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFlushProcessWriteBuffers()
{
  __int64 result; // rax

  result = 219LL;
  __asm { syscall; Low latency system call }
  return result;
}
