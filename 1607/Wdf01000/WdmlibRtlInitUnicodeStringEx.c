/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C009CE04
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00CCCBC (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00CCE6C (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00CCFB0 (PpRegStateUpdateStackCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00CD194 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00CD23C (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00CD518 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00CD540 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdmlibRtlInitUnicodeStringEx(_UNICODE_STRING *DestinationString, wchar_t *SourceString)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v4; // ax

  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 > 0x7FFE )
      return 3221225734LL;
    v4 = 2 * v2;
    DestinationString->Buffer = SourceString;
    DestinationString->Length = v4;
    DestinationString->MaximumLength = v4 + 2;
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
  }
  return 0LL;
}
