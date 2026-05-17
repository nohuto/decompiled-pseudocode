/*
 * XREFs of ZwOpenDirectoryObject @ 0x180093E80
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 *     BaseGetNamedObjectDirectory @ 0x1800F8BA8 (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

__int64 ZwOpenDirectoryObject()
{
  __int64 result; // rax

  result = 88LL;
  __asm { syscall; Low latency system call }
  return result;
}
