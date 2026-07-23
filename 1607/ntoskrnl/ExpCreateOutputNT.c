/*
 * XREFs of ExpCreateOutputNT @ 0x1406B0710
 * Callers:
 *     ExpConvertArcName @ 0x1406B0088 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 * Callees:
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 */

__int64 __fastcall ExpCreateOutputNT(__int64 a1, unsigned int *a2, const wchar_t **a3, const wchar_t *a4)
{
  int v4; // edi
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // r14d
  wchar_t *v14; // rcx

  v4 = *(unsigned __int16 *)a3 + 2;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v4 += 2 * v8;
  }
  v9 = v4 + 2;
  v10 = v4 + 14;
  v11 = v9 >> 1;
  if ( a1 && *a2 >= v10 )
  {
    *(_DWORD *)a1 = 1;
    v12 = a1 + 12;
    *(_DWORD *)(a1 + 4) = v10;
    *(_DWORD *)(a1 + 8) = 3;
    v13 = v11;
    wcscpy_s((wchar_t *)(a1 + 12), v11, a3[1]);
    v14 = (wchar_t *)(v12 + *(unsigned __int16 *)a3 + 2LL);
    if ( a4 )
      wcscpy_s(v14, v13, a4);
    else
      *v14 = 0;
    *a2 = v10;
    return 0LL;
  }
  else
  {
    *a2 = v10;
    return 3221225507LL;
  }
}
