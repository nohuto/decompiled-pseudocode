/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14015C990
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140560DC8 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
