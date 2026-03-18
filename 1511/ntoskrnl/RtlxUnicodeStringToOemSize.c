/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x140644BE0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x1400027D4 (DbgUnicodeStringToAnsiString.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToOemString @ 0x14049DCF8 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x14049DDB4 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14049DE9C (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14049E0F0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140644AAC (RtlUpcaseUnicodeStringToAnsiString.c)
 *     NtQuerySystemEnvironmentValue @ 0x140672028 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x140672934 (NtSetSystemEnvironmentValue.c)
 *     VerifierRtlxUnicodeStringToAnsiSize @ 0x1406CF4DC (VerifierRtlxUnicodeStringToAnsiSize.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1404B9EE4 (RtlUnicodeToMultiByteSize.c)
 */

ULONG __stdcall RtlxUnicodeStringToOemSize(PCUNICODE_STRING UnicodeString)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString->Buffer, UnicodeString->Length);
  return BytesInMultiByteString + 1;
}
