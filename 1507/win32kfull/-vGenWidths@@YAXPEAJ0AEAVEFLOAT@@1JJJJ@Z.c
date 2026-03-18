/*
 * XREFs of ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B7068
 * Callers:
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C02B6798 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B6C50 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00327F4 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C0032854 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

void __fastcall vGenWidths(int *a1, int *a2, struct EFLOAT *a3, struct EFLOAT *a4, int a5, int a6, int a7, int a8)
{
  int v11; // r10d
  EFLOAT *v12; // r11
  int v13; // r8d
  int v14; // ebx
  int v15; // ebx
  int v16; // r8d
  int v17; // r10d
  float *v18; // r11
  float v19; // xmm4_4

  if ( *(float *)&a5 == 0.0 )
  {
    *a2 = 0;
    *a1 = 0;
  }
  else if ( EFLOAT::bIsZero(a3) )
  {
    *a1 = v11 / 2;
    *a2 = v11 - v11 / 2;
  }
  else
  {
    v13 = a7;
    v14 = a6;
    if ( a7 == a6 )
    {
      v13 = a8 / -4;
      v14 = a8 / -4 + a8 / 2;
    }
    if ( v13 >= 0 )
      v13 = 0;
    if ( v14 <= 0 )
      v14 = 0;
    if ( *(float *)a3 < 0.0 )
      v14 = -v13;
    v15 = a8 / 16 + v14;
    if ( !v15 )
      v15 = 1;
    if ( EFLOAT::bIsZero(v12) )
    {
      *a2 = v15;
      *a1 = -v16;
    }
    else
    {
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v16) * (float)(*(float *)a3 / (float)v16))
                    + (float)((float)(*v18 / (float)((float)v17 * 0.5)) * (float)(*v18 / (float)((float)v17 * 0.5)));
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a1, 6);
      *(float *)&a5 = (float)((float)(*(float *)a3 / (float)v15) * (float)(*(float *)a3 / (float)v15)) + v19;
      EFLOAT::vSqrt((EFLOAT *)&a5);
      bFToL(1.0 / *(float *)&a5, a2, 6);
    }
  }
}
