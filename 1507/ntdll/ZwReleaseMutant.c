/*
 * XREFs of ZwReleaseMutant @ 0x180093B00
 * Callers:
 *     TppCallbackEpilog @ 0x18003A890 (TppCallbackEpilog.c)
 *     ResCReleaseInitMutex @ 0x1800F9070 (ResCReleaseInitMutex.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  NTSTATUS result; // eax

  result = 32;
  __asm { syscall; Low latency system call }
  return result;
}
