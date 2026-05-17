/*
 * XREFs of NtTranslateFilePath @ 0x180095370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtTranslateFilePath()
{
  __int64 result; // rax

  result = 423LL;
  __asm { syscall; Low latency system call }
  return result;
}
