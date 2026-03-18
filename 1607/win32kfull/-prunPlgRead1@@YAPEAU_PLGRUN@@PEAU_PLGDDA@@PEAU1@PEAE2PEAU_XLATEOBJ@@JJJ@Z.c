/*
 * XREFs of ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D2FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0003860 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0003AD0 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead1(
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
  int v10; // ebx
  struct _PLGRUN *v11; // r10
  unsigned __int8 *v12; // r14
  int v13; // ecx
  int v14; // r8d
  int v15; // r11d
  ULONG *pulXlate; // rax
  __int64 v17; // rbp
  int v18; // eax
  struct _PLGDDA *v19; // rcx
  char v20; // si
  unsigned __int8 *v21; // r12
  int v22; // edx
  __int64 v23; // r15
  int v24; // eax
  int v27; // [rsp+70h] [rbp+18h]
  int v28; // [rsp+78h] [rbp+20h]
  int v29; // [rsp+80h] [rbp+28h]
  int v30; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v10 = a6 & 0x1F;
  v11 = a2;
  v12 = &a3[4 * ((__int64)a6 >> 5)];
  v13 = *(_DWORD *)v12;
  v27 = *(_DWORD *)v12;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v14 = *pulXlate;
    v15 = pulXlate[1];
  }
  else
  {
    v14 = 0;
    v15 = 1;
  }
  v29 = v15;
  v30 = v14;
  v17 = v10;
  if ( a4 )
  {
    v20 = a8 & 0x1F;
    v21 = &a4[4 * ((__int64)a8 >> 5)];
    v22 = *(_DWORD *)v21;
    v28 = *(_DWORD *)v21;
    if ( v8 < a7 )
    {
      v23 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v22 & dword_1C02F2B20[v23]) != 0 )
        {
          v24 = v14;
          if ( (v13 & dword_1C02F2B20[v17]) != 0 )
            v24 = v15;
          *(_DWORD *)v11 = v24;
          prunPumpDDA(a1, v11);
        }
        vAdvXDDA(a1);
        ++v8;
        LOBYTE(v10) = v10 + 1;
        ++v17;
        ++v20;
        ++v23;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 0x20) != 0 )
        {
          v12 += 4;
          LOBYTE(v10) = 0;
          v17 = 0LL;
          v13 = *(_DWORD *)v12;
          v27 = *(_DWORD *)v12;
        }
        else
        {
          v13 = v27;
        }
        v22 = v28;
        v14 = v30;
        v15 = v29;
        if ( (v20 & 0x20) != 0 )
        {
          v21 += 4;
          v20 = 0;
          v23 = 0LL;
          v22 = *(_DWORD *)v21;
          v28 = *(_DWORD *)v21;
        }
      }
    }
  }
  else if ( v8 < a7 )
  {
    while ( 1 )
    {
      v18 = v14;
      if ( (v13 & dword_1C02F2B20[v17]) != 0 )
        v18 = v15;
      *(_DWORD *)v11 = v18;
      prunPumpDDA(a1, v11);
      vAdvXDDA(v19);
      ++v8;
      LOBYTE(v10) = v10 + 1;
      ++v17;
      if ( v8 >= a7 )
        break;
      v13 = v27;
      v14 = v30;
      v15 = v29;
      if ( (v10 & 0x20) != 0 )
      {
        v12 += 4;
        LOBYTE(v10) = 0;
        v17 = 0LL;
        v13 = *(_DWORD *)v12;
        v27 = *(_DWORD *)v12;
      }
    }
  }
  return v11;
}
