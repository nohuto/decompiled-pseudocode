/*
 * XREFs of bCvtPts1 @ 0x1C0041E4C
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     NtGdiSetPixel @ 0x1C002C0B0 (NtGdiSetPixel.c)
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C003FDF8 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00418B4 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     GreDrawStream @ 0x1C00433E0 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     GreRectVisible @ 0x1C00DAA88 (GreRectVisible.c)
 *     GreGetAppClipBox @ 0x1C00DD344 (GreGetAppClipBox.c)
 * Callees:
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall bCvtPts1(unsigned __int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  _DWORD *v5; // rsi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r11
  _DWORD *v14; // r11
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r11
  _DWORD *v22; // r11
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // [rsp+30h] [rbp+8h] BYREF
  int v27; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  v5 = (_DWORD *)a1;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          v10 = 6LL;
          do
          {
            bFToL(a1, a2, v10);
            bFToL(v11, v13, v12);
            *a2 += v5[6];
            a2 += 2;
            *v14 += v5[7];
            --v3;
          }
          while ( v3 );
        }
        break;
      case 3:
        if ( a3 )
        {
          do
          {
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *(a2 - 1) += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 8:
        if ( a3 )
        {
          v23 = 6LL;
          do
          {
            bFToL(a1, &v26, v23);
            bFToL(v24, &v27, v25);
            a1 = (unsigned int)((((v5[6] + v26) >> 3) + 1) >> 1);
            *a2 = a1;
            a2[1] = (((v27 + v5[7]) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          v15 = 6LL;
          do
          {
            bFToL(a1, &v26, v15);
            bFToL(v16, &v27, v17);
            a1 = (unsigned int)((((v5[6] + v26) >> 3) + 1) >> 1);
            *a2 = a1;
            a2 += 2;
            *(a2 - 1) = (((v27 + v5[7]) >> 3) + 1) >> 1;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        v8 = ((v6 >> 3) + 1) >> 1;
        if ( a3 )
        {
          do
          {
            *a2 += v8;
            a2[1] += v7;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
    }
  }
  else if ( a3 )
  {
    v18 = 6LL;
    do
    {
      bFToL(a1, a2, v18);
      bFToL(v19, v21, v20);
      *a2 += v5[6];
      a2 += 2;
      a1 = (unsigned int)v5[7];
      *v22 += a1;
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
