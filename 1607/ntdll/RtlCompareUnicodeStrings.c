/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1800195A0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C004 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     ApiSetpSearchForApiSetHost @ 0x1800154E8 (ApiSetpSearchForApiSetHost.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18001559C (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetpSearchForApiSet @ 0x180015D10 (ApiSetpSearchForApiSet.c)
 *     RtlpQueryEnvironmentCache @ 0x180019408 (RtlpQueryEnvironmentCache.c)
 *     RtlCompareUnicodeString @ 0x180019560 (RtlCompareUnicodeString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001B2D0 (RtlpFindUnicodeStringInSection.c)
 *     LdrpIsModuleUnderSystem32 @ 0x18002CB74 (LdrpIsModuleUnderSystem32.c)
 *     RtlFindUnicodeSubstring @ 0x18006E120 (RtlFindUnicodeSubstring.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1EC (LdrpQuerySxSMUIFile.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007F250 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2458 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsSubstringFound @ 0x1800D27F8 (LdrpIsSubstringFound.c)
 *     RtlpMatchUILanguage @ 0x1800EF4B4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800EF594 (RtlpMatchUserLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800F5ED4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800F64AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _ResCompareString @ 0x180103A6C (_ResCompareString.c)
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
  SIZE_T v5; // rax
  int v6; // edi
  int v7; // ebx
  const WCHAR *v8; // r10
  signed __int64 v9; // r11
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  signed __int64 v13; // r11
  int v14; // eax
  int v15; // edx

  v5 = String2Length;
  v6 = String2Length;
  if ( String1Length <= String2Length )
    v5 = String1Length;
  v7 = String1Length;
  v8 = &String1[v5];
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
          return String1Length - v6;
      }
      return v10 - v11;
    }
    return String1Length - v6;
  }
  if ( String1 >= v8 )
    return String1Length - v6;
  v13 = (char *)String2 - (char *)String1;
  while ( 1 )
  {
    v14 = *String1;
    v15 = *(PCWCH)((char *)String1 + v13);
    if ( v14 != v15 )
      break;
    if ( ++String1 >= v8 )
      return v7 - String2Length;
  }
  return v14 - v15;
}
