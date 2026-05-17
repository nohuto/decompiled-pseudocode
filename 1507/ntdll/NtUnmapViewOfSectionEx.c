/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1800953F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUnmapViewOfSectionEx()
{
  __int64 result; // rax

  result = 431LL;
  __asm { syscall; Low latency system call }
  return result;
}
