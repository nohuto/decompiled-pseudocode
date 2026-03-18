/*
 * XREFs of NtSetDefaultUILanguage @ 0x140548E5C
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
