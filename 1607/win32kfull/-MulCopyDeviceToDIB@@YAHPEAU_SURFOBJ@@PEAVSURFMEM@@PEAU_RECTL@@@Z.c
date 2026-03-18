/*
 * XREFs of ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C0294AA4
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003718C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C027E58C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0293B90 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296650 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02976F0 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0294180 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 */

__int64 __fastcall MulCopyDeviceToDIB(struct _SURFOBJ *a1, struct SURFMEM *a2, struct _RECTL *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  LONG x; // r9d
  LONG y; // r15d
  LONG v12; // r8d
  LONG v13; // edx
  int v14; // ecx
  LONG v15; // r14d
  LONG v16; // r8d
  LONG v17; // eax
  LONG v18; // ecx
  __int64 *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // esi
  struct _POINTL v23[2]; // [rsp+60h] [rbp-29h] BYREF
  int v24; // [rsp+70h] [rbp-19h] BYREF
  __int64 v25; // [rsp+74h] [rbp-15h]
  __int128 v26; // [rsp+7Ch] [rbp-Dh]
  int v27; // [rsp+8Ch] [rbp+3h]
  struct _RECTL v28; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0uLL;
  v27 = 0;
  v7 = SURFOBJ_TO_SURFACE(a1);
  v8 = v7;
  v9 = *(_QWORD *)(v7 + 48);
  *(struct _RECTL *)&v23[0].x = *a3;
  x = v23[1].x;
  y = v23[0].y;
  v12 = *(_DWORD *)(v9 + 2608);
  v13 = *(_DWORD *)(v9 + 2612);
  v14 = *(_DWORD *)(v7 + 60);
  v15 = _mm_cvtsi128_si32(*(__m128i *)&v23[0].x);
  if ( v15 < v12 )
    v15 = v12;
  v16 = *(_DWORD *)(v7 + 56) + v12;
  v17 = v23[1].y;
  if ( v23[1].x > v16 )
    x = v16;
  if ( v23[0].y < v13 )
    y = v13;
  v18 = v13 + v14;
  if ( v23[1].y > v18 )
    v17 = v18;
  if ( y >= v17 || v15 >= x )
    return 1;
  *(_QWORD *)&v28.left = 0LL;
  v28.right = x - v15;
  v28.bottom = v17 - y;
  v19 = *(__int64 **)(v8 + 120);
  v23[0].x = v15;
  v23[0].y = y;
  LODWORD(v25) = x - v15;
  HIDWORD(v25) = v17 - y;
  if ( v19 )
    v20 = *v19;
  else
    v20 = 0LL;
  v21 = 1;
  *(_QWORD *)((char *)&v26 + 4) = v20;
  v24 = *(_DWORD *)(v8 + 96);
  HIDWORD(v26) = *(_DWORD *)(v8 + 112) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)&v24, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !*(_QWORD *)a2
    || !MulBitBlt((struct _SURFOBJ *)(*(_QWORD *)a2 + 24LL), a1, 0LL, 0LL, xloIdent, &v28, v23, 0LL, 0LL, 0LL, 0xCCCCu) )
  {
    return v3;
  }
  a3->left -= v15;
  a3->right -= v15;
  a3->top -= y;
  a3->bottom -= y;
  return v21;
}
