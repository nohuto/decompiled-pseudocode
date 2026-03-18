/*
 * XREFs of vFillSingularGLYPHDATA @ 0x1C02478C8
 * Callers:
 *     lQuerySingularTrueTypeOutline @ 0x1C024659C (lQuerySingularTrueTypeOutline.c)
 *     lGetSingularGlyphBitmap @ 0x1C0247250 (lGetSingularGlyphBitmap.c)
 * Callees:
 *     vGetNotionalGlyphMetrics @ 0x1C00FE814 (vGetNotionalGlyphMetrics.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

__int64 __fastcall vFillSingularGLYPHDATA(int a1, unsigned int a2, float *a3, __int64 a4)
{
  int v6; // edx
  int v7; // eax
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  int v14; // r8d
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // r11d
  _WORD v20[8]; // [rsp+20h] [rbp-10h] BYREF
  int v21; // [rsp+40h] [rbp+10h] BYREF

  *(_QWORD *)a4 = 0LL;
  *(_DWORD *)(a4 + 32) = 0;
  *(_DWORD *)(a4 + 36) = 0;
  *(_DWORD *)(a4 + 40) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  *(_DWORD *)(a4 + 8) = a1;
  vGetNotionalGlyphMetrics((__int64)a3, a2, v20);
  v21 = 0;
  bFToL((float)v20[5] * a3[56], &v21, 0);
  v6 = v21;
  v7 = v20[4];
  v21 &= v8;
  *(_DWORD *)(a4 + 12) = v6;
  bFToL((float)v7 * a3[56], &v21, v8);
  v9 = v21;
  v10 = v20[1];
  v21 &= v11;
  *(_DWORD *)(a4 + 16) = v9;
  bFToL((float)v10 * a3[56], &v21, v11);
  v12 = v21;
  v13 = v20[2];
  v21 &= v14;
  *(_DWORD *)(a4 + 20) = v12;
  bFToL((float)v13 * a3[66], &v21, v14);
  v15 = v20[3];
  v16 = -v21;
  v21 &= v17;
  *(_DWORD *)(a4 + 24) = v16;
  bFToL((float)v15 * a3[66], &v21, v17);
  *(_DWORD *)(a4 + 28) = -v21;
  return vLTimesVtfl(v18, a3 + 52, a4 + 48);
}
