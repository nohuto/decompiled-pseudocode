/*
 * XREFs of ZwReleaseMutant @ 0x180093B00
 * Callers:
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     ResCReleaseInitMutex @ 0x1800F9070 (ResCReleaseInitMutex.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseMutant()
{
  __int64 result; // rax

  result = 32LL;
  __asm { syscall; Low latency system call }
  return result;
}
