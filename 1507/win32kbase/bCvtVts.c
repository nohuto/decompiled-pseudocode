/*
 * XREFs of bCvtVts @ 0x1C00E4B4C
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C0028280 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C00284C0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00AFB90 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C000F9CC (bFToL.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  int *v6; // rsi
  signed __int64 v8; // rsi
  char v9; // r8
  float v10; // xmm2_4
  int v11; // r11d
  char v12; // r8
  char v13; // r8
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm3_4
  char v18; // r8

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v8 = (char *)a2 - (char *)a3;
      v9 = 6;
      do
      {
        v10 = *(float *)(a1 + 12);
        bFToL((float)*(int *)((char *)v5 + v8) * *(float *)a1, v5, v9);
        bFToL((float)v11 * v10, v5 + 1, v12);
        v5 += 2;
        --v4;
      }
      while ( v4 );
    }
  }
  else if ( a4 )
  {
    v13 = 6;
    do
    {
      v14 = (float)v6[1];
      v15 = (float)*v6;
      v16 = (float)(v14 * *(float *)(a1 + 8)) + (float)(v15 * *(float *)a1);
      v17 = (float)(v14 * *(float *)(a1 + 12)) + (float)(v15 * *(float *)(a1 + 4));
      bFToL(v16, v5, v13);
      bFToL(v17, v5 + 1, v18);
      v6 += 2;
      v5 += 2;
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
