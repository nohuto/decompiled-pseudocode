/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1406857F0
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     RtlOemStringToUnicodeString @ 0x1405499E8 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140685480 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14054C98C (RtlMultiByteToUnicodeSize.c)
 */

ULONG __stdcall RtlxOemStringToUnicodeSize(PCOEM_STRING OemString)
{
  ULONG BytesInUnicodeString; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, OemString->Buffer, OemString->Length);
  return BytesInUnicodeString + 2;
}
