/*
 * XREFs of itrp_ExecuteFontPgm @ 0x1C001BFF4
 * Callers:
 *     fs__NewTransformation @ 0x1C001AE3C (fs__NewTransformation.c)
 * Callees:
 *     itrp_Execute @ 0x1C00CAFA0 (itrp_Execute.c)
 */

__int64 __fastcall itrp_ExecuteFontPgm(int a1, int a2, __int64 a3, __int64 a4)
{
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax

  *(_WORD *)(a3 + 332) = 257;
  *(_DWORD *)(a3 + 336) = 0;
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 128) = 4;
  *(_WORD *)(a3 + 132) = 3;
  v6 = 0;
  v7 = *(_QWORD *)(a3 + 344);
  *(_DWORD *)(a3 + 454) = 0;
  if ( *(_WORD *)(v7 + 20) )
  {
    v8 = 0LL;
    do
    {
      v8 += 8LL;
      ++v6;
      *(_WORD *)(v8 + *(_QWORD *)(a3 + 160) - 2) = 2;
    }
    while ( v6 < *(unsigned __int16 *)(*(_QWORD *)(a3 + 344) + 20LL) );
  }
  result = *(_QWORD *)(a3 + 216);
  if ( result )
    return itrp_Execute(a1, a2, result, (int)result + *(_DWORD *)(a3 + 224), a3, a4);
  return result;
}
