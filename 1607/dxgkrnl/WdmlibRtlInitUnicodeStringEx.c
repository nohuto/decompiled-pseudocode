/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C000F72C
 * Callers:
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00ED548 (PpRegStateUpdateStackCreationSettings.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00ED8A4 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00EDA64 (CmRegUtilCreateWstrKey.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00EDCD0 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00EDE5C (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00EDEE4 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C0191C94 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  unsigned __int16 v3; // ax

  if ( !SourceString )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    DestinationString->Buffer = (wchar_t *)SourceString;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
    return 0;
  }
  return -1073741562;
}
