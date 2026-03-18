/*
 * XREFs of ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00393F0
 * Callers:
 *     bDynamicModeChange @ 0x1C005C7A4 (bDynamicModeChange.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0063F40 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00B8D18 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C000D4A4 (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     rgbFromColorref @ 0x1C000F530 (rgbFromColorref.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0010300 (ulGetNearestIndexFromColorref.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0017C10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C003AF30 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00AF1A0 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall EBRUSHOBJ::vInitBrush(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // r8d
  tagPALETTEENTRY v18; // r10d
  void *v19; // r12
  unsigned int v20; // eax
  __int64 result; // rax
  int v22; // edx
  unsigned int v23; // r9d
  __int64 v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rsi
  volatile signed __int32 *v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // eax
  int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // ecx
  unsigned int MatchingIndexFromColorref; // eax
  unsigned int v35; // r15d
  __int64 v36; // rcx
  volatile signed __int32 *v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  int v41; // ecx
  HBITMAP IcmDIB; // rax
  unsigned int v43; // eax
  _DWORD *v44; // rcx
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // ecx
  tagPALETTEENTRY NearestIndexFromColorref; // eax
  __int64 v49; // rbx
  tagPALETTEENTRY v50; // esi
  int v51; // edi
  __int64 v52; // rcx
  unsigned int v53; // r8d
  unsigned int v54; // eax
  unsigned int v55; // r8d
  __int64 v56; // rcx
  unsigned int v57; // [rsp+78h] [rbp+10h]
  unsigned int v58; // [rsp+80h] [rbp+18h]

  v7 = (_DWORD *)a5;
  v8 = a4;
  if ( !a5 || (*(_DWORD *)(a5 + 24) & 0x800) != 0 )
  {
    v13 = 1;
  }
  else
  {
    v12 = *(_QWORD *)(a5 + 136);
    if ( v12 == a5 )
      v13 = *(_DWORD *)(a5 + 32);
    else
      v13 = *(_DWORD *)(v12 + 32);
  }
  v14 = a6;
  *((_QWORD *)a1 + 10) = a6;
  v15 = *(_QWORD *)(a2 + 80);
  v16 = *(_DWORD *)(a2 + 112);
  v17 = *(_DWORD *)(v15 + 40);
  v18 = *(tagPALETTEENTRY *)(v15 + 32);
  v19 = *(void **)(v15 + 112);
  LODWORD(v15) = a1[33];
  v57 = v17;
  LODWORD(a6) = v18;
  if ( *(_DWORD *)(a3 + 52) == (_DWORD)v15
    && ((v20 = a1[32], (v20 & 1) == 0) || a1[12] == v17)
    && ((v20 & 2) == 0 || a1[13] == v18) )
  {
    result = *(_QWORD *)(a4 + 136);
    if ( result == a4 )
      v22 = *(_DWORD *)(a4 + 32);
    else
      v22 = *(_DWORD *)(result + 32);
    v23 = a7;
    if ( (struct BRUSH *)a3 != gpbrDCBrush
      && v22 == a1[11]
      && v13 == a1[10]
      && (struct BRUSH *)a3 != gpbrDCPen
      && a1[18] == v16
      && *((void **)a1 + 8) == v19
      && a7 == a1[34] )
    {
      return result;
    }
  }
  else
  {
    v23 = a7;
  }
  a1[32] = *(_DWORD *)(a3 + 48);
  *((_QWORD *)a1 + 15) = a3;
  a1[33] = *(_DWORD *)(a3 + 52);
  a1[12] = v17;
  a1[13] = (unsigned int)v18;
  v24 = *(_QWORD *)(v8 + 136);
  if ( v24 == v8 )
    v25 = *(_DWORD *)(v8 + 32);
  else
    v25 = *(_DWORD *)(v24 + 32);
  a1[11] = v25;
  a1[10] = v13;
  a1[34] = v23;
  v58 = 0;
  a1[4] = 0;
  if ( (v16 & 7) == 0 )
    goto LABEL_22;
  v40 = a1[32];
  if ( (v40 & 0x20030) != 0 )
  {
    v41 = v16 & 1;
    if ( (v16 & 1) == 0
      || (v40 & 0x20010) != 0
      && ((v40 & 3) != 0 || (struct BRUSH *)a3 == gpbrDCBrush || (struct BRUSH *)a3 == gpbrDCPen) )
    {
      goto LABEL_96;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x400) != 0 )
    {
      if ( !v19 || (*(_DWORD *)(*(_QWORD *)(a2 + 80) + 8LL) & 0x80000) != 0 )
        goto LABEL_96;
    }
    else if ( !v19 || (*(_DWORD *)(*(_QWORD *)(a2 + 80) + 8LL) & 0x40000) != 0 )
    {
      goto LABEL_96;
    }
LABEL_22:
    *((_QWORD *)a1 + 8) = 0LL;
    a1[18] = 0;
    goto LABEL_23;
  }
  if ( (v40 & 0x80u) == 0 )
    goto LABEL_22;
  v41 = v16 & 1;
  if ( (v16 & 1) == 0 || !v19 )
    goto LABEL_96;
  IcmDIB = BRUSH::hFindIcmDIB((BRUSH *)a3, v19);
  v7 = (_DWORD *)a5;
  v8 = a4;
  v17 = v57;
  v23 = a7;
  v18 = (tagPALETTEENTRY)a6;
  if ( !IcmDIB )
    goto LABEL_22;
  v41 = v16 & 1;
LABEL_96:
  a1[18] = v16;
  *((_QWORD *)a1 + 8) = v19;
  if ( (v16 & 5) != 0 )
  {
    a1[4] |= 2u;
  }
  else if ( (v16 & 2) != 0 )
  {
    a1[4] |= 1u;
  }
  if ( v41 && v19 && (v16 & 0x10000000) != 0 && (a1[32] & 0x10) != 0 )
  {
    a1[4] |= 4u;
    v58 = 1;
  }
  else
  {
    v58 = 0;
  }
LABEL_23:
  v26 = *(_QWORD *)(v14 + 48);
  if ( !v26 )
    v26 = *(_QWORD *)(a2 + 48);
  v27 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 12) = v8;
  *((_QWORD *)a1 + 11) = v7;
  *((_QWORD *)a1 + 13) = *(_QWORD *)(v26 + 1832);
  a1[28] = *(_DWORD *)(v26 + 2132);
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27, 0xFFFFFFFF) == 1 )
    {
      RBRUSH::vFreeOrCacheRBrush(v27, 1);
      v17 = v57;
      v23 = a7;
      v18 = (tagPALETTEENTRY)a6;
    }
    v7 = (_DWORD *)a5;
    v8 = a4;
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v28 = *((_QWORD *)a1 + 1);
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28 - 16), 0xFFFFFFFF) == 1 )
    {
      RBRUSH::vFreeOrCacheRBrush((_DWORD *)(v28 - 16), 0);
      v17 = v57;
      v23 = a7;
      v18 = (tagPALETTEENTRY)a6;
    }
    v7 = (_DWORD *)a5;
    v8 = a4;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  v29 = a1[32];
  v30 = v29 & 0x10;
  if ( (v29 & 0x10) == 0 )
  {
    if ( (v29 & 0x20) == 0 )
      goto LABEL_33;
    v46 = a1[18];
    v47 = *(_DWORD *)(a3 + 84);
    a1[6] = v47;
    if ( (v46 & 1) == 0 )
      goto LABEL_33;
    a1[35] = v47;
    v44 = *(_DWORD **)(a2 + 80);
    if ( (*(_DWORD *)(a3 + 48) & 0x400) == 0 )
    {
      if ( (v44[2] & 0x40000) == 0 )
        goto LABEL_33;
      goto LABEL_119;
    }
LABEL_114:
    if ( (v44[2] & 0x80000) == 0 )
      goto LABEL_33;
    v45 = v44[35];
    goto LABEL_120;
  }
  if ( (v29 & 1) != 0 )
  {
    a1[6] = a1[12];
    if ( (a1[18] & 1) != 0 )
      a1[35] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 44LL);
  }
  else if ( (v29 & 2) != 0 )
  {
    a1[6] = a1[13];
    if ( (a1[18] & 1) != 0 )
      a1[35] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 36LL);
  }
  else if ( (struct BRUSH *)a3 == gpbrDCBrush )
  {
    v39 = a1[18];
    a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 48LL);
    if ( (v39 & 1) != 0 )
      a1[35] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 52LL);
  }
  else
  {
    if ( (struct BRUSH *)a3 != gpbrDCPen )
    {
      v31 = a1[18];
      v32 = *(_DWORD *)(a3 + 84);
      a1[6] = v32;
      if ( (v31 & 1) == 0 )
        goto LABEL_33;
      a1[35] = v32;
      v44 = *(_DWORD **)(a2 + 80);
      if ( (*(_DWORD *)(a3 + 48) & 0x400) == 0 )
      {
        if ( (v44[2] & 0x40000) == 0 )
          goto LABEL_33;
LABEL_119:
        v45 = v44[34];
LABEL_120:
        a1[6] = v45;
        goto LABEL_33;
      }
      goto LABEL_114;
    }
    v43 = a1[18];
    a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
    if ( (v43 & 1) != 0 )
      a1[35] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 60LL);
  }
LABEL_33:
  result = *(unsigned int *)(a3 + 108);
  if ( (_DWORD)result != -1 )
  {
    v33 = *(_DWORD *)(a3 + 48);
    if ( ((v33 & 1) == 0 || (_DWORD)result == v17) && ((v33 & 2) == 0 || *(_DWORD *)(a3 + 112) == v18) )
    {
      result = a1[11];
      if ( *(_DWORD *)(a3 + 116) == (_DWORD)result )
      {
        result = a1[10];
        if ( *(_DWORD *)(a3 + 120) == (_DWORD)result
          && *(_QWORD *)(a3 + 136) == v26
          && (struct BRUSH *)a3 != gpbrDCBrush
          && (struct BRUSH *)a3 != gpbrDCPen )
        {
          if ( v33 < 0 )
          {
            *a1 = *(_DWORD *)(a3 + 128);
            result = *(unsigned int *)(a3 + 144);
            a1[7] = result;
          }
          else
          {
            v37 = *(volatile signed __int32 **)(a3 + 128);
            if ( (v33 & 0x40000000) != 0 )
              *((_QWORD *)a1 + 4) = v37;
            else
              *((_QWORD *)a1 + 1) = v37 + 4;
            _InterlockedIncrement(v37);
            *a1 = -1;
            result = *(unsigned int *)(a3 + 144);
            a1[7] = result;
          }
          return result;
        }
      }
    }
  }
  if ( !v30 )
  {
    a1[7] = -1;
    *a1 = -1;
    return result;
  }
  result = v58;
  if ( v58 )
  {
    v35 = a1[6];
    a1[7] = v35;
    *a1 = v35;
  }
  else
  {
    if ( (*(_DWORD *)(v26 + 1848) & 0x800000) != 0 && v23 )
    {
      v35 = a1[6];
      a1[7] = v35;
      *a1 = -1;
      goto LABEL_128;
    }
    MatchingIndexFromColorref = ulGetMatchingIndexFromColorref(v7, v8, a1[6]);
    v8 = a4;
    v7 = (_DWORD *)a5;
    v35 = a1[6];
    v36 = a5;
    *a1 = MatchingIndexFromColorref;
    a1[7] = rgbFromColorref(v36, a4, v35);
    result = 0LL;
  }
  if ( *a1 == -1 && !(_DWORD)result )
  {
    v23 = a7;
    v18 = (tagPALETTEENTRY)a6;
LABEL_128:
    if ( ((a1[32] & 4) != 0 || (*(_DWORD *)(v26 + 1848) & 0x800000) != 0) && v23 )
    {
      if ( (!v7 || v7 == *(_DWORD **)(v26 + 1832)) && (result = *(unsigned int *)(v26 + 1848), (result & 0x20) != 0)
        || (result = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a5), (_DWORD)result) && (*(_DWORD *)(v26 + 1848) & 0x400) != 0 )
      {
        a1[7] = v35;
        return result;
      }
    }
    if ( *(_DWORD *)(v14 + 96) == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref((__int64)v7, v8, v18, 0);
      v49 = a5;
      v50 = NearestIndexFromColorref;
      v51 = a6;
      v52 = a5;
      v53 = a6;
      *a1 = (unsigned int)NearestIndexFromColorref;
      result = rgbFromColorref(v52, a4, v53);
      a1[7] = result;
      if ( v51 != a1[6] )
      {
        *a1 = 1 - *(_DWORD *)&v50;
        result = *(_QWORD *)(v49 + 128);
        a1[7] = *(_DWORD *)(result + 4LL * (unsigned int)(1 - *(_DWORD *)&v50));
      }
    }
    else
    {
      v54 = (unsigned int)ulGetNearestIndexFromColorref((__int64)v7, v8, (tagPALETTEENTRY)v35, 0);
      v55 = a1[6];
      v56 = a5;
      *a1 = v54;
      result = rgbFromColorref(v56, a4, v55);
      a1[7] = result;
    }
  }
  if ( !*(_DWORD *)(a3 + 104) && !_InterlockedExchange((volatile __int32 *)(a3 + 104), 1) )
  {
    *(_DWORD *)(a3 + 112) = a1[13];
    *(_DWORD *)(a3 + 116) = a1[11];
    *(_DWORD *)(a3 + 120) = a1[10];
    *(_QWORD *)(a3 + 128) = *a1;
    v38 = a1[7];
    *(_DWORD *)(a3 + 48) |= 0x80000000;
    *(_DWORD *)(a3 + 144) = v38;
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a3 + 108), a1[12]);
  }
  return result;
}
