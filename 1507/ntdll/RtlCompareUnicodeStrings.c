/*
 * XREFs of RtlCompareUnicodeStrings @ 0x180035820
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x1800205B8 (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetpSearchForApiSetHost @ 0x180020A10 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetResolveToHost @ 0x180021380 (ApiSetResolveToHost.c)
 *     RtlpFindUnicodeStringInSection @ 0x1800256D0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpQueryEnvironmentCache @ 0x180035688 (RtlpQueryEnvironmentCache.c)
 *     RtlCompareUnicodeString @ 0x1800357E0 (RtlCompareUnicodeString.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180043B40 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpQuerySxSMUIFile @ 0x18006E354 (LdrpQuerySxSMUIFile.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180071394 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800BE14C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsSubstringFound @ 0x1800C08D8 (LdrpIsSubstringFound.c)
 *     RtlFindUnicodeSubstring @ 0x1800D2020 (RtlFindUnicodeSubstring.c)
 *     RtlpMatchUILanguage @ 0x1800E0AA0 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800E0B80 (RtlpMatchUserLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800E8E90 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800E947C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _ResCompareString @ 0x1800F9880 (_ResCompareString.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // edi
  int v6; // ebx
  SIZE_T v7; // rax
  const WCHAR *v8; // r10
  signed __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  signed __int64 v13; // r11
  int v14; // eax
  int v15; // edx

  v5 = String2Length;
  v6 = String1Length;
  if ( String1Length > String2Length )
    v7 = String2Length;
  else
    v7 = String1Length;
  v8 = &String1[v7];
  if ( CaseInSensitive )
  {
    if ( String1 < v8 )
    {
      v9 = (char *)String2 - (char *)String1;
      while ( 1 )
      {
        v10 = *String1;
        v11 = *(PCWCH)((char *)String1 + v9);
        if ( v10 != v11 )
        {
          if ( v10 >= 0x61 )
          {
            if ( v10 > 0x7A )
              v10 = (unsigned __int16)(v10
                                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * ((v10 & 0xF)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                       + 2LL
                                                                       * (((unsigned __int8)v10 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v10)))))));
            else
              v10 -= 32;
          }
          if ( v11 >= 0x61 )
          {
            if ( v11 > 0x7A )
              v11 = (unsigned __int16)(v11
                                     + *(_WORD *)(Nls844UnicodeUpcaseTable
                                                + 2LL
                                                * ((v11 & 0xF)
                                                 + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                       + 2LL
                                                                       * (((unsigned __int8)v11 >> 4)
                                                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2LL * BYTE1(v11)))))));
            else
              v11 -= 32;
          }
          if ( v10 != v11 )
            break;
        }
        if ( ++String1 >= v8 )
          return String1Length - v5;
      }
      return v10 - v11;
    }
    return String1Length - v5;
  }
  if ( String1 >= v8 )
    return String1Length - v5;
  v13 = (char *)String2 - (char *)String1;
  while ( 1 )
  {
    v14 = *String1;
    v15 = *(PCWCH)((char *)String1 + v13);
    if ( v14 != v15 )
      break;
    if ( ++String1 >= v8 )
      return v6 - String2Length;
  }
  return v14 - v15;
}
