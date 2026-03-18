/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C00C5CC0
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

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  _DWORD *v2; // r9
  int v3; // r8d
  int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r11d
  int v8; // r10d
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // r11d
  int i; // r10d
  int v14; // ebx
  unsigned int v15; // esi
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // r8d
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // [rsp+20h] [rbp+8h]
  __int64 v25; // [rsp+28h] [rbp+10h]
  __int64 v26; // [rsp+30h] [rbp+18h]
  __int64 v27; // [rsp+38h] [rbp+20h]

  v2 = (_DWORD *)((char *)a2 + 12);
  v3 = *((_DWORD *)a1 + 17);
  v26 = *(_QWORD *)((char *)a1 + 100);
  v24 = *(_QWORD *)((char *)a1 + 108);
  v4 = v24;
  v25 = *(_QWORD *)((char *)a1 + 116);
  v5 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v3;
  v6 = HIDWORD(v24);
  v27 = v5;
  if ( v3 < *((_DWORD *)a1 + 19) )
  {
    v7 = HIDWORD(v26);
    v8 = v26;
    do
    {
      if ( v8 >= v4 )
      {
        *v2 = v4;
        v9 = v8 - v4;
      }
      else
      {
        *v2 = v8;
        v9 = v4 - v8;
      }
      v2[1] = v9;
      ++*((_DWORD *)a2 + 2);
      v8 += *((_DWORD *)a1 + 81);
      v7 += *((_DWORD *)a1 + 82);
      v10 = *((_DWORD *)a1 + 83);
      if ( v7 >= v10 )
      {
        ++v8;
        v7 -= v10;
      }
      v4 += *((_DWORD *)a1 + 84);
      v6 += *((_DWORD *)a1 + 85);
      v11 = *((_DWORD *)a1 + 86);
      if ( v6 >= v11 )
      {
        ++v4;
        v6 -= v11;
      }
      v2 += 2;
      ++v3;
    }
    while ( v3 < *((_DWORD *)a1 + 19) );
  }
  v12 = HIDWORD(v25);
  for ( i = v25; v3 < *((_DWORD *)a1 + 21); ++v3 )
  {
    if ( i < v4 )
    {
      *v2 = i;
      v21 = v4 - i;
    }
    else
    {
      *v2 = v4;
      v21 = i - v4;
    }
    v2[1] = v21;
    ++*((_DWORD *)a2 + 2);
    i += *((_DWORD *)a1 + 87);
    v12 += *((_DWORD *)a1 + 88);
    v22 = *((_DWORD *)a1 + 89);
    if ( v12 >= v22 )
    {
      ++i;
      v12 -= v22;
    }
    v4 += *((_DWORD *)a1 + 84);
    v6 += *((_DWORD *)a1 + 85);
    v23 = *((_DWORD *)a1 + 86);
    if ( v6 >= v23 )
    {
      ++v4;
      v6 -= v23;
    }
    v2 += 2;
  }
  if ( v3 < *((_DWORD *)a1 + 23) )
  {
    v14 = v27;
    v15 = HIDWORD(v27);
    do
    {
      if ( i >= v14 )
      {
        *v2 = v14;
        v16 = i - v14;
      }
      else
      {
        *v2 = i;
        v16 = v14 - i;
      }
      v2[1] = v16;
      ++*((_DWORD *)a2 + 2);
      i += *((_DWORD *)a1 + 87);
      v12 += *((_DWORD *)a1 + 88);
      v17 = *((_DWORD *)a1 + 89);
      if ( v12 >= v17 )
      {
        ++i;
        v12 -= v17;
      }
      v14 += *((_DWORD *)a1 + 90);
      v15 += *((_DWORD *)a1 + 91);
      v18 = *((_DWORD *)a1 + 92);
      if ( v15 >= v18 )
      {
        ++v14;
        v15 -= v18;
      }
      v2 += 2;
      ++v3;
    }
    while ( v3 < *((_DWORD *)a1 + 23) );
  }
  v19 = v3 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v19;
  if ( !*(_DWORD *)a1 || v19 )
    return (struct _PLGRUN *)v2;
  if ( i >= v4 )
  {
    *v2 = v4;
    v2[1] = i - v4;
  }
  else
  {
    *v2 = i;
    v2[1] = v4 - i;
  }
  *((_DWORD *)a2 + 2) = 1;
  return (struct _PLGRUN *)(v2 + 2);
}
