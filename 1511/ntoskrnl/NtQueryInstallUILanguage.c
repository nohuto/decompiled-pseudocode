/*
 * XREFs of NtQueryInstallUILanguage @ 0x1404B58EC
 * Callers:
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405397F4 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406A084C (_RtlpMuiRegPopulateBaseLanguages.c)
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
