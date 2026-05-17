/*
 * XREFs of ZwAlpcDeleteSectionView @ 0x1800940E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlpcDeleteSectionView()
{
  __int64 result; // rax

  result = 126LL;
  __asm { syscall; Low latency system call }
  return result;
}
