/*
 * XREFs of EngMultiByteToUnicodeN @ 0x1C00825A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EngMultiByteToUnicodeN(
        LPWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCHAR MultiByteString,
        ULONG BytesInMultiByteString)
{
  RtlMultiByteToUnicodeN(
    UnicodeString,
    MaxBytesInUnicodeString,
    BytesInUnicodeString,
    MultiByteString,
    BytesInMultiByteString);
}
