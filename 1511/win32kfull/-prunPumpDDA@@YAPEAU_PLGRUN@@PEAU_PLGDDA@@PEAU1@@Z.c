/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0001308
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0001040 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CFDE0 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02CFF40 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D0110 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D02A0 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D0480 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  int v2; // r10d
  unsigned int v5; // r11d
  int v6; // r9d
  __int64 v7; // rax
  _DWORD *v8; // rdx
  unsigned int v9; // edi
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edi
  int v15; // ecx
  unsigned int v16; // esi
  int v17; // r11d
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  int v21; // r10d
  int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // [rsp+38h] [rbp+38h]
  __int64 v27; // [rsp+40h] [rbp+40h]
  __int64 v28; // [rsp+48h] [rbp+48h]

  v2 = *((_DWORD *)a1 + 17);
  v27 = *(_QWORD *)((char *)a1 + 100);
  v5 = HIDWORD(*(_QWORD *)((char *)a1 + 108));
  v6 = *(_QWORD *)((char *)a1 + 108);
  v26 = *(_QWORD *)((char *)a1 + 116);
  v7 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v2;
  v8 = (_DWORD *)((char *)a2 + 12);
  v28 = v7;
  if ( v2 < *((_DWORD *)a1 + 19) )
  {
    v9 = HIDWORD(v27);
    v10 = v27;
    do
    {
      if ( v10 >= v6 )
      {
        *v8 = v6;
        v11 = v10 - v6;
      }
      else
      {
        *v8 = v10;
        v11 = v6 - v10;
      }
      v8[1] = v11;
      ++*((_DWORD *)a2 + 2);
      v10 += *((_DWORD *)a1 + 81);
      v9 += *((_DWORD *)a1 + 82);
      v12 = *((_DWORD *)a1 + 83);
      if ( v9 >= v12 )
      {
        ++v10;
        v9 -= v12;
      }
      v6 += *((_DWORD *)a1 + 84);
      v5 += *((_DWORD *)a1 + 85);
      v13 = *((_DWORD *)a1 + 86);
      if ( v5 >= v13 )
      {
        ++v6;
        v5 -= v13;
      }
      v8 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 19) );
  }
  v14 = HIDWORD(v26);
  v15 = v26;
  while ( v2 < *((_DWORD *)a1 + 21) )
  {
    if ( v15 >= v6 )
    {
      *v8 = v6;
      v23 = v15 - v6;
    }
    else
    {
      *v8 = v15;
      v23 = v6 - v15;
    }
    v8[1] = v23;
    ++*((_DWORD *)a2 + 2);
    v15 += *((_DWORD *)a1 + 87);
    v14 += *((_DWORD *)a1 + 88);
    v24 = *((_DWORD *)a1 + 89);
    if ( v14 >= v24 )
    {
      ++v15;
      v14 -= v24;
    }
    v6 += *((_DWORD *)a1 + 84);
    v5 += *((_DWORD *)a1 + 85);
    v25 = *((_DWORD *)a1 + 86);
    if ( v5 >= v25 )
    {
      ++v6;
      v5 -= v25;
    }
    v8 += 2;
    ++v2;
  }
  if ( v2 < *((_DWORD *)a1 + 23) )
  {
    v16 = HIDWORD(v28);
    v17 = v28;
    do
    {
      if ( v15 >= v17 )
      {
        *v8 = v17;
        v18 = v15 - v17;
      }
      else
      {
        *v8 = v15;
        v18 = v17 - v15;
      }
      v8[1] = v18;
      ++*((_DWORD *)a2 + 2);
      v15 += *((_DWORD *)a1 + 87);
      v14 += *((_DWORD *)a1 + 88);
      v19 = *((_DWORD *)a1 + 89);
      if ( v14 >= v19 )
      {
        ++v15;
        v14 -= v19;
      }
      v17 += *((_DWORD *)a1 + 90);
      v16 += *((_DWORD *)a1 + 91);
      v20 = *((_DWORD *)a1 + 92);
      if ( v16 >= v20 )
      {
        ++v17;
        v16 -= v20;
      }
      v8 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 23) );
  }
  v21 = v2 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v21;
  if ( *(_DWORD *)a1 && !v21 )
  {
    if ( v15 >= v6 )
    {
      *v8 = v6;
      v8[1] = v15 - v6;
    }
    else
    {
      *v8 = v15;
      v8[1] = v6 - v15;
    }
    *((_DWORD *)a2 + 2) = 1;
    v8 += 2;
  }
  return (struct _PLGRUN *)v8;
}
