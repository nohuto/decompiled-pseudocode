/*
 * XREFs of RtlLocaleNameToLcid @ 0x18001C1C0
 * Callers:
 *     RtlCultureNameToLCID @ 0x18001CFF0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1800700A0 (RtlLoadString.c)
 *     LdrpGetParentLangId @ 0x180082FF0 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18001C260 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18003ED7C (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800E5D94 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800E6104 (RtlpIsCustomLocale.c)
 *     RtlpMatchUILanguage @ 0x1800E61F4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800E62D4 (RtlpMatchUserLanguage.c)
 */

__int64 __fastcall RtlLocaleNameToLcid(PCWSTR SourceString, int *a2, int a3)
{
  char v3; // bp
  __int64 v6; // rdi
  int NameIndex; // eax

  v3 = a3;
  if ( !SourceString )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  v6 = pTblPtrs;
  if ( pTblPtrs )
  {
LABEL_5:
    NameIndex = RtlpNlsGetNameIndex(SourceString);
    if ( NameIndex >= 0 )
    {
      if ( (v3 & 2) != 0
        || (*(_BYTE *)(*(unsigned __int16 *)(v6 + 56)
                     * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v6 + 32) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(v6 + 16)
                     + 24) & 1) != 0 )
      {
        *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 32) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
        return 0LL;
      }
      return 3221225711LL;
    }
    if ( (unsigned __int8)RtlpIsCustomLocale(SourceString) )
    {
      if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(SourceString) )
      {
        *a2 = 5120;
        return 0LL;
      }
      if ( (unsigned __int8)RtlpMatchUserLanguage(SourceString) )
      {
        *a2 = 3072;
        return 0LL;
      }
      if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(SourceString, 0LL, 0LL, 0LL) >= 0 )
      {
        *a2 = 4096;
        return 0LL;
      }
      return 3221225473LL;
    }
    return 3221225711LL;
  }
  if ( (unsigned __int8)RtlpLoadNlsData() )
  {
    v6 = pTblPtrs;
    goto LABEL_5;
  }
  return 3221225473LL;
}
