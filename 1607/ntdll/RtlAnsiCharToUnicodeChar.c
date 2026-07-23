/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1800183C0
 * Callers:
 *     toupper @ 0x18009C3C0 (toupper.c)
 *     _mbstrlen @ 0x18009FB68 (_mbstrlen.c)
 *     mbtowc @ 0x1800A0A48 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x1800A30E8 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180018440 (RtlMultiByteToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v1; // r9
  WCHAR v3; // bx
  ULONG BytesInMultiByteString; // esi
  WCHAR UnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v1 = (const CHAR *)*SourceCharacter;
  v3 = 32;
  BytesInMultiByteString = 1;
  UnicodeString = 32;
  if ( NlsLeadByteInfoTable[*(unsigned __int8 *)v1] )
    BytesInMultiByteString = 2;
  if ( RtlMultiByteToUnicodeN(&UnicodeString, 2u, 0LL, v1, BytesInMultiByteString) >= 0 )
    v3 = UnicodeString;
  *SourceCharacter += BytesInMultiByteString;
  return v3;
}
