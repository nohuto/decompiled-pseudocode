/*
 * XREFs of bCvtPts1 @ 0x1C003BEC0
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0035FA0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0036DD8 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00391A0 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiGetPixel @ 0x1C0040650 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     NtGdiSetPixel @ 0x1C00472A0 (NtGdiSetPixel.c)
 *     GreRectVisible @ 0x1C004C688 (GreRectVisible.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreGetAppClipBox @ 0x1C00FA434 (GreGetAppClipBox.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 */

__int64 __fastcall bCvtPts1(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  char v10; // r8
  char v11; // r8
  char v12; // r8
  float v13; // xmm1_4
  char v14; // r8
  _DWORD *v15; // r11
  _DWORD *v16; // r11
  char v17; // r8
  float v18; // xmm2_4
  float v19; // xmm3_4
  char v20; // r8
  char v21; // r8
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  char v27; // r8
  _DWORD *v28; // r11
  _DWORD *v29; // r11
  int v30; // [rsp+30h] [rbp+8h] BYREF
  int v31; // [rsp+48h] [rbp+20h] BYREF

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          v12 = 6;
          do
          {
            v13 = (float)(16 * a2[1]) * *(float *)(a1 + 12);
            bFToL((float)(16 * *a2) * *(float *)a1, a2, v12);
            bFToL(v13, v15, v14);
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *v16 += *(_DWORD *)(a1 + 28);
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
          v17 = 6;
          do
          {
            v18 = (float)a2[1];
            v19 = (float)*a2;
            bFToL((float)(v18 * *(float *)(a1 + 8)) + (float)(v19 * *(float *)a1), &v30, v17);
            bFToL((float)(v19 * *(float *)(a1 + 4)) + (float)(v18 * *(float *)(a1 + 12)), &v31, v20);
            *a2 = (((*(_DWORD *)(a1 + 24) + v30) >> 3) + 1) >> 1;
            a2[1] = (((v31 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          v10 = 6;
          do
          {
            bFToL((float)*a2 * *(float *)a1, &v30, v10);
            bFToL((float)a2[1] * *(float *)(a1 + 12), &v31, v11);
            *a2 = (((*(_DWORD *)(a1 + 24) + v30) >> 3) + 1) >> 1;
            a2 += 2;
            *(a2 - 1) = (((v31 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
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
    v21 = 6;
    do
    {
      v22 = (float)(16 * a2[1]);
      v23 = v22 * *(float *)(a1 + 12);
      v24 = (float)(16 * *a2);
      v25 = (float)(v22 * *(float *)(a1 + 8)) + (float)(v24 * *(float *)a1);
      v26 = (float)(v24 * *(float *)(a1 + 4)) + v23;
      bFToL(v25, a2, v21);
      bFToL(v26, v28, v27);
      *a2 += *(_DWORD *)(a1 + 24);
      a2 += 2;
      *v29 += *(_DWORD *)(a1 + 28);
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
