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

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
    return SourceCharacter
         + *(_WORD *)(Nls844UnicodeUpcaseTable
                    + 2LL
                    * ((SourceCharacter & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (((SourceCharacter >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2
                                                                                              * ((unsigned __int64)SourceCharacter >> 8))))));
  return SourceCharacter - 32;
}
