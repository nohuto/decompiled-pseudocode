/*
 * XREFs of NtQueryDefaultUILanguage @ 0x1405498FC
 * Callers:
 *     <none>
 * Callees:
 *     ExpGetCurrentUserUILanguage @ 0x140549964 (ExpGetCurrentUserUILanguage.c)
 */

NTSTATUS __stdcall NtQueryDefaultUILanguage(LANGID *LanguageId)
{
  LANGID *v1; // rdi

  v1 = LanguageId;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)LanguageId >= 0x7FFFFFFF0000LL )
      LanguageId = (LANGID *)0x7FFFFFFF0000LL;
    *LanguageId = *LanguageId;
  }
  if ( (int)ExpGetCurrentUserUILanguage(LanguageId, v1) < 0 )
    *v1 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
  return 0;
}
