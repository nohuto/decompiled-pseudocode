/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x140150EA0
 * Callers:
 *     VfZwQueryDefaultUILanguage @ 0x1406D3330 (VfZwQueryDefaultUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDefaultUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
