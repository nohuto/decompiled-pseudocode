/*
 * XREFs of bCvtPts @ 0x1C0081490
 * Callers:
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C0081300 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C00B36E0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00B3750 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     bFToL @ 0x1C0071CFC (bFToL.c)
 */

__int64 __fastcall bCvtPts(__int64 a1, int *a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // rbx
  _DWORD *v5; // r11
  int *v6; // rdi
  signed __int64 v8; // rdi
  int v9; // eax
  int v11; // eax
  char v12; // r8
  char v13; // r8
  _DWORD *v14; // r11
  char v15; // r8
  float v16; // xmm2_4
  float v17; // xmm3_4
  char v18; // r8
  _DWORD *v19; // r11
  _DWORD v20[6]; // [rsp+20h] [rbp-18h] BYREF
  int v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0 )
  {
LABEL_18:
    if ( a4 )
    {
      v15 = 6;
      do
      {
        v16 = (float)*v6;
        v17 = (float)v6[1];
        bFToL((float)(v17 * *(float *)(a1 + 8)) + (float)(v16 * *(float *)a1), &v21, v15);
        bFToL((float)(v17 * *(float *)(a1 + 12)) + (float)(v16 * *(float *)(a1 + 4)), v20, v18);
        v6 += 2;
        *v19 = v21 + *(_DWORD *)(a1 + 24);
        v19[1] = v20[0] + *(_DWORD *)(a1 + 28);
        --v4;
      }
      while ( v4 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) == 1 )
  {
LABEL_14:
    if ( a4 )
    {
      v12 = 6;
      do
      {
        bFToL((float)*v6 * *(float *)a1, &v21, v12);
        bFToL((float)v6[1] * *(float *)(a1 + 12), v20, v13);
        v6 += 2;
        *v14 = *(_DWORD *)(a1 + 24) + v21;
        v14[1] = v20[0] + *(_DWORD *)(a1 + 28);
        --v4;
      }
      while ( v4 );
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 0xB) != 8 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0xB) != 9 )
      {
        if ( (*(_DWORD *)(a1 + 32) & 0xB) == 0xB && a4 )
        {
          v8 = (char *)a2 - (char *)a3;
          do
          {
            *v5 = *(_DWORD *)(a1 + 24) + 16 * *(_DWORD *)((char *)v5 + v8);
            v9 = *(_DWORD *)((char *)v5 + v8 + 4);
            v5 += 2;
            *(v5 - 1) = *(_DWORD *)(a1 + 28) + 16 * v9;
            --v4;
          }
          while ( v4 );
        }
        return 1LL;
      }
      goto LABEL_14;
    }
    goto LABEL_18;
  }
  if ( a4 )
  {
    do
    {
      v11 = *v6;
      v6 += 2;
      *v5 = *(_DWORD *)(a1 + 24) + (((v11 >> 3) + 1) >> 1);
      v5 += 2;
      *(v5 - 1) = *(_DWORD *)(a1 + 28) + (((*(v6 - 1) >> 3) + 1) >> 1);
      --v4;
    }
    while ( v4 );
  }
  return 1LL;
}
