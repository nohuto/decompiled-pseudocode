/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0003AD0
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00037C0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D2E80 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D2FD0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D31A0 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D3320 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D3500 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  _DWORD *v2; // r9
  int v3; // r8d
  unsigned int v4; // r11d
  int v5; // r10d
  __int64 v6; // rax
  unsigned int v7; // edi
  int i; // ebx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // r8d
  unsigned int v14; // edi
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // r11d
  unsigned int v20; // esi
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // [rsp+28h] [rbp+10h]
  __int64 v25; // [rsp+30h] [rbp+18h]
  __int64 v26; // [rsp+38h] [rbp+20h]

  v2 = (_DWORD *)((char *)a2 + 12);
  v3 = *((_DWORD *)a1 + 17);
  v25 = *(_QWORD *)((char *)a1 + 100);
  v4 = HIDWORD(*(_QWORD *)((char *)a1 + 108));
  v5 = *(_QWORD *)((char *)a1 + 108);
  v24 = *(_QWORD *)((char *)a1 + 116);
  v6 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v3;
  v26 = v6;
  if ( v3 < *((_DWORD *)a1 + 19) )
  {
    v14 = HIDWORD(v25);
    v15 = v25;
    do
    {
      if ( v15 < v5 )
      {
        *v2 = v15;
        v16 = v5 - v15;
      }
      else
      {
        *v2 = v5;
        v16 = v15 - v5;
      }
      v2[1] = v16;
      ++*((_DWORD *)a2 + 2);
      v15 += *((_DWORD *)a1 + 81);
      v14 += *((_DWORD *)a1 + 82);
      v17 = *((_DWORD *)a1 + 83);
      if ( v14 >= v17 )
      {
        ++v15;
        v14 -= v17;
      }
      v5 += *((_DWORD *)a1 + 84);
      v4 += *((_DWORD *)a1 + 85);
      v18 = *((_DWORD *)a1 + 86);
      if ( v4 >= v18 )
      {
        ++v5;
        v4 -= v18;
      }
      v2 += 2;
      ++v3;
    }
    while ( v3 < *((_DWORD *)a1 + 19) );
  }
  v7 = HIDWORD(v24);
  for ( i = v24; v3 < *((_DWORD *)a1 + 21); ++v3 )
  {
    if ( i < v5 )
    {
      *v2 = i;
      v9 = v5 - i;
    }
    else
    {
      *v2 = v5;
      v9 = i - v5;
    }
    v2[1] = v9;
    ++*((_DWORD *)a2 + 2);
    i += *((_DWORD *)a1 + 87);
    v7 += *((_DWORD *)a1 + 88);
    v10 = *((_DWORD *)a1 + 89);
    if ( v7 >= v10 )
    {
      ++i;
      v7 -= v10;
    }
    v5 += *((_DWORD *)a1 + 84);
    v4 += *((_DWORD *)a1 + 85);
    v11 = *((_DWORD *)a1 + 86);
    if ( v4 >= v11 )
    {
      ++v5;
      v4 -= v11;
    }
    v2 += 2;
  }
  if ( v3 < *((_DWORD *)a1 + 23) )
  {
    v19 = v26;
    v20 = HIDWORD(v26);
    do
    {
      if ( i < v19 )
      {
        *v2 = i;
        v21 = v19 - i;
      }
      else
      {
        *v2 = v19;
        v21 = i - v19;
      }
      v2[1] = v21;
      ++*((_DWORD *)a2 + 2);
      i += *((_DWORD *)a1 + 87);
      v7 += *((_DWORD *)a1 + 88);
      v22 = *((_DWORD *)a1 + 89);
      if ( v7 >= v22 )
      {
        ++i;
        v7 -= v22;
      }
      v19 += *((_DWORD *)a1 + 90);
      v20 += *((_DWORD *)a1 + 91);
      v23 = *((_DWORD *)a1 + 92);
      if ( v20 >= v23 )
      {
        ++v19;
        v20 -= v23;
      }
      v2 += 2;
      ++v3;
    }
    while ( v3 < *((_DWORD *)a1 + 23) );
  }
  v12 = v3 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v12;
  if ( !*(_DWORD *)a1 || v12 )
    return (struct _PLGRUN *)v2;
  if ( i >= v5 )
  {
    *v2 = v5;
    v2[1] = i - v5;
  }
  else
  {
    *v2 = i;
    v2[1] = v5 - i;
  }
  *((_DWORD *)a2 + 2) = 1;
  return (struct _PLGRUN *)(v2 + 2);
}
