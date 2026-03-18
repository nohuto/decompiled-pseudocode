/*
 * XREFs of ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00037C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0003860 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0003AD0 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

struct _PLGRUN *__fastcall prunPlgRead32(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  ULONG *v10; // rsi
  __int64 v11; // rdi
  struct _PLGDDA *v12; // rcx
  __int64 v14; // r14
  struct _PLGDDA *v15; // rcx
  unsigned __int8 *v16; // r14
  int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // r12
  ULONG v20; // edx

  v10 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v16 = &a4[4 * ((__int64)a8 >> 5)];
    v17 = *(_DWORD *)v16;
    if ( a6 != a7 )
    {
      v18 = a8 & 0x1F;
      v19 = (unsigned int)(a7 - a6);
      do
      {
        if ( v18 >= 32 )
        {
          v16 += 4;
          v18 = 0LL;
          v17 = *(_DWORD *)v16;
        }
        if ( (dword_1C02F2B20[v18] & v17) != 0 )
        {
          v20 = *v10;
          if ( pxlo )
            *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, v20);
          else
            *(_DWORD *)a2 = v20;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        ++v10;
        ++v18;
        --v19;
      }
      while ( v19 );
    }
  }
  else if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v14 = (unsigned int)(a7 - a6);
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(v15);
        ++v10;
        --v14;
      }
      while ( v14 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int)(a7 - a6);
    do
    {
      *(_DWORD *)a2 = *v10;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(v12);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return a2;
}
