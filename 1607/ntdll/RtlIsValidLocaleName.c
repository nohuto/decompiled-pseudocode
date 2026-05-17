/*
 * XREFs of RtlIsValidLocaleName @ 0x1800EEF00
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180079C00 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007B0E0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800E6058 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180040E50 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800806AC (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800EF054 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
 */

char __fastcall RtlIsValidLocaleName(unsigned __int16 *SourceString, int a2)
{
  char v2; // di
  int NameIndex; // eax

  v2 = a2;
  if ( SourceString && (a2 & 0xFFFFFFFD) == 0 && (pTblPtrs || RtlpLoadNlsData()) )
  {
    NameIndex = RtlpNlsGetNameIndex(SourceString);
    if ( NameIndex < 0 )
    {
      if ( (unsigned __int8)RtlpIsCustomLocale(SourceString)
        && ((v2 & 2) != 0 || (int)RtlpGetCustomCultureData(SourceString, 0LL, 0LL, 0LL) >= 0) )
      {
        return 1;
      }
    }
    else
    {
      if ( (v2 & 2) != 0 )
        return 1;
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                     * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(pTblPtrs + 16)
                     + 24LL) & 1) != 0 )
        return 1;
    }
  }
  return 0;
}
