/*
 * XREFs of fs_NewGlyph @ 0x1C00AD304
 * Callers:
 *     bGetGlyphOutline @ 0x1C00AC394 (bGetGlyphOutline.c)
 *     lQuerySingularTrueTypeOutline @ 0x1C024659C (lQuerySingularTrueTypeOutline.c)
 *     lGGOBitmap @ 0x1C0246EF8 (lGGOBitmap.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C0247154 (lGetGlyphBitmapErrRecover.c)
 *     lGetSingularGlyphBitmap @ 0x1C0247250 (lGetSingularGlyphBitmap.c)
 * Callees:
 *     sbit_SearchForBitmap @ 0x1C00AD468 (sbit_SearchForBitmap.c)
 *     fs_SetUpKey @ 0x1C00AD5A8 (fs_SetUpKey.c)
 *     sfac_GetGlyphIndex @ 0x1C02D9B58 (sfac_GetGlyphIndex.c)
 */

__int64 __fastcall fs_NewGlyph(__int64 a1, _WORD *a2)
{
  __int64 v4; // rbx
  __int16 v5; // ax
  int v6; // edx
  bool v7; // zf
  _WORD *v8; // rdi
  __int64 result; // rax
  __int16 v10; // cx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v4 = fs_SetUpKey(a1, 6LL, &v11);
  if ( !v4 )
    return v11;
  if ( *(_WORD *)(a1 + 104) == 0xFFFF )
  {
    *(_WORD *)(v4 + 216) = *(_WORD *)(a1 + 106);
    v5 = *(_WORD *)(a1 + 106);
    a2[19] = 0;
  }
  else
  {
    result = sfac_GetGlyphIndex(v4);
    if ( (_DWORD)result )
      return result;
    a2[19] = 2;
    v5 = *(_WORD *)(v4 + 216);
  }
  a2[18] = v5;
  v6 = *(unsigned __int16 *)(v4 + 216);
  if ( v6 > *(unsigned __int16 *)(v4 + 392) - 1 )
    return 4106LL;
  *(_DWORD *)(v4 + 844) = *(_DWORD *)(a1 + 112) == 0;
  *(_DWORD *)(v4 + 840) = *(_DWORD *)(a1 + 108);
  v7 = *(_DWORD *)(a1 + 112) == 0;
  v8 = a2 + 84;
  if ( v7 )
  {
    result = sbit_SearchForBitmap(
               (int)v4 + 964,
               v4,
               (unsigned __int16)v6,
               *(unsigned __int16 *)(v4 + 832),
               (__int64)&v11,
               (__int64)(a2 + 84));
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    *v8 = 0;
  }
  v10 = *(_WORD *)(v4 + 832);
  if ( v10 )
  {
    a2[110] = v10 * v10 + 1;
  }
  else
  {
    a2[110] = 0;
    if ( *(_DWORD *)(v4 + 1152) )
      a2[110] = *(_WORD *)(v4 + 1156) * *(_WORD *)(v4 + 1156) + 1;
  }
  *(_DWORD *)(v4 + 844) = (unsigned __int16)*v8;
  if ( (*(_BYTE *)(v4 + 1076) & 1) != 0 )
    *v8 = 0;
  *(_DWORD *)(v4 + 420) = 14;
  return 0LL;
}
