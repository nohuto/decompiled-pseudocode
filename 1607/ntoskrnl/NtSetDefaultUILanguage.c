/*
 * XREFs of NtSetDefaultUILanguage @ 0x14054939C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtSetDefaultUILanguage(LANGID LanguageId)
{
  if ( LanguageId )
    return ExpSetCurrentUserUILanguage(L"MUILanguagePending");
  else
    return ExpSetCurrentUserUILanguage(0LL);
}
