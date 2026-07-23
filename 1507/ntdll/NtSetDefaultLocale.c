/*
 * XREFs of NtSetDefaultLocale @ 0x180095020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  NTSTATUS result; // eax

  result = 370;
  __asm { syscall; Low latency system call }
  return result;
}
