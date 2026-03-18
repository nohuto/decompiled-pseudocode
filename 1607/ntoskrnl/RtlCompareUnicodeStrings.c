/*
 * XREFs of RtlCompareUnicodeStrings @ 0x140489820
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x14012E5A8 (ApiSetpSearchForApiSet.c)
 *     ApiSetpSearchForApiSetHost @ 0x140231DA8 (ApiSetpSearchForApiSetHost.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     PnpCheckDeviceIdsChanged @ 0x140489604 (PnpCheckDeviceIdsChanged.c)
 *     EtwpExpandFileName @ 0x1404EE8AC (EtwpExpandFileName.c)
 *     PnpCompareMultiSz @ 0x14062D5E4 (PnpCompareMultiSz.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1406E79F0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406E7C88 (_RtlpMuiRegPopulateBaseLanguages.c)
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
  unsigned int v11; // r9d
  unsigned int v12; // edi
  signed __int64 v13; // r8
  int v14; // eax
  int v15; // edx

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
    v10 = (char *)String2 - (char *)String1;
    while ( 1 )
    {
      v11 = *String1;
      v12 = *(PCWCH)((char *)String1 + v10);
      if ( v11 != v12 )
      {
        if ( v11 >= 0x61 )
        {
          if ( v11 > 0x7A )
            v11 = (unsigned __int16)(v11
                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v11 & 0xF)
                                                                                             + 2
                                                                                             * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v11 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v11)]]]);
          else
            v11 -= 32;
        }
        if ( v12 >= 0x61 )
        {
          if ( v12 > 0x7A )
            v12 = (unsigned __int16)(v12
                                   + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * (v12 & 0xF)
                                                                                             + 2
                                                                                             * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * ((unsigned __int8)v12 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 7))[2 * BYTE1(v12)]]]);
          else
            v12 -= 32;
        }
        if ( v11 != v12 )
          break;
      }
      if ( ++String1 >= v8 )
        return v7 - v6;
    }
    return v11 - v12;
  }
  else
  {
    if ( String1 >= v8 )
      return v7 - v6;
    v13 = (char *)String2 - (char *)String1;
    while ( 1 )
    {
      v14 = *String1;
      v15 = *(PCWCH)((char *)String1 + v13);
      if ( v14 != v15 )
        break;
      if ( ++String1 >= v8 )
        return v7 - v6;
    }
    return v14 - v15;
  }
}
