/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x140685814
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400B1090 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F7370 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x1404BBE2C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1404BBEE8 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1404BBFD0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1404BC224 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     ObCreateObjectTypeEx @ 0x140552054 (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406856E0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4D28 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1406B5644 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1404E1658 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
