/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1404DA390
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x1401587F0 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x1402682D0 (ApiSetpSearchForApiSetHost.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404D93C4 (PnpCheckDeviceIdsChanged.c)
 *     PtFuncCompare @ 0x1404DA31C (PtFuncCompare.c)
 *     EtwpExpandFileName @ 0x14055903C (EtwpExpandFileName.c)
 *     PnpCompareMultiSz @ 0x14067E0B8 (PnpCompareMultiSz.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     RtlFindUnicodeSubstring @ 0x1406C783C (RtlFindUnicodeSubstring.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1407207CC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140720A68 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // ebx
  int v7; // r11d
  const WCHAR *v8; // r10
  signed __int64 v10; // r8
  int v11; // eax
  int v12; // edx
  signed __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // edi

  v5 = String2Length;
  v6 = String2Length;
  v7 = String1Length;
  if ( String1Length <= String2Length )
    v5 = String1Length;
  v8 = &String1[v5];
  if ( CaseInSensitive )
  {
    if ( String1 >= v8 )
      return v7 - v6;
    v13 = (char *)String2 - (char *)String1;
    while ( 1 )
    {
      v14 = *String1;
      v15 = *(PCWCH)((char *)String1 + v13);
      if ( v14 != v15 )
      {
        if ( v14 >= 0x61 )
        {
          if ( v14 > 0x7A )
            v14 = (unsigned __int16)(v14
                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v14 & 0xF)
                                                                                             + 2
                                                                                             * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v14 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v14)]]]);
          else
            v14 -= 32;
        }
        if ( v15 >= 0x61 )
        {
          if ( v15 > 0x7A )
            v15 = (unsigned __int16)(v15
                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v15 & 0xF)
                                                                                             + 2
                                                                                             * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v15 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v15)]]]);
          else
            v15 -= 32;
        }
        if ( v14 != v15 )
          break;
      }
      if ( ++String1 >= v8 )
        return v7 - v6;
    }
    return v14 - v15;
  }
  else
  {
    if ( String1 >= v8 )
      return v7 - v6;
    v10 = (char *)String2 - (char *)String1;
    while ( 1 )
    {
      v11 = *String1;
      v12 = *(PCWCH)((char *)String1 + v10);
      if ( v11 != v12 )
        break;
      if ( ++String1 >= v8 )
        return v7 - v6;
    }
    return v11 - v12;
  }
}
