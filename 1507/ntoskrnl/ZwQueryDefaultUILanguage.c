/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x14017F870
 * Callers:
 *     VfZwQueryDefaultUILanguage @ 0x140756EF8 (VfZwQueryDefaultUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDefaultUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
