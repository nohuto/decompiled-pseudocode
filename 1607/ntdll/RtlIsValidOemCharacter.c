/*
 * XREFs of RtlIsValidOemCharacter @ 0x1800EED4C
 * Callers:
 *     GetNextWchar @ 0x1800EE584 (GetNextWchar.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlIsValidOemCharacter(unsigned __int16 *a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r9
  __int16 v4; // cx
  __int16 v5; // dx
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = *a1;
  if ( NlsMbOemCodePageTag )
  {
    v5 = *(_WORD *)(NlsUnicodeToMbOemData + 2 * v2);
    if ( NlsOemLeadByteInfoTable[HIBYTE(v5)] )
    {
      v6 = NlsMbOemCodePageTables;
      v7 = (unsigned __int8)v5 + (unsigned __int16)NlsOemLeadByteInfoTable[HIBYTE(v5)];
    }
    else
    {
      v6 = NlsOemToUnicodeData;
      v7 = (unsigned __int8)v5;
    }
    v3 = *(_WORD *)(v6 + 2 * v7);
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
    v4 = *(_WORD *)(NlsUnicodeToMbOemData + 2LL * v3);
  }
  else
  {
    v3 = *(_WORD *)(NlsOemToUnicodeData + 2LL * *(unsigned __int8 *)(v2 + NlsUnicodeToOemData));
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
    v4 = *(char *)(v3 + NlsUnicodeToOemData);
  }
  if ( v4 == OemDefaultChar )
    return 0;
  *a1 = v3;
  return 1;
}
