/*
 * XREFs of RtlCompareUnicodeStrings @ 0x18002F010
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180005924 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180011A58 (LdrpSnapKernelBaseExtensions.c)
 *     ApiSetpSearchForApiSetHost @ 0x180011C78 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x1800126A0 (ApiSetpSearchForApiSet.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001653C (RtlpFindUnicodeStringInSection.c)
 *     RtlpQueryEnvironmentCache @ 0x18002EE74 (RtlpQueryEnvironmentCache.c)
 *     RtlCompareUnicodeString @ 0x18002EFD0 (RtlCompareUnicodeString.c)
 *     LdrpQuerySxSMUIFile @ 0x18003CFD0 (LdrpQuerySxSMUIFile.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007D064 (RtlpProcessIFEOKeyFilter.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800CADEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsSubstringFound @ 0x1800CB0A4 (LdrpIsSubstringFound.c)
 *     RtlFindUnicodeSubstring @ 0x1800DA540 (RtlFindUnicodeSubstring.c)
 *     RtlpMatchUILanguage @ 0x1800E61F4 (RtlpMatchUILanguage.c)
 *     RtlpMatchUserLanguage @ 0x1800E62D4 (RtlpMatchUserLanguage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800ED160 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800ED74C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _ResCompareString @ 0x1800F9198 (_ResCompareString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareUnicodeStrings(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v5; // rax
  int v6; // edi
  int v7; // ebx
  unsigned __int16 *v8; // r10
  __int64 v9; // r11
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  __int64 v13; // r11
  int v14; // eax
  int v15; // edx

  v5 = a4;
  v6 = a4;
  if ( a2 <= a4 )
    v5 = a2;
  v7 = a2;
  v8 = &a1[v5];
  if ( a5 )
  {
    if ( a1 < v8 )
    {
      v9 = a3 - (_QWORD)a1;
      while ( 1 )
      {
        v10 = *a1;
        v11 = *(unsigned __int16 *)((char *)a1 + v9);
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
        if ( ++a1 >= v8 )
          return (unsigned int)(a2 - v6);
      }
      return v10 - v11;
    }
    return (unsigned int)(a2 - v6);
  }
  if ( a1 >= v8 )
    return (unsigned int)(a2 - v6);
  v13 = a3 - (_QWORD)a1;
  while ( 1 )
  {
    v14 = *a1;
    v15 = *(unsigned __int16 *)((char *)a1 + v13);
    if ( v14 != v15 )
      break;
    if ( ++a1 >= v8 )
      return (unsigned int)(v7 - a4);
  }
  return (unsigned int)(v14 - v15);
}
