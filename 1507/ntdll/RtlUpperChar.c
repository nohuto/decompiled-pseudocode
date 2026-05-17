/*
 * XREFs of RtlUpperChar @ 0x180065330
 * Callers:
 *     RtlPrefixString @ 0x180065200 (RtlPrefixString.c)
 *     RtlEqualString @ 0x180065290 (RtlEqualString.c)
 *     RtlCompareString @ 0x18007FE40 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800D25C0 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlUpperChar(char a1)
{
  char result; // al
  unsigned __int16 v2; // r9
  unsigned __int16 v3; // r10

  if ( a1 <= 122 )
  {
    if ( a1 >= 97 )
      return a1 ^ 0x20;
    return a1;
  }
  if ( NlsMbCodePageTag )
  {
    if ( NlsLeadByteInfoTable[a1] )
      return a1;
    v3 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * (unsigned __int8)a1);
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
      return a1;
  }
  else
  {
    v2 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * (unsigned __int8)a1);
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
