/*
 * XREFs of EngUnicodeToMultiByteN @ 0x1C00CAE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EngUnicodeToMultiByteN(
        PCHAR pchMultiByteString,
        ULONG cjMultiByteBuf,
        PULONG pcjMultiByteString,
        PWSTR pwszUnicodeString,
        ULONG cjUnicodeString)
{
  RtlUnicodeToMultiByteN(pchMultiByteString, cjMultiByteBuf, pcjMultiByteString, pwszUnicodeString, cjUnicodeString);
}
