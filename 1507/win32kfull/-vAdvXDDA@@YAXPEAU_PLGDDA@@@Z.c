/*
 * XREFs of ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00C5A20
 * Callers:
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00013D0 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00C5980 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CEFA0 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CF0F0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CF2C0 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CF4A0 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdvXDDA(struct _PLGDDA *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  int v3; // r8d
  int v4; // eax
  unsigned int v5; // r8d
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // r8d
  unsigned int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edx
  unsigned int v26; // r8d
  unsigned int v27; // edx
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // r8d

  *((_DWORD *)a1 + 17) += *((_DWORD *)a1 + 33);
  *((_DWORD *)a1 + 18) += *((_DWORD *)a1 + 34);
  v1 = *((_DWORD *)a1 + 18);
  v2 = *((_DWORD *)a1 + 35);
  v3 = *((_DWORD *)a1 + 17);
  if ( v1 >= v2 )
  {
    *((_DWORD *)a1 + 18) = v1 - v2;
    v4 = v3 + 1;
    v5 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 17) = v4;
    *((_DWORD *)a1 + 25) += *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 94);
    v6 = *((_DWORD *)a1 + 26);
    if ( v6 >= v5 )
    {
      ++*((_DWORD *)a1 + 25);
      *((_DWORD *)a1 + 26) = v6 - v5;
    }
    *((_DWORD *)a1 + 27) += *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 97);
    v7 = *((_DWORD *)a1 + 28);
    v8 = *((_DWORD *)a1 + 98);
    if ( v7 >= v8 )
    {
      ++*((_DWORD *)a1 + 27);
      *((_DWORD *)a1 + 28) = v7 - v8;
    }
  }
  *((_DWORD *)a1 + 19) += *((_DWORD *)a1 + 36);
  *((_DWORD *)a1 + 20) += *((_DWORD *)a1 + 37);
  v9 = *((_DWORD *)a1 + 20);
  v10 = *((_DWORD *)a1 + 38);
  v11 = *((_DWORD *)a1 + 19);
  if ( v9 >= v10 )
  {
    *((_DWORD *)a1 + 20) = v9 - v10;
    v12 = v11 + 1;
    v13 = *((_DWORD *)a1 + 98);
    *((_DWORD *)a1 + 19) = v12;
    *((_DWORD *)a1 + 29) += *((_DWORD *)a1 + 96);
    *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 97);
    v14 = *((_DWORD *)a1 + 30);
    if ( v14 >= v13 )
    {
      ++*((_DWORD *)a1 + 29);
      *((_DWORD *)a1 + 30) = v14 - v13;
    }
  }
  *((_DWORD *)a1 + 21) += *((_DWORD *)a1 + 39);
  *((_DWORD *)a1 + 22) += *((_DWORD *)a1 + 40);
  v15 = *((_DWORD *)a1 + 22);
  v16 = *((_DWORD *)a1 + 41);
  v17 = *((_DWORD *)a1 + 21);
  if ( v15 >= v16 )
  {
    *((_DWORD *)a1 + 22) = v15 - v16;
    v18 = v17 + 1;
    v19 = *((_DWORD *)a1 + 95);
    *((_DWORD *)a1 + 21) = v18;
    *((_DWORD *)a1 + 31) += *((_DWORD *)a1 + 93);
    *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 94);
    v20 = *((_DWORD *)a1 + 32);
    if ( v20 >= v19 )
    {
      ++*((_DWORD *)a1 + 31);
      *((_DWORD *)a1 + 32) = v20 - v19;
    }
  }
  *((_DWORD *)a1 + 23) += *((_DWORD *)a1 + 42);
  *((_DWORD *)a1 + 24) += *((_DWORD *)a1 + 43);
  v21 = *((_DWORD *)a1 + 24);
  v22 = *((_DWORD *)a1 + 44);
  if ( v21 >= v22 )
  {
    ++*((_DWORD *)a1 + 23);
    *((_DWORD *)a1 + 24) = v21 - v22;
  }
  *((_DWORD *)a1 + 25) += *((_DWORD *)a1 + 57);
  *((_DWORD *)a1 + 26) += *((_DWORD *)a1 + 58);
  v23 = *((_DWORD *)a1 + 26);
  v24 = *((_DWORD *)a1 + 59);
  if ( v23 >= v24 )
  {
    ++*((_DWORD *)a1 + 25);
    *((_DWORD *)a1 + 26) = v23 - v24;
  }
  *((_DWORD *)a1 + 27) += *((_DWORD *)a1 + 60);
  *((_DWORD *)a1 + 28) += *((_DWORD *)a1 + 61);
  v25 = *((_DWORD *)a1 + 28);
  v26 = *((_DWORD *)a1 + 62);
  if ( v25 >= v26 )
  {
    ++*((_DWORD *)a1 + 27);
    *((_DWORD *)a1 + 28) = v25 - v26;
  }
  *((_DWORD *)a1 + 29) += *((_DWORD *)a1 + 63);
  *((_DWORD *)a1 + 30) += *((_DWORD *)a1 + 64);
  v27 = *((_DWORD *)a1 + 30);
  v28 = *((_DWORD *)a1 + 65);
  if ( v27 >= v28 )
  {
    ++*((_DWORD *)a1 + 29);
    *((_DWORD *)a1 + 30) = v27 - v28;
  }
  *((_DWORD *)a1 + 31) += *((_DWORD *)a1 + 66);
  *((_DWORD *)a1 + 32) += *((_DWORD *)a1 + 67);
  v29 = *((_DWORD *)a1 + 32);
  v30 = *((_DWORD *)a1 + 68);
  if ( v29 >= v30 )
  {
    ++*((_DWORD *)a1 + 31);
    *((_DWORD *)a1 + 32) = v29 - v30;
  }
}
