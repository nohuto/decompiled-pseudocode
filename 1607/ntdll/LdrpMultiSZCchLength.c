/*
 * XREFs of LdrpMultiSZCchLength @ 0x1800106B0
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180013850 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180088A10 (RtlSetProcessPreferredUILanguages.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800E6B00 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E6D20 (RtlpConvertLCIDsToCultureNames.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x180040BBC (RtlStringCchLengthW.c)
 */

__int64 __fastcall LdrpMultiSZCchLength(_WORD *a1, __int64 a2, _DWORD *a3)
{
  _WORD *v4; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // r11
  __int64 v8; // r11
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( a1 )
  {
    if ( *a1 )
      goto LABEL_8;
    v6 = 1LL;
    while ( 1 )
    {
      if ( !*++v4 )
      {
        LODWORD(v6) = v6 + 1;
        goto LABEL_7;
      }
LABEL_8:
      if ( v6 > 0x7FFFFFFF || (int)RtlStringCchLengthW(v4, 0x7FFFFFFF - v6, &v9) < 0 )
        break;
      v6 = v9 + v8 + 1;
      v4 += v9;
    }
    v5 = -2147483643;
    LODWORD(v6) = 0;
  }
LABEL_7:
  *a3 = v6;
  return v5;
}
