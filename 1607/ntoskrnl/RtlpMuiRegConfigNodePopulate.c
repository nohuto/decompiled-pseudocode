/*
 * XREFs of RtlpMuiRegConfigNodePopulate @ 0x1406E6CA8
 * Callers:
 *     RtlpPopulateLanguageConfigList @ 0x140560B14 (RtlpPopulateLanguageConfigList.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1406E7118 (RtlpMuiRegGetLanguageSpec.c)
 */

NTSTATUS __fastcall RtlpMuiRegConfigNodePopulate(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  const wchar_t *v4; // rbx
  int v5; // ebp
  int v7; // edi
  unsigned __int16 v8; // si
  __int16 v9; // ax
  NTSTATUS result; // eax
  __int16 v11; // [rsp+30h] [rbp-38h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-30h] BYREF
  char v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !a1 || !a2 || !a3 || !a4 )
    return -1073741811;
  v7 = 2 * a4;
  v8 = 0;
  do
  {
    if ( !*v4 || v7 <= 0 || v8 >= 3u )
      break;
    if ( (int)RtlpMuiRegGetLanguageSpec(v5, (_DWORD)v4, (unsigned int)&v13, a4, (__int64)&v11) >= 0 )
    {
      v9 = v11;
      *(_WORD *)(a1 + 2) = *(_WORD *)(a1 + 2) & ~(3 << (2 * v8)) | ((v13 & 3) << (2 * v8));
      *(_WORD *)(a1 + 2LL * v8 + 6) = v9;
    }
    result = RtlStringCbLengthW(v4, v7, &pcbLength);
    if ( result < 0 )
      return result;
    v7 += -2 - pcbLength;
    ++v8;
    v4 = (const wchar_t *)((char *)v4 + pcbLength + 2);
  }
  while ( v4 );
  return 0;
}
