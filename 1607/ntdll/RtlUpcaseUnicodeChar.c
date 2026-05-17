/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180011C40
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x180011954 (RtlpComputeLangListCheckSum.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 *     RtlpHashStringToAtom @ 0x180068060 (RtlpHashStringToAtom.c)
 *     towupper @ 0x18009C470 (towupper.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x1800D906C (HashStringToDwordCaseInsensitiveLen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeChar(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 > 0x7Au )
    return (unsigned __int16)(a1
                            + *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2LL
                                       * ((a1 & 0xF)
                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                            + 2LL
                                                                            * (((a1 >> 4) & 0xF)
                                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)a1 >> 8)))))));
  return (unsigned int)a1 - 32;
}
