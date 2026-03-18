/*
 * XREFs of NtQueryDefaultUILanguage @ 0x14050DA48
 * Callers:
 *     <none>
 * Callees:
 *     ExpGetCurrentUserUILanguage @ 0x14050DAB0 (ExpGetCurrentUserUILanguage.c)
 */

NTSTATUS __stdcall NtQueryDefaultUILanguage(LANGID *LanguageId)
{
  LANGID *v1; // rdi

  v1 = LanguageId;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)LanguageId >= MmUserProbeAddress )
      LanguageId = (LANGID *)MmUserProbeAddress;
    *LanguageId = *LanguageId;
  }
  if ( (int)ExpGetCurrentUserUILanguage(LanguageId, v1) < 0 )
    *v1 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
  return 0;
}
