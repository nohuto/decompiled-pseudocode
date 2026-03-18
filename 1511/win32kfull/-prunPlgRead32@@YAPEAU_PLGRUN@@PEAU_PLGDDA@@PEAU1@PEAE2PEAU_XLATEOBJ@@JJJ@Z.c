/*
 * XREFs of ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0001040
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00010D8 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0001308 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00DF4B0 (XLATEOBJ_iXlate.c)
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
  __int64 v13; // r14
  unsigned __int8 *v14; // r14
  int v15; // r15d
  __int64 v16; // rdi
  __int64 v17; // r12
  ULONG v18; // edx

  v10 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v14 = &a4[4 * ((__int64)a8 >> 5)];
    v15 = *(_DWORD *)v14;
    if ( a6 != a7 )
    {
      v16 = a8 & 0x1F;
      v17 = (unsigned int)(a7 - a6);
      do
      {
        if ( v16 >= 32 )
        {
          v14 += 4;
          v16 = 0LL;
          v15 = *(_DWORD *)v14;
        }
        if ( (dword_1C02ED4E0[v16] & v15) != 0 )
        {
          v18 = *v10;
          if ( pxlo )
            *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, v18);
          else
            *(_DWORD *)a2 = v18;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        ++v10;
        ++v16;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v13 = (unsigned int)(a7 - a6);
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        ++v10;
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
      *(_DWORD *)a2 = *v10;
      a2 = prunPumpDDA(a1, a2);
      vAdvXDDA(a1);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return a2;
}
