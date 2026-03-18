/*
 * XREFs of ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D0480
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00010D8 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0001308 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
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
  __int64 v12; // rsi
  unsigned __int8 *v13; // rsi
  int v14; // r14d
  __int64 v15; // rdi
  __int64 v16; // r15

  v8 = a2;
  v10 = &a3[a6];
  if ( a4 )
  {
    v13 = &a4[4 * ((__int64)a8 >> 5)];
    v14 = *(_DWORD *)v13;
    if ( a6 != a7 )
    {
      v15 = a8 & 0x1F;
      v16 = (unsigned int)(a7 - a6);
      do
      {
        if ( v15 >= 32 )
        {
          v13 += 4;
          v15 = 0LL;
          v14 = *(_DWORD *)v13;
        }
        if ( (dword_1C02ED4E0[v15] & v14) != 0 )
        {
          if ( a5 )
            *(_DWORD *)v8 = a5->pulXlate[*v10];
          else
            *(_DWORD *)v8 = *v10;
          prunPumpDDA(a1, v8);
        }
        vAdvXDDA(a1);
        ++v10;
        ++v15;
        --v16;
      }
      while ( v16 );
    }
  }
  else if ( a5 )
  {
    if ( a6 != a7 )
    {
      v12 = (unsigned int)(a7 - a6);
      do
      {
        *(_DWORD *)v8 = a5->pulXlate[*v10];
        prunPumpDDA(a1, v8);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int)(a7 - a6);
    do
    {
      *(_DWORD *)v8 = *v10;
      prunPumpDDA(a1, v8);
      vAdvXDDA(a1);
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  return v8;
}
