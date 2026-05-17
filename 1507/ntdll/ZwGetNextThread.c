/*
 * XREFs of ZwGetNextThread @ 0x180094790
 * Callers:
 *     PsspCaptureThreadInformation @ 0x180082EEC (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNextThread()
{
  __int64 result; // rax

  result = 233LL;
  __asm { syscall; Low latency system call }
  return result;
}
