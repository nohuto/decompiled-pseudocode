/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x180094D40
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySymbolicLinkObject()
{
  __int64 result; // rax

  result = 324LL;
  __asm { syscall; Low latency system call }
  return result;
}
