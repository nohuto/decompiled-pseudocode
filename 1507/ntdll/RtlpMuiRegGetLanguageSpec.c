/*
 * XREFs of RtlpMuiRegGetLanguageSpec @ 0x18004A0F0
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180049D70 (RtlpPopulateLanguageConfigList.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180049FE8 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegConfigNodePopulate @ 0x1800E6DB0 (RtlpMuiRegConfigNodePopulate.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1800E8A5C (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlpMuiRegGetOrAddString @ 0x18001E2C8 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpMuiRegGetLanguageSpec(__int64 a1, WCHAR *a2, char *a3, __int64 a4, __int16 *a5)
{
  __int16 v6; // bx
  char v9; // di
  __int64 v10; // r8
  __int64 result; // rax
  UNICODE_STRING v12[3]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int16 v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v14 = 0;
  v9 = 0;
  RtlInitUnicodeString(v12, a2);
  if ( RtlCultureNameToLCID(&v12[0].Length, &v13) )
  {
    v6 = v13;
    if ( ((v13 - 4096) & 0xFFFFFBFF) != 0 )
    {
      v9 = 1;
LABEL_4:
      result = 0LL;
      goto LABEL_5;
    }
    LOBYTE(v10) = 1;
    result = RtlpMuiRegGetOrAddString(a1, a2, v10, &v14);
    if ( (int)result >= 0 )
    {
      v6 = v14;
      v9 = 3;
      goto LABEL_4;
    }
    v6 = 0;
  }
  else
  {
    result = 3221225485LL;
  }
LABEL_5:
  if ( a3 )
    *a3 = v9;
  if ( a5 )
    *a5 = v6;
  return result;
}
