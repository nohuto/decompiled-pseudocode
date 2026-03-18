/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1406C7C48
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404FE988 (RtlAnsiStringToUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x14054E47C (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1406C78D8 (RtlOemStringToCountedUnicodeString.c)
 *     AslStringAnsiToUnicode @ 0x140704FA4 (AslStringAnsiToUnicode.c)
 *     VerifierRtlxAnsiStringToUnicodeSize @ 0x140752FA0 (VerifierRtlxAnsiStringToUnicodeSize.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x1406C8D4C (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, OemString->Buffer, OemString->Length);
  return BytesInUnicodeString + 2;
}
