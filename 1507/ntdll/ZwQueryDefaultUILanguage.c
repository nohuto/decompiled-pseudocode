/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x180093D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  NTSTATUS result; // eax

  result = 68;
  __asm { syscall; Low latency system call }
  return result;
}
