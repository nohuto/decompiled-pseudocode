/*
 * XREFs of RtlIsValidLocaleName @ 0x1800E5C40
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x18003D860 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18003DF80 (RtlGetUserPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800DCE2C (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18001C260 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18003ED7C (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800E5D94 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800E6104 (RtlpIsCustomLocale.c)
 */

BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  char v2; // si
  __int64 v4; // rbx
  int NameIndex; // eax

  v2 = Flags;
  if ( !LocaleName || (Flags & 0xFFFFFFFD) != 0 )
    return 0;
  v4 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !RtlpLoadNlsData() )
      return 0;
    v4 = pTblPtrs;
  }
  NameIndex = RtlpNlsGetNameIndex((unsigned __int16 *)LocaleName);
  if ( NameIndex < 0 )
  {
    if ( (unsigned __int8)RtlpIsCustomLocale(LocaleName)
      && ((v2 & 2) != 0 || (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) >= 0) )
    {
      return 1;
    }
  }
  else if ( (v2 & 2) != 0
         || (*(_BYTE *)(*(unsigned __int16 *)(v4 + 56)
                      * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v4 + 32) + 8LL * NameIndex + 2)
                      + *(_QWORD *)(v4 + 16)
                      + 24) & 1) != 0 )
  {
    return 1;
  }
  return 0;
}
