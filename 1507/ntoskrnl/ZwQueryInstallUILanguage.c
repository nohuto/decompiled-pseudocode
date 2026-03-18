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
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId, v1, v2);
}
