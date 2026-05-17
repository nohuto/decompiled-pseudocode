/*
 * XREFs of NtQueueApcThread @ 0x180093D50
 * Callers:
 *     RtlQueueApcWow64Thread @ 0x1800C6E00 (RtlQueueApcWow64Thread.c)
 * Callees:
 *     <none>
 */

__int64 NtQueueApcThread()
{
  __int64 result; // rax

  result = 69LL;
  __asm { syscall; Low latency system call }
  return result;
}
