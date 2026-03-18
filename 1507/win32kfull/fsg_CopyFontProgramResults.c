/*
 * XREFs of fsg_CopyFontProgramResults @ 0x1C00ABC50
 * Callers:
 *     fs__NewTransformation @ 0x1C00AAC30 (fs__NewTransformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsg_CopyFontProgramResults(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v4; // r11d
  __int64 v5; // r10
  int v6; // r11d
  __int64 result; // rax
  _WORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r10

  v2 = 0;
  v4 = 0;
  if ( *(_WORD *)(*(_QWORD *)(a1 + 344) + 20LL) )
  {
    v5 = 0LL;
    do
    {
      ++v4;
      *(_QWORD *)(v5 + *(_QWORD *)(a2 + 160)) = *(_QWORD *)(v5 + *(_QWORD *)(a1 + 160));
      v5 += 8LL;
    }
    while ( v4 < *(unsigned __int16 *)(*(_QWORD *)(a1 + 344) + 20LL) );
  }
  v6 = 0;
  *(_DWORD *)(a2 + 336) = *(_DWORD *)(a1 + 336);
  if ( *(int *)(a1 + 336) > 0 )
  {
    v10 = 0LL;
    do
    {
      ++v6;
      *(_QWORD *)(v10 + *(_QWORD *)(a2 + 168)) = *(_QWORD *)(v10 + *(_QWORD *)(a1 + 168));
      v10 += 8LL;
    }
    while ( v6 < *(_DWORD *)(a1 + 336) );
  }
  *(_WORD *)(a2 + 454) = *(_WORD *)(a1 + 454);
  result = *(unsigned __int16 *)(a1 + 456);
  *(_WORD *)(a2 + 456) = result;
  if ( (_WORD)result )
  {
    v8 = (_WORD *)(a2 + 458);
    v9 = a1 - a2;
    do
    {
      ++v2;
      *v8 = *(_WORD *)((char *)v8 + v9);
      ++v8;
      result = *(unsigned __int16 *)(a2 + 456);
    }
    while ( v2 < (int)result );
  }
  return result;
}
