/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1403F55B0
 * Callers:
 *     _safecrt_mbtowc @ 0x14014E3C8 (_safecrt_mbtowc.c)
 *     toupper @ 0x14014F3AC (toupper.c)
 *     _mbstrlen @ 0x140151460 (_mbstrlen.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x1403F5620 (RtlMultiByteToUnicodeN.c)
 */

WCHAR __stdcall RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
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
