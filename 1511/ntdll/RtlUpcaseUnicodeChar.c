/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180010AD0
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x1800107E8 (RtlpComputeLangListCheckSum.c)
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     RtlpHashStringToAtom @ 0x180043E60 (RtlpHashStringToAtom.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x18008C6EC (HashStringToDwordCaseInsensitiveLen.c)
 *     towupper @ 0x18009B0D0 (towupper.c)
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
