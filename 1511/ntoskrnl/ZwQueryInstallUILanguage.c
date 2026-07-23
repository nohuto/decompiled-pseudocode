/*
 * XREFs of ZwQueryInstallUILanguage @ 0x140152D60
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140539304 (_RtlpMuiRegLoadInstalled.c)
 *     VfZwQueryInstallUILanguage @ 0x1406D3A38 (VfZwQueryInstallUILanguage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
