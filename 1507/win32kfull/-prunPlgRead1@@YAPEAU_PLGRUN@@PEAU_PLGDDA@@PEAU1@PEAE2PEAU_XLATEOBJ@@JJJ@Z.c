/*
 * XREFs of ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CF0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00C5A20 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C00C5CC0 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
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
  bool v18; // zf
  int v19; // ecx
  struct _PLGDDA *v20; // rcx
  char v21; // si
  unsigned __int8 *v22; // r12
  int v23; // edx
  __int64 v24; // r15
  int v25; // ecx
  int v28; // [rsp+70h] [rbp+18h]
  int v29; // [rsp+78h] [rbp+20h]
  int v30; // [rsp+80h] [rbp+28h]
  int v31; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v10 = a6 & 0x1F;
  v11 = a2;
  v12 = &a3[4 * ((__int64)a6 >> 5)];
  v13 = *(_DWORD *)v12;
  v28 = *(_DWORD *)v12;
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
  v30 = v15;
  v31 = v14;
  v17 = v10;
  if ( a4 )
  {
    v21 = a8 & 0x1F;
    v22 = &a4[4 * ((__int64)a8 >> 5)];
    v23 = *(_DWORD *)v22;
    v29 = *(_DWORD *)v22;
    if ( v8 < a7 )
    {
      v24 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v23 & dword_1C02EE0C0[v24]) != 0 )
        {
          v18 = (v13 & dword_1C02EE0C0[v17]) == 0;
          v25 = v14;
          if ( !v18 )
            v25 = v15;
          *(_DWORD *)v11 = v25;
          prunPumpDDA(a1, v11);
        }
        vAdvXDDA(a1);
        ++v8;
        LOBYTE(v10) = v10 + 1;
        ++v17;
        ++v21;
        ++v24;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 0x20) != 0 )
        {
          v12 += 4;
          LOBYTE(v10) = 0;
          v17 = 0LL;
          v13 = *(_DWORD *)v12;
          v28 = *(_DWORD *)v12;
        }
        else
        {
          v13 = v28;
        }
        v23 = v29;
        v14 = v31;
        v15 = v30;
        if ( (v21 & 0x20) != 0 )
        {
          v22 += 4;
          v21 = 0;
          v24 = 0LL;
          v23 = *(_DWORD *)v22;
          v29 = *(_DWORD *)v22;
        }
      }
    }
  }
  else if ( v8 < a7 )
  {
    while ( 1 )
    {
      v18 = (v13 & dword_1C02EE0C0[v17]) == 0;
      v19 = v14;
      if ( !v18 )
        v19 = v15;
      *(_DWORD *)v11 = v19;
      prunPumpDDA(a1, v11);
      vAdvXDDA(v20);
      ++v8;
      LOBYTE(v10) = v10 + 1;
      ++v17;
      if ( v8 >= a7 )
        break;
      v13 = v28;
      v14 = v31;
      v15 = v30;
      if ( (v10 & 0x20) != 0 )
      {
        v12 += 4;
        LOBYTE(v10) = 0;
        v17 = 0LL;
        v13 = *(_DWORD *)v12;
        v28 = *(_DWORD *)v12;
      }
    }
  }
  return v11;
}
