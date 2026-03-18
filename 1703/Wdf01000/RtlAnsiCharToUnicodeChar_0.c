/*
 * XREFs of RtlAnsiCharToUnicodeChar_0 @ 0x1C003EF6C
 * Callers:
 *     mbtowc @ 0x1C003EE80 (mbtowc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
WCHAR __stdcall RtlAnsiCharToUnicodeChar_0(PUCHAR *SourceCharacter)
{
  return RtlAnsiCharToUnicodeChar(SourceCharacter);
}
