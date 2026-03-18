/*
 * XREFs of ttfdQueryFontData @ 0x1C00AA5BC
 * Callers:
 *     ttfdSemQueryFontData @ 0x1C00A9DA0 (ttfdSemQueryFontData.c)
 * Callees:
 *     bGrabXform @ 0x1C00AA7EC (bGrabXform.c)
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 *     ttfdQueryGlyphOutline @ 0x1C00F6558 (ttfdQueryGlyphOutline.c)
 *     lQueryDEVICEMETRICS @ 0x1C01154D0 (lQueryDEVICEMETRICS.c)
 *     ttfdOpenFontContext @ 0x1C0118EA0 (ttfdOpenFontContext.c)
 *     lGetGlyphBitmapVertical @ 0x1C0147338 (lGetGlyphBitmapVertical.c)
 *     lGetGlyphBitmapErrRecover @ 0x1C0247154 (lGetGlyphBitmapErrRecover.c)
 *     lGetSingularGlyphBitmap @ 0x1C0247250 (lGetSingularGlyphBitmap.c)
 *     ttfdGlyphBitmap @ 0x1C02475D4 (ttfdGlyphBitmap.c)
 */

__int64 __fastcall ttfdQueryFontData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v10; // rbx
  unsigned __int16 v11; // cx
  int v12; // edx
  int v13; // r9d
  int v14; // r10d
  BOOL v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  int v18; // esi
  int v19; // edi
  __int64 result; // rax
  int v21; // [rsp+60h] [rbp+8h] BYREF

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
      goto LABEL_26;
  }
  if ( a2 != 9 )
  {
    if ( (*(_DWORD *)(v10 + 40) & 0x10010000) != 0x10000 )
    {
      v11 = 0;
      goto LABEL_11;
    }
LABEL_26:
    v11 = 4;
  }
LABEL_11:
  v12 = *(_DWORD *)(v10 + 40);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( (v12 & 0x2000) != 0 && (*(_DWORD *)(v10 + 116) & 3) != 0 )
    v15 = a2 != 2;
  if ( (a2 < 5 || a2 > 6 && a2 - 8 > 1) && (v12 & 0x10000000) != 0 )
  {
    v13 = (v12 & 0x40000000) != 0 ? -1 : 1;
    if ( (v12 & 0x20000000) != 0 )
      v14 = 1;
  }
  v16 = 0;
  if ( (a2 == 1 || a2 == 4) && (*(_BYTE *)(v10 + 120) & 2) != 0 )
    v16 = 1;
  if ( !(unsigned int)bGrabXform(v10, v11, v15, v13, v14, v16) )
    return 0xFFFFFFFFLL;
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      return (unsigned int)ttfdQueryGlyphOutline(v10, a3, a4, a5) != 0 ? 64 : -1;
    if ( a2 == 3 )
      return lQueryDEVICEMETRICS(v10, v17, a5);
    if ( a2 != 4 )
    {
      if ( a2 > 4 && (a2 <= 6 || a2 - 8 <= 1) )
        return ttfdGlyphBitmap(v10, a3, a4, a5, a6);
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*(_DWORD *)(v10 + 116) & 8) != 0 )
    return lGetSingularGlyphBitmap(v10, a3, a4, a5, a6);
  v18 = a5;
  v19 = a6;
  v21 = 0;
  if ( *(_DWORD *)(v10 + 308) )
    result = lGetGlyphBitmapVertical(v10, a3, a4, a5, a6, (__int64)&v21);
  else
    result = lGetGlyphBitmap(v10, a3, a4, a5, a6, (__int64)&v21);
  if ( (_DWORD)result == -1 && v21 == 4609 )
    return lGetGlyphBitmapErrRecover(v10, a3, a4, v18, v19);
  return result;
}
