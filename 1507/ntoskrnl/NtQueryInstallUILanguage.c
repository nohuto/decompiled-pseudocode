/*
 * XREFs of NtQueryInstallUILanguage @ 0x14054D864
 * Callers:
 *     ExpSetCurrentUserUILanguage @ 0x14056C694 (ExpSetCurrentUserUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140591CE8 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140720A68 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInstallUILanguage(LANGID *LanguageId)
{
  LANGID *v1; // r9

  v1 = LanguageId;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)LanguageId >= MmUserProbeAddress )
      LanguageId = (LANGID *)MmUserProbeAddress;
    *LanguageId = *LanguageId;
  }
  *v1 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
  return 0;
}
