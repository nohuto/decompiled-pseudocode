/*
 * XREFs of Normalization__GetFirstDecomposedCharPlane0 @ 0x14068ABC0
 * Callers:
 *     NormBuffer__LastStartBase @ 0x1402152A4 (NormBuffer__LastStartBase.c)
 *     Normalization__CanCombineWithStartBase @ 0x14068AB08 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x14068AB4C (Normalization__CanCombineWithStartFirstPair.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__GetFirstDecomposedCharPlane0(__int64 a1, int a2)
{
  __int16 v4; // r9
  __int64 v5; // rdx
  unsigned __int16 i; // r9
  unsigned __int16 v7; // cx

  v4 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (a2 % *(_DWORD *)(a1 + 56)));
  if ( (v4 & 0xE000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    for ( i = 2 * v4; ; i += 2 )
    {
      v7 = *(_WORD *)(v5 + 2LL * i);
      if ( !v7 || v7 == a2 )
        break;
    }
    v4 = *(_WORD *)(v5 + 2LL * (i + 1));
  }
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 80) + 2LL * (v4 & 0x1FFF));
}
