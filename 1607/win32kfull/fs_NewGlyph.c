/*
 * XREFs of fs_NewGlyph @ 0x1C00C4E04
 * Callers:
 *     bGetGlyphOutline @ 0x1C00C3F44 (bGetGlyphOutline.c)
 *     lQuerySingularTrueTypeOutline @ 0x1C02425DC (lQuerySingularTrueTypeOutline.c)
 *     lGGOBitmap @ 0x1C02430B4 (lGGOBitmap.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C0243310 (lGetGlyphBitmapErrRecover.c)
 *     lGetSingularGlyphBitmap @ 0x1C02434C8 (lGetSingularGlyphBitmap.c)
 * Callees:
 *     sbit_SearchForBitmap @ 0x1C00C4F68 (sbit_SearchForBitmap.c)
 *     fs_SetUpKey @ 0x1C00C50AC (fs_SetUpKey.c)
 *     sfac_GetGlyphIndex @ 0x1C02DF48C (sfac_GetGlyphIndex.c)
 */

__int64 __fastcall fs_NewGlyph(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int16 v7; // ax
  int v8; // edx
  bool v9; // zf
  _WORD *v10; // rdi
  __int64 result; // rax
  __int16 v12; // cx
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 8) || !*(_QWORD *)(a1 + 32) || !*(_QWORD *)(a1 + 40) )
    return 4099LL;
  v6 = fs_SetUpKey(a1, 6LL, &v13, a4);
  if ( !v6 )
    return v13;
  if ( *(_WORD *)(a1 + 104) == 0xFFFF )
  {
    *(_WORD *)(v6 + 216) = *(_WORD *)(a1 + 106);
    v7 = *(_WORD *)(a1 + 106);
    a2[19] = 0;
  }
  else
  {
    result = sfac_GetGlyphIndex(v6);
    if ( (_DWORD)result )
      return result;
    a2[19] = 2;
    v7 = *(_WORD *)(v6 + 216);
  }
  a2[18] = v7;
  v8 = *(unsigned __int16 *)(v6 + 216);
  if ( v8 > *(unsigned __int16 *)(v6 + 392) - 1 )
    return 4106LL;
  *(_DWORD *)(v6 + 844) = *(_DWORD *)(a1 + 112) == 0;
  *(_DWORD *)(v6 + 840) = *(_DWORD *)(a1 + 108);
  v9 = *(_DWORD *)(a1 + 112) == 0;
  v10 = a2 + 84;
  if ( v9 )
  {
    result = sbit_SearchForBitmap(
               (int)v6 + 964,
               v6,
               (unsigned __int16)v8,
               *(unsigned __int16 *)(v6 + 832),
               (__int64)&v13,
               (__int64)(a2 + 84));
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    *v10 = 0;
  }
  v12 = *(_WORD *)(v6 + 832);
  if ( v12 )
  {
    a2[110] = v12 * v12 + 1;
  }
  else
  {
    a2[110] = 0;
    if ( *(_DWORD *)(v6 + 1152) )
      a2[110] = *(_WORD *)(v6 + 1156) * *(_WORD *)(v6 + 1156) + 1;
  }
  *(_DWORD *)(v6 + 844) = (unsigned __int16)*v10;
  if ( (*(_BYTE *)(v6 + 1076) & 1) != 0 )
    *v10 = 0;
  *(_DWORD *)(v6 + 420) = 14;
  return 0LL;
}
