/*
 * XREFs of RtlxAnsiStringToUnicodeSize @ 0x14051B04C
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x1403E1384 (RtlAnsiStringToUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140680170 (AslStringAnsiToUnicode.c)
 *     VerifierRtlxAnsiStringToUnicodeSize @ 0x1406CF4D4 (VerifierRtlxAnsiStringToUnicodeSize.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14051B070 (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxAnsiStringToUnicodeSize(PCANSI_STRING AnsiString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, AnsiString->Buffer, AnsiString->Length);
  return BytesInUnicodeString + 2;
}
