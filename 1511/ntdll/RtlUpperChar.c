/*
 * XREFs of RtlUpperChar @ 0x180072780
 * Callers:
 *     RtlPrefixString @ 0x180072650 (RtlPrefixString.c)
 *     RtlEqualString @ 0x1800726E0 (RtlEqualString.c)
 *     RtlCompareString @ 0x1800884E0 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800DAA80 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  CHAR result; // al
  unsigned __int16 v2; // r9
  unsigned __int16 v3; // r10

  if ( Character <= 122 )
  {
    if ( Character >= 97 )
      return Character ^ 0x20;
    return Character;
  }
  if ( NlsMbCodePageTag )
  {
    if ( NlsLeadByteInfoTable[Character] )
      return Character;
    v3 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * (unsigned __int8)Character);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)(Nls844UnicodeUpcaseTable
                       + 2LL
                       * ((v3 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                            + 2LL
                                                            * (((v3 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v3 >> 8))))));
      else
        v3 -= 32;
    }
    result = *(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * v3);
    if ( HIBYTE(*(_WORD *)(NlsUnicodeToMbAnsiData + 2LL * v3)) )
      return Character;
  }
  else
  {
    v2 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * (unsigned __int8)Character);
    if ( v2 >= 0x61u )
    {
      if ( v2 <= 0x7Au )
        v2 -= 32;
      else
        v2 += *(_WORD *)(Nls844UnicodeUpcaseTable
                       + 2LL
                       * ((v2 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                            + 2LL
                                                            * (((v2 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v2 >> 8))))));
    }
    return *(_BYTE *)(v2 + NlsUnicodeToAnsiData);
  }
  return result;
}
