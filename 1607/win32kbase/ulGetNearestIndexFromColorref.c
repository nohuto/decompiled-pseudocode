/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1C0076F80
 * Callers:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0025670 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0027218 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C002725C (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 */

unsigned int __fastcall ulGetNearestIndexFromColorref(
        struct PALETTE *a1,
        struct PALETTE *a2,
        tagPALETTEENTRY a3,
        int a4)
{
  __int64 v5; // rdx
  tagPALETTEENTRY v6; // r8d
  unsigned __int16 v7; // r8
  __int64 v8; // r10
  tagPALETTEENTRY v9; // edx
  unsigned int result; // eax
  int v11; // r8d
  struct PALETTE *v12; // r10
  tagPALETTEENTRY v13; // edx
  unsigned int NearestFromPalentry; // eax
  unsigned int v15; // edx
  struct PALETTE *v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // rcx
  struct PALETTE *v19; // [rsp+20h] [rbp-10h] BYREF
  struct PALETTE *v20; // [rsp+40h] [rbp+10h] BYREF
  struct PALETTE *v21; // [rsp+48h] [rbp+18h] BYREF
  tagPALETTEENTRY v22; // [rsp+50h] [rbp+20h]

  v21 = a2;
  v20 = a1;
  v22 = a3;
  if ( HmgLockResultBase<DRVOBJ>::operator bool(&v20) && (*(_DWORD *)(v5 + 24) & 0x800) == 0 )
  {
    if ( (*(_DWORD *)&v6 & 0x1000000) == 0 )
    {
      if ( (*(_DWORD *)&v6 & 0x10FF0000) == 0x10FF0000 )
        return (unsigned int)v6.peRed < *(_DWORD *)(v5 + 28) ? v6.peRed : 0;
      v22.peFlags = 0;
      v9 = v22;
      return XEPALOBJ::ulGetNearestFromPalentry(&v20, v9, a4);
    }
    if ( HmgLockResultBase<DRVOBJ>::operator bool(&v21) )
    {
      v9 = *(tagPALETTEENTRY *)(*(_QWORD *)(v8 + 120)
                              + 4LL * (v7 & (unsigned int)-((unsigned int)v7 < *(_DWORD *)(v8 + 28))));
      return XEPALOBJ::ulGetNearestFromPalentry(&v20, v9, a4);
    }
    return 0;
  }
  if ( (*(_DWORD *)&v6 & 0x3000000) != 0 )
  {
    if ( !HmgLockResultBase<DRVOBJ>::operator bool(&v21) )
      return 0;
    v22.peFlags = 0;
    v13 = v22;
    if ( (v11 & 0x1000000) != 0 )
    {
      if ( *(unsigned int *)&v22 >= *((_DWORD *)v12 + 7) )
        v13 = 0;
    }
    else
    {
      NearestFromPalentry = XEPALOBJ::ulGetNearestFromPalentry(&v21, v22, a4);
      v12 = v21;
      v13 = (tagPALETTEENTRY)NearestFromPalentry;
    }
    if ( v12 == (struct PALETTE *)WPP_MAIN_CB.DeviceQueue.32 )
    {
      if ( *(unsigned int *)&v13 >= 0xA )
        *(_DWORD *)&v13 += 236;
      return (unsigned int)v13;
    }
    if ( HmgLockResultBase<DRVOBJ>::operator bool(&v20) )
    {
      v18 = v17[10];
      if ( v18 )
        return *(unsigned __int8 *)(v15 + v18 + 4);
    }
    else
    {
      v18 = v17[9];
      if ( v18 )
        return *(unsigned __int8 *)(v15 + v18 + 4);
    }
    v6 = *(tagPALETTEENTRY *)(v17[15] + 4LL * v15);
    v22 = v6;
    if ( v6.peFlags == 2 )
      return v6.peRed;
  }
  else
  {
    v16 = (struct PALETTE *)WPP_MAIN_CB.DeviceQueue.1;
  }
  if ( (*(_DWORD *)&v6 & 0x10FF0000) == 0x10FF0000 )
    return v6.peRed;
  v22.peFlags = 0;
  result = (unsigned int)v22;
  if ( v22 == 0xFFFFFF )
  {
    result = 19;
LABEL_35:
    result += 236;
    return result;
  }
  if ( v22 )
  {
    v19 = v16;
    result = XEPALOBJ::ulGetNearestFromPalentry(&v19, v22, a4);
  }
  if ( result >= 0xA )
    goto LABEL_35;
  return result;
}
