/*
 * XREFs of NtQuerySection @ 0x180093E10
 * Callers:
 *     PsspDumpObject_Section @ 0x180082D80 (PsspDumpObject_Section.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySection()
{
  __int64 result; // rax

  result = 81LL;
  __asm { syscall; Low latency system call }
  return result;
}
