/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1401816D0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1405917F8 (_RtlpMuiRegLoadInstalled.c)
 *     VfZwQueryInstallUILanguage @ 0x140757600 (VfZwQueryInstallUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
