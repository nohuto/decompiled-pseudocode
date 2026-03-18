/*
 * XREFs of bCvtVts @ 0x1C00F93D0
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C0045D50 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C00BDC00 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1C00BDC80 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K_N@Z.c)
 * Callees:
 *     ?bEfToL@EFLOAT@@QEAAHAEAJ@Z @ 0x1C00B1444 (-bEfToL@EFLOAT@@QEAAHAEAJ@Z.c)
 */

__int64 __fastcall bCvtVts(__int64 a1, int *a2, int *a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  int *v6; // r11
  int *v7; // rdi
  signed __int64 v9; // rdi
  float v10; // xmm0_4
  __int64 v11; // r11
  __int64 v12; // r11
  __int64 v14; // r11
  bool i; // zf
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm3_4
  __int64 v20; // r11
  __int64 v21; // r11
  __int64 v22; // r11
  _DWORD v23[4]; // [rsp+20h] [rbp-10h] BYREF
  float v24; // [rsp+40h] [rbp+10h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 32) & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 && a4 )
    {
      v9 = (char *)a2 - (char *)a3;
      do
      {
        v10 = (float)*(int *)((char *)v6 + v9 + 4) * *(float *)(a1 + 12);
        v24 = (float)*(int *)((char *)v6 + v9) * *(float *)a1;
        *(float *)v23 = v10;
        if ( a5 )
        {
          if ( !(unsigned int)EFLOAT::bEfToL((EFLOAT *)&v24, v6)
            || !(unsigned int)EFLOAT::bEfToL((EFLOAT *)v23, (int *)(v11 + 4)) )
          {
            return 0LL;
          }
        }
        else
        {
          EFLOAT::bEfToL((EFLOAT *)&v24, v6);
          EFLOAT::bEfToL((EFLOAT *)v23, (int *)(v14 + 4));
        }
        v6 = (int *)(v12 + 8);
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    for ( i = a4 == 0; !i; i = v5 == 0 )
    {
      v16 = (float)v7[1];
      v17 = (float)*v7;
      v18 = (float)(v16 * *(float *)(a1 + 8)) + (float)(v17 * *(float *)a1);
      v19 = (float)(v16 * *(float *)(a1 + 12)) + (float)(v17 * *(float *)(a1 + 4));
      v24 = v18;
      *(float *)v23 = v19;
      if ( a5 )
      {
        if ( !(unsigned int)EFLOAT::bEfToL((EFLOAT *)&v24, v6)
          || !(unsigned int)EFLOAT::bEfToL((EFLOAT *)v23, (int *)(v20 + 4)) )
        {
          return 0LL;
        }
      }
      else
      {
        EFLOAT::bEfToL((EFLOAT *)&v24, v6);
        EFLOAT::bEfToL((EFLOAT *)v23, (int *)(v22 + 4));
      }
      v7 += 2;
      v6 = (int *)(v21 + 8);
      --v5;
    }
  }
  return 1LL;
}
