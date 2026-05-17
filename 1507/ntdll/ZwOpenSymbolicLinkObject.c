/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x180094A80
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenSymbolicLinkObject()
{
  __int64 result; // rax

  result = 280LL;
  __asm { syscall; Low latency system call }
  return result;
}
