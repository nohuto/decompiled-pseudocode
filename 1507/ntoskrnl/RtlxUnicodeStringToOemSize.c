/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1406C7C6C
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400255E0 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404FF2E0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x14052844C (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140528508 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1405285F0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140528860 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1406C7B38 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406F61FC (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1406F6D78 (NtSetSystemEnvironmentValue.c)
 *     VerifierRtlxUnicodeStringToAnsiSize @ 0x140752FA8 (VerifierRtlxUnicodeStringToAnsiSize.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x14054E198 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
