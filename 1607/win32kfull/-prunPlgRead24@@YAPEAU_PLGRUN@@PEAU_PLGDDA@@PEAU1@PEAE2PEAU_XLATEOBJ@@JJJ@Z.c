/*
 * XREFs of ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D31A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0003860 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0003AD0 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

struct _PLGRUN *__fastcall prunPlgRead24(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rsi
  struct _PLGDDA *v12; // rcx
  __int64 v13; // r14
  struct _PLGDDA *v14; // rcx
  unsigned __int8 *v15; // r14
  int v16; // r12d
  __int64 v17; // rsi
  __int64 v18; // r13
  ULONG v19; // eax
  ULONG iColor; // [rsp+60h] [rbp+40h]

  HIBYTE(iColor) = 0;
  v10 = &a3[2 * a6 + a6];
  if ( a4 )
  {
    v15 = &a4[4 * ((__int64)a8 >> 5)];
    v16 = *(_DWORD *)v15;
    if ( a6 != a7 )
    {
      v17 = a8 & 0x1F;
      v18 = (unsigned int)(a7 - a6);
      do
      {
        if ( v17 >= 32 )
        {
          v15 += 4;
          v17 = 0LL;
          v16 = *(_DWORD *)v15;
        }
        if ( (dword_1C02F2B20[v17] & v16) != 0 )
        {
          LOWORD(iColor) = *(_WORD *)v10;
          BYTE2(iColor) = v10[2];
          if ( pxlo )
            v19 = XLATEOBJ_iXlate(pxlo, iColor);
          else
            v19 = iColor;
          *(_DWORD *)a2 = v19;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v10 += 3;
        ++v17;
        --v18;
      }
      while ( v18 );
    }
  }
  else if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v13 = (unsigned int)(a7 - a6);
      do
      {
        LOWORD(iColor) = *(_WORD *)v10;
        BYTE2(iColor) = v10[2];
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, iColor);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(v14);
        v10 += 3;
        --v13;
      }
      while ( v13 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int)(a7 - a6);
    do
    {
      LOWORD(iColor) = *(_WORD *)v10;
      BYTE2(iColor) = v10[2];
      *(_DWORD *)a2 = iColor;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(v12);
      v10 += 3;
      --v11;
    }
    while ( v11 );
  }
  return a2;
}
