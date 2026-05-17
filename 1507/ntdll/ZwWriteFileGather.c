/*
 * XREFs of ZwWriteFileGather @ 0x180093AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwWriteFileGather()
{
  __int64 result; // rax

  result = 27LL;
  __asm { syscall; Low latency system call }
  return result;
}
