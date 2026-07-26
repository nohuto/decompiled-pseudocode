/*
 * XREFs of WdmlibRtlInitUnicodeStringEx @ 0x1C006EE28
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00DE2C8 (PiRegStateReadStackCreationSettingsFromKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00DE478 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00DE5BC (PpRegStateUpdateStackCreationSettings.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00DE880 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00DE928 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C00DEC04 (CmRegUtilWstrValueGetDword.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00DEC2C (CmRegUtilWstrValueSetWstrString.c)
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
