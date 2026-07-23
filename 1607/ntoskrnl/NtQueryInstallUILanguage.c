/*
 * XREFs of NtQueryInstallUILanguage @ 0x1404C1B84
 * Callers:
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405612B0 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406E7DC0 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInstallUILanguage(LANGID *LanguageId)
{
  LANGID *v1; // r9

  v1 = LanguageId;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)LanguageId >= 0x7FFFFFFF0000LL )
      LanguageId = (LANGID *)0x7FFFFFFF0000LL;
    *LanguageId = *LanguageId;
  }
  *v1 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
  return 0;
}
