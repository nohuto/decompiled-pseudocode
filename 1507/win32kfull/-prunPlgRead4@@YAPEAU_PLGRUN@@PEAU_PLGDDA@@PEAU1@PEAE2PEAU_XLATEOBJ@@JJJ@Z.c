/*
 * XREFs of ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CF2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00C5A20 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C00C5CC0 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead4(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edi
  struct _PLGDDA *v9; // r11
  char v10; // bl
  __int64 v11; // rbp
  struct _PLGRUN *v12; // r10
  unsigned __int8 *v13; // r14
  int v14; // ecx
  unsigned int v15; // eax
  char v16; // si
  unsigned __int8 *v17; // r15
  int v18; // edx
  __int64 v19; // r12
  unsigned int v20; // eax
  int v23; // [rsp+70h] [rbp+18h]
  int v24; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = a1;
  v10 = a6 & 7;
  v11 = a6 & 7;
  v12 = a2;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  v14 = *(_DWORD *)v13;
  v24 = *(_DWORD *)v13;
  if ( a4 )
  {
    v16 = a8 & 0x1F;
    v17 = &a4[4 * ((__int64)a8 >> 5)];
    v18 = *(_DWORD *)v17;
    v23 = *(_DWORD *)v17;
    if ( v8 < a7 )
    {
      v19 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v18 & dword_1C02EE0C0[v19]) != 0 )
        {
          v20 = (v14 & (unsigned int)dword_1C02EE098[v11]) >> dword_1C02EE078[v11];
          if ( a5 )
            *(_DWORD *)v12 = a5->pulXlate[v20];
          else
            *(_DWORD *)v12 = v20;
          prunPumpDDA(v9, v12);
          v9 = a1;
        }
        vAdvXDDA(v9);
        ++v8;
        ++v10;
        ++v11;
        ++v16;
        ++v19;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v13 += 4;
          v10 = 0;
          v11 = 0LL;
          v14 = *(_DWORD *)v13;
          v24 = *(_DWORD *)v13;
        }
        else
        {
          v14 = v24;
        }
        v18 = v23;
        if ( (v16 & 0x20) != 0 )
        {
          v17 += 4;
          v16 = 0;
          v19 = 0LL;
          v18 = *(_DWORD *)v17;
          v23 = *(_DWORD *)v17;
        }
      }
    }
  }
  else if ( v8 < a7 )
  {
    while ( 1 )
    {
      v15 = (v14 & (unsigned int)dword_1C02EE098[v11]) >> dword_1C02EE078[v11];
      *(_DWORD *)v12 = a5 ? a5->pulXlate[v15] : v15;
      prunPumpDDA(v9, v12);
      vAdvXDDA(a1);
      ++v8;
      ++v10;
      ++v11;
      if ( v8 >= a7 )
        break;
      v14 = v24;
      if ( (v10 & 8) != 0 )
      {
        v13 += 4;
        v10 = 0;
        v11 = 0LL;
        v14 = *(_DWORD *)v13;
        v24 = *(_DWORD *)v13;
      }
    }
  }
  return v12;
}
