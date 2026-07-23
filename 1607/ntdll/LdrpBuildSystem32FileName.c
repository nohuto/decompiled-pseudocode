/*
 * XREFs of LdrpBuildSystem32FileName @ 0x180018BF8
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180015A24 (LdrpApplyFileNameRedirection.c)
 *     LdrpCorInitialize @ 0x1800863E0 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D21A0 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C68 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlInitUnicodeString @ 0x180044140 (RtlInitUnicodeString.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(_WORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)0x7FFE0030);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &DestinationString);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &SlashSystem32SlashString);
  if ( a2 )
    return (unsigned int)LdrpAppendUnicodeStringToFilenameBuffer(a1, a2);
  return v4;
}
