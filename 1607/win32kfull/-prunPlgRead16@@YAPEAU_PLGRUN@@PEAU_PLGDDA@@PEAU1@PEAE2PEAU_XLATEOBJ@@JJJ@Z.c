/*
 * XREFs of ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D2E80
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0003860 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0003AD0 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

struct _PLGRUN *__fastcall prunPlgRead16(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 *v10; // rsi
  __int64 v11; // rdi
  struct _PLGDDA *v12; // rcx
  __int64 v13; // r14
  struct _PLGDDA *v14; // rcx
  unsigned __int8 *v15; // r14
  int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // r12
  ULONG v19; // edx

  v10 = &a3[2 * a6];
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
          v19 = *(unsigned __int16 *)v10;
          if ( pxlo )
            *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, v19);
          else
            *(_DWORD *)a2 = v19;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v10 += 2;
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
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v10);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(v14);
        v10 += 2;
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
      *(_DWORD *)a2 = *(unsigned __int16 *)v10;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(v12);
      v10 += 2;
      --v11;
    }
    while ( v11 );
  }
  return a2;
}
