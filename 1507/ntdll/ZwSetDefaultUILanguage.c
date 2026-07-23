/*
 * XREFs of ZwSetDefaultUILanguage @ 0x180095030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDefaultUILanguage(LANGID DefaultUILanguageId)
{
  NTSTATUS result; // eax

  result = 371;
  __asm { syscall; Low latency system call }
  return result;
}
