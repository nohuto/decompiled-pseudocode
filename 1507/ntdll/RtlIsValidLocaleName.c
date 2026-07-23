/*
 * XREFs of RtlIsValidLocaleName @ 0x1800E04F0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18006C270 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18006CFE0 (RtlGetUserPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800D4F0C (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18001F7B0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x180048DB4 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800E0640 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800E09B0 (RtlpIsCustomLocale.c)
 */

BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  char v2; // di
  int NameIndex; // eax

  v2 = Flags;
  if ( LocaleName && (Flags & 0xFFFFFFFD) == 0 && (pTblPtrs || RtlpLoadNlsData()) )
  {
    NameIndex = RtlpNlsGetNameIndex((unsigned __int16 *)LocaleName);
    if ( NameIndex < 0 )
    {
      if ( (unsigned __int8)RtlpIsCustomLocale(LocaleName)
        && ((v2 & 2) != 0 || (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) >= 0) )
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
                     * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(pTblPtrs + 16)
                     + 24) & 1) != 0 )
        return 1;
    }
  }
  return 0;
}
