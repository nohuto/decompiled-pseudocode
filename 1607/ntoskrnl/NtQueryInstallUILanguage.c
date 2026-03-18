/*
 * XREFs of NtQueryInstallUILanguage @ 0x1404DE580
 * Callers:
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140560D70 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406E7C88 (_RtlpMuiRegPopulateBaseLanguages.c)
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
