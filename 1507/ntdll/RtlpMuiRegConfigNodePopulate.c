/*
 * XREFs of RtlpMuiRegConfigNodePopulate @ 0x1800E6DB0
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x180049D70 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlpMuiRegGetLanguageSpec @ 0x18004A0F0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlStringCbLengthW @ 0x18006CEB4 (RtlStringCbLengthW.c)
 */

__int64 __fastcall RtlpMuiRegConfigNodePopulate(__int64 a1, __int64 a2, WCHAR *a3, __int64 a4)
{
  WCHAR *v4; // rbx
  int v7; // edi
  unsigned __int16 v8; // si
  __int16 v9; // ax
  __int64 result; // rax
  __int16 v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  char v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  if ( !a1 || !a2 || !a3 || !(_DWORD)a4 )
    return 3221225485LL;
  v7 = 2 * a4;
  v8 = 0;
  do
  {
    if ( !*v4 || v7 <= 0 || v8 >= 3u )
      break;
    if ( (int)RtlpMuiRegGetLanguageSpec(a2, v4, &v13, a4, &v11) >= 0 )
    {
      v9 = v11;
      *(_WORD *)(a1 + 2) = *(_WORD *)(a1 + 2) & ~(3 << (2 * v8)) | ((v13 & 3) << (2 * v8));
      *(_WORD *)(a1 + 2LL * v8 + 6) = v9;
    }
    result = RtlStringCbLengthW(v4, v7, &v12);
    if ( (int)result < 0 )
      return result;
    v7 += -2 - v12;
    ++v8;
    v4 = (WCHAR *)((char *)v4 + v12 + 2);
  }
  while ( v4 );
  return 0LL;
}
