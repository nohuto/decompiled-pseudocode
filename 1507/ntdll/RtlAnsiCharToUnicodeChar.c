/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x180023A90
 * Callers:
 *     toupper @ 0x180089880 (toupper.c)
 *     _mbstrlen @ 0x18008CFB8 (_mbstrlen.c)
 *     mbtowc @ 0x18008DE98 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x18009053C (_safecrt_mbtowc.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180023B10 (RtlMultiByteToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v1; // r9
  WCHAR v3; // bx
  ULONG BytesInMultiByteString; // edi
  WCHAR result; // ax
  WCHAR UnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v1 = (const CHAR *)*SourceCharacter;
  v3 = 32;
  UnicodeString = 32;
  BytesInMultiByteString = (NlsLeadByteInfoTable[*(unsigned __int8 *)v1] != 0) + 1;
  if ( RtlMultiByteToUnicodeN(&UnicodeString, 2u, 0LL, v1, BytesInMultiByteString) >= 0 )
    v3 = UnicodeString;
  result = v3;
  *SourceCharacter += BytesInMultiByteString;
  return result;
}
