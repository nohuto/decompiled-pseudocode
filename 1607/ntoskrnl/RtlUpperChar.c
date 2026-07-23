/*
 * XREFs of RtlUpperChar @ 0x1404A7B3C
 * Callers:
 *     RtlEqualString @ 0x140096E20 (RtlEqualString.c)
 *     RtlPrefixString @ 0x1404A79A0 (RtlPrefixString.c)
 *     RtlCompareString @ 0x1404A7A40 (RtlCompareString.c)
 *     RtlUpperString @ 0x1404A7AE8 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
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
  if ( (_BYTE)NlsMbCodePageTag )
  {
    if ( NlsLeadByteInfoTable[Character] )
      return Character;
    v3 = *(_WORD *)(NlsAnsiToUnicodeData + 2LL * (unsigned __int8)Character);
    if ( v3 >= 0x61u )
    {
      if ( v3 > 0x7Au )
        v3 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v3 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v3 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v3 >> 8)]]];
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
      if ( v2 > 0x7Au )
        v2 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v2 & 0xF)
                                                                      + 2
                                                                      * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((v2 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int64)v2 >> 8)]]];
      else
        v2 -= 32;
    }
    return *(_BYTE *)(v2 + NlsUnicodeToAnsiData);
  }
  return result;
}
