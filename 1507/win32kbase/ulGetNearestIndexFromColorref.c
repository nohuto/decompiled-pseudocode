/*
 * XREFs of ulGetNearestIndexFromColorref @ 0x1C0010300
 * Callers:
 *     GreGetNearestColor @ 0x1C0025760 (GreGetNearestColor.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00393F0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 * Callees:
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C003AF50 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 */

tagPALETTEENTRY __fastcall ulGetNearestIndexFromColorref(__int64 a1, __int64 a2, tagPALETTEENTRY a3, unsigned int a4)
{
  __int64 v5; // rdx
  tagPALETTEENTRY v6; // r8d
  unsigned __int16 v7; // r8
  __int64 v8; // r10
  tagPALETTEENTRY v9; // edx
  tagPALETTEENTRY result; // eax
  int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rdx
  unsigned int NearestFromPalentry; // eax
  unsigned int v15; // edx
  struct PALETTE *v16; // r9
  _QWORD *v17; // r10
  __int64 v18; // rcx
  struct PALETTE *v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+40h] [rbp+10h] BYREF
  __int64 v21; // [rsp+48h] [rbp+18h] BYREF
  tagPALETTEENTRY v22; // [rsp+50h] [rbp+20h]

  v21 = a2;
  v20 = a1;
  v22 = a3;
  if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v20, a1) && (*(_DWORD *)(v5 + 24) & 0x800) == 0 )
  {
    if ( (*(_DWORD *)&v6 & 0x1000000) == 0 )
    {
      if ( (*(_DWORD *)&v6 & 0x10FF0000) == 0x10FF0000 )
        return (unsigned int)v6.peRed < *(_DWORD *)(v5 + 28) ? (tagPALETTEENTRY)v6.peRed : 0;
      v22.peFlags = 0;
      v9 = v22;
      return (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v20, v9, a4);
    }
    if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v21, v5) )
    {
      v9 = *(tagPALETTEENTRY *)(*(_QWORD *)(v8 + 128)
                              + 4LL * (v7 & (unsigned int)-((unsigned int)v7 < *(_DWORD *)(v8 + 28))));
      return (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v20, v9, a4);
    }
    return 0;
  }
  if ( (*(_DWORD *)&v6 & 0x3000000) != 0 )
  {
    if ( !(unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v21, v5) )
      return 0;
    v22.peFlags = 0;
    v13 = (unsigned int)v22;
    if ( (v11 & 0x1000000) != 0 )
    {
      if ( *(unsigned int *)&v22 >= *(_DWORD *)(v12 + 28) )
        v13 = 0LL;
    }
    else
    {
      NearestFromPalentry = XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v21, v22, a4);
      v12 = v21;
      v13 = NearestFromPalentry;
    }
    if ( (struct PALETTE *)v12 == ppalDefault )
    {
      if ( (unsigned int)v13 >= 0xA )
        LODWORD(v13) = v13 + 236;
      return (tagPALETTEENTRY)v13;
    }
    if ( (unsigned int)HmgLockResultBase<DRVOBJ>::operator bool(&v20, v13) )
    {
      v18 = v17[10];
      if ( v18 )
        return (tagPALETTEENTRY)*(unsigned __int8 *)(v15 + v18 + 4);
    }
    else
    {
      v18 = v17[9];
      if ( v18 )
        return (tagPALETTEENTRY)*(unsigned __int8 *)(v15 + v18 + 4);
    }
    v6 = *(tagPALETTEENTRY *)(v17[16] + 4LL * v15);
    v22 = v6;
    if ( v6.peFlags == 2 )
      return (tagPALETTEENTRY)v6.peRed;
  }
  else
  {
    v16 = ppalDefault;
  }
  if ( (*(_DWORD *)&v6 & 0x10FF0000) == 0x10FF0000 )
    return (tagPALETTEENTRY)v6.peRed;
  v22.peFlags = 0;
  result = v22;
  if ( v22 == 0xFFFFFF )
  {
    result = (tagPALETTEENTRY)19;
LABEL_35:
    *(_DWORD *)&result += 236;
    return result;
  }
  if ( v22 )
  {
    v19 = v16;
    result = (tagPALETTEENTRY)XEPALOBJ::ulGetNearestFromPalentry((XEPALOBJ *)&v19, v22, a4);
  }
  if ( *(unsigned int *)&result >= 0xA )
    goto LABEL_35;
  return result;
}
