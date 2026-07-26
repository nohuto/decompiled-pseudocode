/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C0073CD8
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00E4178 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00E4328 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00E446C (PpRegStateUpdateStackCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00E4650 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00E46F8 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00E49D4 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00E49FC (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall WdmlibRtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
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
      return -1073741562;
    v4 = 2 * v2;
    DestinationString->Buffer = (wchar_t *)SourceString;
    DestinationString->Length = v4;
    DestinationString->MaximumLength = v4 + 2;
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
  }
  return 0;
}
