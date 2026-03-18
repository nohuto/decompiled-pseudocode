/*
 * XREFs of scl_UpdateParentElement @ 0x1C00B9B98
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C00B991C (fsg_MergeGlyphData.c)
 * Callees:
 *     ShortAdd @ 0x1C02DC1F8 (ShortAdd.c)
 */

__int64 __fastcall scl_UpdateParentElement(__int64 a1, __int64 a2)
{
  __int16 v3; // r10
  __int16 v5; // r11
  __int64 v6; // rcx
  unsigned __int16 v7; // di
  __int16 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int16 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)ShortAdd(*(unsigned __int16 *)(a2 + 80), *(unsigned __int16 *)(a1 + 80), &v11) < 0 )
    return 5123LL;
  v5 = v11;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a2 + 64);
    v7 = *(_WORD *)(v6 + 2LL * v3 - 2) + 1;
    if ( (int)ShortAdd(v7, *(unsigned __int16 *)(v6 + 2LL * v11 - 2), &v11) < 0 )
      return 5121LL;
    if ( v8 < v5 )
    {
      v9 = 2LL * v8;
      v10 = (unsigned __int16)(v5 - v8);
      do
      {
        *(_WORD *)(v9 + *(_QWORD *)(a2 + 56)) += v7;
        *(_WORD *)(*(_QWORD *)(a2 + 64) + v9) += v7;
        v9 += 2LL;
        --v10;
      }
      while ( v10 );
    }
  }
  *(_WORD *)(a2 + 80) = v5;
  return 0LL;
}
