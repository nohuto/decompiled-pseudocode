/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C003B4EA
 * Callers:
 *     mbtowc @ 0x1C003B414 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
