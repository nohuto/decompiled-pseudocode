/*
 * XREFs of LdrpBuildSystem32FileName @ 0x180018C08
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180015A34 (LdrpApplyFileNameRedirection.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D20E0 (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180018C78 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 */

__int64 __fastcall LdrpBuildSystem32FileName(_WORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)0x7FFE0030);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &DestinationString);
  LdrpAppendUnicodeStringToFilenameBuffer(a1, &SlashSystem32SlashString);
  if ( a2 )
    return (unsigned int)LdrpAppendUnicodeStringToFilenameBuffer(a1, a2);
  return v4;
}
