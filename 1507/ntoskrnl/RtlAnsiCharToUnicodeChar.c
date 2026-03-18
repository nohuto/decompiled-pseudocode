/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1404FEA80
 * Callers:
 *     toupper @ 0x140173A40 (toupper.c)
 *     _mbstrlen @ 0x140175B90 (_mbstrlen.c)
 *     _safecrt_mbtowc @ 0x140178894 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x1404FEAF0 (RtlMultiByteToUnicodeN.c)
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
