/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C0031A5E
 * Callers:
 *     mbtowc @ 0x1C0031978 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
