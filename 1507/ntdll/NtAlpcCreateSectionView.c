/*
 * XREFs of NtAlpcCreateSectionView @ 0x1800940A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAlpcCreateSectionView()
{
  __int64 result; // rax

  result = 122LL;
  __asm { syscall; Low latency system call }
  return result;
}
