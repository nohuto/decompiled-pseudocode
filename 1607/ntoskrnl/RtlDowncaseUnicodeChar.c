/*
 * XREFs of RtlDowncaseUnicodeChar @ 0x14068550C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlDowncaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x41u )
    return SourceCharacter;
  if ( SourceCharacter > 0x5Au )
    return SourceCharacter
         + *(_WORD *)(Nls844UnicodeLowercaseTable
                    + 2LL
                    * ((SourceCharacter & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                         + 2LL
                                                         * (((SourceCharacter >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeLowercaseTable
                                                                                              + 2
                                                                                              * ((unsigned __int64)SourceCharacter >> 8))))));
  return SourceCharacter + 32;
}
