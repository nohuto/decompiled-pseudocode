/*
 * XREFs of RtlLocaleNameToLcid @ 0x180040DA0
 * Callers:
 *     RtlLoadString @ 0x18002DC00 (RtlLoadString.c)
 *     RtlCultureNameToLCID @ 0x180043F60 (RtlCultureNameToLCID.c)
 *     LdrpGetParentLangId @ 0x1800885C8 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180040E40 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18008069C (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800EF054 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800EF3C4 (RtlpIsCustomLocale.c)
 *     RtlpMatchUILanguage @ 0x1800EF4B4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800EF594 (RtlpMatchUserLanguage.c)
 */

NTSTATUS __cdecl RtlLocaleNameToLcid(PCWSTR LocaleName, PLCID lcid, ULONG Flags)
{
  char v3; // bp
  __int64 v6; // rdi
  int NameIndex; // eax

  v3 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !lcid )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v6 = pTblPtrs;
  if ( pTblPtrs )
  {
LABEL_5:
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
    if ( NameIndex >= 0 )
    {
      if ( (v3 & 2) != 0
        || (_mm_lfence(),
            v6 = pTblPtrs,
            (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                      * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                      + *(_QWORD *)(pTblPtrs + 16)
                      + 24LL) & 1) != 0) )
      {
        *lcid = *(_DWORD *)(*(_QWORD *)(v6 + 32) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
        return 0;
      }
      return -1073741585;
    }
    if ( (unsigned __int8)RtlpIsCustomLocale(LocaleName) )
    {
      if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(LocaleName) )
      {
        *lcid = 5120;
        return 0;
      }
      if ( (unsigned __int8)RtlpMatchUserLanguage(LocaleName) )
      {
        *lcid = 3072;
        return 0;
      }
      if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) >= 0 )
      {
        *lcid = 4096;
        return 0;
      }
      return -1073741823;
    }
    return -1073741585;
  }
  if ( (unsigned __int8)RtlpLoadNlsData() )
  {
    v6 = pTblPtrs;
    goto LABEL_5;
  }
  return -1073741823;
}
