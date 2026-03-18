/*
 * XREFs of ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00C5A20 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C00C5CC0 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead8(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  struct _PLGRUN *v8; // r10
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdi
  struct _PLGDDA *v12; // rcx
  __int64 v13; // rsi
  struct _PLGDDA *v14; // rcx
  unsigned __int8 *v15; // rsi
  int v16; // r14d
  __int64 v17; // rdi
  __int64 v18; // r15

  v8 = a2;
  v10 = &a3[a6];
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
        if ( (dword_1C02EE0C0[v17] & v16) != 0 )
        {
          if ( a5 )
            *(_DWORD *)v8 = a5->pulXlate[*v10];
          else
            *(_DWORD *)v8 = *v10;
          prunPumpDDA(a1, v8);
        }
        vAdvXDDA(a1);
        ++v10;
        ++v17;
        --v18;
      }
      while ( v18 );
    }
  }
  else if ( a5 )
  {
    if ( a6 != a7 )
    {
      v13 = (unsigned int)(a7 - a6);
      do
      {
        *(_DWORD *)v8 = a5->pulXlate[*v10];
        prunPumpDDA(a1, v8);
        vAdvXDDA(v14);
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
      *(_DWORD *)v8 = *v10;
      prunPumpDDA(a1, v8);
      vAdvXDDA(v12);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return v8;
}
