/*
 * XREFs of ttfdQueryFontData @ 0x1C00B1D84
 * Callers:
 *     ttfdSemQueryFontData @ 0x1C00B1560 (ttfdSemQueryFontData.c)
 * Callees:
 *     lQueryDEVICEMETRICS @ 0x1C00A8210 (lQueryDEVICEMETRICS.c)
 *     ttfdOpenFontContext @ 0x1C00A9964 (ttfdOpenFontContext.c)
 *     bGrabXform @ 0x1C00B1F98 (bGrabXform.c)
 *     lGetGlyphBitmap @ 0x1C00B209C (lGetGlyphBitmap.c)
 *     ttfdQueryGlyphOutline @ 0x1C00F0E80 (ttfdQueryGlyphOutline.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C0247028 (lGetGlyphBitmapErrRecover.c)
 *     lGetGlyphBitmapVertical @ 0x1C0247118 (lGetGlyphBitmapVertical.c)
 *     lGetSingularGlyphBitmap @ 0x1C02471D4 (lGetSingularGlyphBitmap.c)
 *     ttfdGlyphBitmap @ 0x1C0247544 (ttfdGlyphBitmap.c)
 */

__int64 __fastcall ttfdQueryFontData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // rbx
  unsigned __int16 v11; // cx
  int v12; // edx
  int v13; // r9d
  BOOL v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  int v17; // esi
  int v18; // edi
  __int64 result; // rax
  int v20; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a1 + 56);
  if ( v10 )
  {
    *(_DWORD *)(v10 + 40) = *(_DWORD *)(v10 + 40) & 0x80000000 | *(_DWORD *)(a1 + 12);
  }
  else
  {
    v10 = ttfdOpenFontContext();
    *(_QWORD *)(a1 + 56) = v10;
  }
  if ( !v10 )
    return 0xFFFFFFFFLL;
  v11 = 8;
  *(_QWORD *)v10 = a1;
  switch ( a2 )
  {
    case 5u:
      v11 = 0;
      goto LABEL_11;
    case 6u:
      v11 = 2;
      goto LABEL_11;
    case 8u:
      goto LABEL_25;
  }
  if ( a2 != 9 )
  {
    if ( (*(_DWORD *)(v10 + 40) & 0x10010000) != 0x10000 )
    {
      v11 = 0;
      goto LABEL_11;
    }
LABEL_25:
    v11 = 4;
  }
LABEL_11:
  v12 = *(_DWORD *)(v10 + 40);
  v13 = 0;
  v14 = 0;
  if ( (v12 & 0x2000) != 0 && (*(_DWORD *)(v10 + 116) & 3) != 0 )
    v14 = a2 != 2;
  if ( (a2 < 5 || a2 > 6 && a2 - 8 > 1) && (v12 & 0x10000000) != 0 )
    v13 = (v12 & 0x40000000) != 0 ? -1 : 1;
  v15 = 0;
  if ( (a2 == 1 || a2 == 4) && (*(_BYTE *)(v10 + 120) & 2) != 0 )
    v15 = 1;
  if ( !(unsigned int)bGrabXform(v10, v11, v14, v13, v15) )
    return 0xFFFFFFFFLL;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      return (unsigned int)ttfdQueryGlyphOutline(v10, a3, a4, a5) != 0 ? 64 : -1;
    if ( a2 == 3 )
      return lQueryDEVICEMETRICS(v10, v16, a5);
    if ( a2 != 4 )
    {
      if ( a2 > 4 && (a2 <= 6 || a2 - 8 <= 1) )
        return ttfdGlyphBitmap(v10, a3, a4, a5, a6);
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*(_DWORD *)(v10 + 116) & 8) != 0 )
    return lGetSingularGlyphBitmap(v10, a3, a4, a5, a6);
  v17 = a5;
  v18 = a6;
  v20 = 0;
  if ( *(_DWORD *)(v10 + 308) )
    result = lGetGlyphBitmapVertical(v10, a3, a4, a5, a6, (__int64)&v20);
  else
    result = lGetGlyphBitmap(v10, a3, a4, a5, a6, (__int64)&v20);
  if ( (_DWORD)result == -1 && v20 == 4609 )
    return lGetGlyphBitmapErrRecover(v10, a3, a4, v17, v18);
  return result;
}
