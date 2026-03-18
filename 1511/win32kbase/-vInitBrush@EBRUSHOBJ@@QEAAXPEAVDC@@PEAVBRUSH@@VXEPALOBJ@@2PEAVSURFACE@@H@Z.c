/*
 * XREFs of ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005BCB0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C0059E84 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C0023794 (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     rgbFromColorref @ 0x1C005C0E0 (rgbFromColorref.c)
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C005C120 (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005C290 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ulGetNearestIndexFromColorref @ 0x1C00729D0 (ulGetNearestIndexFromColorref.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00B2F40 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 EBRUSHOBJ::vInitBrush(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r10d
  unsigned int v14; // r11d
  void *v15; // r8
  unsigned int v16; // eax
  __int64 result; // rax
  int v18; // edx
  unsigned int v19; // r12d
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rdi
  volatile signed __int32 *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  int v26; // r8d
  unsigned int v27; // eax
  unsigned int v28; // ecx
  int v29; // edx
  unsigned int MatchingIndexFromColorref; // eax
  unsigned int v31; // r12d
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // r12d
  bool v38; // zf
  HBITMAP IcmDIB; // rax
  volatile signed __int32 *v40; // rcx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  _DWORD *v43; // rcx
  unsigned int v44; // eax
  int v45; // ecx
  unsigned int NearestIndexFromColorref; // eax
  __int64 v47; // rbx
  __int64 v48; // rcx
  unsigned int v49; // edi
  unsigned int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rcx
  unsigned int v53; // [rsp+20h] [rbp-18h]
  void *v54; // [rsp+28h] [rbp-10h]
  unsigned int v55; // [rsp+80h] [rbp+48h]
  unsigned int v57; // [rsp+90h] [rbp+58h]
  __int64 v59; // [rsp+A0h] [rbp+68h] BYREF
  va_list va; // [rsp+A0h] [rbp+68h]
  __int64 v61; // [rsp+A8h] [rbp+70h]
  __int64 v62; // [rsp+B0h] [rbp+78h]
  va_list va1; // [rsp+B8h] [rbp+80h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v59 = va_arg(va1, _QWORD);
  v61 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, _QWORD);
  v4 = v59;
  v5 = a4;
  if ( !v59 || (*(_DWORD *)(v59 + 24) & 0x800) != 0 )
  {
    v10 = 1;
  }
  else
  {
    v9 = *(_QWORD *)(v59 + 136);
    if ( v9 == v59 )
      v10 = *(_DWORD *)(v59 + 32);
    else
      v10 = *(_DWORD *)(v9 + 32);
  }
  *((_QWORD *)a1 + 10) = v61;
  v11 = *(_QWORD *)(a2 + 80);
  v12 = *(_DWORD *)(a2 + 112);
  v13 = *(_DWORD *)(v11 + 40);
  v14 = *(_DWORD *)(v11 + 32);
  v15 = *(void **)(v11 + 112);
  v53 = v13;
  v57 = v14;
  v54 = v15;
  if ( *(_DWORD *)(a3 + 52) == a1[33]
    && ((v16 = a1[32], (v16 & 1) == 0) || a1[12] == v13)
    && ((v16 & 2) == 0 || a1[13] == v14) )
  {
    result = *(_QWORD *)(v5 + 136);
    if ( result == v5 )
      v18 = *(_DWORD *)(v5 + 32);
    else
      v18 = *(_DWORD *)(result + 32);
    v19 = v62;
    if ( (struct BRUSH *)a3 != gpbrDCBrush
      && v18 == a1[11]
      && v10 == a1[10]
      && (struct BRUSH *)a3 != gpbrDCPen
      && a1[18] == v12
      && *((void **)a1 + 8) == v15
      && (_DWORD)v62 == a1[34] )
    {
      return result;
    }
  }
  else
  {
    v19 = v62;
  }
  a1[32] = *(_DWORD *)(a3 + 48);
  *((_QWORD *)a1 + 15) = a3;
  a1[33] = *(_DWORD *)(a3 + 52);
  a1[12] = v13;
  a1[13] = v14;
  v20 = *(_QWORD *)(v5 + 136);
  if ( v20 == v5 )
    v21 = *(_DWORD *)(v5 + 32);
  else
    v21 = *(_DWORD *)(v20 + 32);
  v55 = 0;
  a1[4] = 0;
  a1[11] = v21;
  a1[10] = v10;
  a1[34] = v19;
  if ( (v12 & 7) == 0 )
    goto LABEL_22;
  v36 = a1[32];
  if ( (v36 & 0x20030) != 0 )
  {
    v37 = v12 & 1;
    if ( (v12 & 1) == 0
      || (v36 & 0x20010) != 0
      && ((v36 & 3) != 0 || (struct BRUSH *)a3 == gpbrDCBrush || (struct BRUSH *)a3 == gpbrDCPen) )
    {
      goto LABEL_97;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x400) != 0 )
    {
      if ( v15 )
      {
        v38 = (*(_DWORD *)(*(_QWORD *)(a2 + 80) + 8LL) & 0x80000) == 0;
        goto LABEL_88;
      }
    }
    else if ( v15 )
    {
      v38 = (*(_DWORD *)(*(_QWORD *)(a2 + 80) + 8LL) & 0x40000) == 0;
LABEL_88:
      if ( !v38 )
        goto LABEL_97;
LABEL_22:
      a1[18] = 0;
      *((_QWORD *)a1 + 8) = 0LL;
      goto LABEL_23;
    }
  }
  else
  {
    if ( (v36 & 0x80u) == 0 )
      goto LABEL_22;
    v37 = v12 & 1;
    if ( (v12 & 1) == 0 || !v15 )
      goto LABEL_97;
    IcmDIB = BRUSH::hFindIcmDIB((BRUSH *)a3, v15);
    v4 = v59;
    v5 = a4;
    if ( !IcmDIB )
      goto LABEL_22;
    v15 = v54;
  }
LABEL_97:
  a1[18] = v12;
  *((_QWORD *)a1 + 8) = v15;
  if ( (v12 & 5) != 0 )
  {
    a1[4] |= 2u;
  }
  else if ( (v12 & 2) != 0 )
  {
    a1[4] |= 1u;
  }
  if ( v37 && v15 && (v12 & 0x10000000) != 0 && (a1[32] & 0x10) != 0 )
  {
    a1[4] |= 4u;
    v55 = 1;
  }
  else
  {
    v55 = 0;
  }
LABEL_23:
  v22 = *(_QWORD *)(v61 + 48);
  if ( !v22 )
    v22 = *(_QWORD *)(a2 + 48);
  v23 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 12) = v5;
  *((_QWORD *)a1 + 11) = v4;
  *((_QWORD *)a1 + 13) = *(_QWORD *)(v22 + 1832);
  a1[28] = *(_DWORD *)(v22 + 2132);
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v23, 1LL);
    *((_QWORD *)a1 + 4) = 0LL;
    v4 = v59;
    v5 = a4;
  }
  v24 = *((_QWORD *)a1 + 1);
  if ( v24 )
  {
    v40 = (volatile signed __int32 *)(v24 - 16);
    if ( _InterlockedExchangeAdd(v40, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v40, 0LL);
    *((_QWORD *)a1 + 1) = 0LL;
    v4 = v59;
    v5 = a4;
  }
  v25 = a1[32];
  v26 = v25 & 0x10;
  if ( (v25 & 0x10) != 0 )
  {
    if ( (v25 & 1) != 0 )
    {
      a1[6] = a1[12];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_33;
      v41 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 44LL);
    }
    else if ( (v25 & 2) != 0 )
    {
      a1[6] = a1[13];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_33;
      v41 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 36LL);
    }
    else if ( (struct BRUSH *)a3 == gpbrDCBrush )
    {
      v35 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 48LL);
      if ( (v35 & 1) == 0 )
        goto LABEL_33;
      v41 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 52LL);
    }
    else
    {
      if ( (struct BRUSH *)a3 != gpbrDCPen )
        goto LABEL_32;
      v42 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
      if ( (v42 & 1) == 0 )
        goto LABEL_33;
      v41 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 60LL);
    }
    a1[35] = v41;
    goto LABEL_33;
  }
  if ( (v25 & 0x20) == 0 )
    goto LABEL_33;
LABEL_32:
  v27 = a1[18];
  v28 = *(_DWORD *)(a3 + 84);
  a1[6] = v28;
  if ( (v27 & 1) == 0 )
    goto LABEL_33;
  a1[35] = v28;
  v43 = *(_DWORD **)(a2 + 80);
  if ( (*(_DWORD *)(a3 + 48) & 0x400) != 0 )
  {
    if ( (v43[2] & 0x80000) == 0 )
      goto LABEL_33;
    v44 = v43[35];
  }
  else
  {
    if ( (v43[2] & 0x40000) == 0 )
      goto LABEL_33;
    v44 = v43[34];
  }
  a1[6] = v44;
LABEL_33:
  result = *(unsigned int *)(a3 + 108);
  if ( (_DWORD)result != -1 )
  {
    v29 = *(_DWORD *)(a3 + 48);
    if ( (v29 & 1) == 0 || (_DWORD)result == v53 )
    {
      if ( (v29 & 2) == 0 || (result = v57, *(_DWORD *)(a3 + 112) == v57) )
      {
        result = a1[11];
        if ( *(_DWORD *)(a3 + 116) == (_DWORD)result )
        {
          result = a1[10];
          if ( *(_DWORD *)(a3 + 120) == (_DWORD)result
            && *(_QWORD *)(a3 + 136) == v22
            && (struct BRUSH *)a3 != gpbrDCBrush
            && (struct BRUSH *)a3 != gpbrDCPen )
          {
            if ( v29 < 0 )
            {
              *a1 = *(_DWORD *)(a3 + 128);
            }
            else
            {
              v33 = *(volatile signed __int32 **)(a3 + 128);
              if ( (v29 & 0x40000000) != 0 )
                *((_QWORD *)a1 + 4) = v33;
              else
                *((_QWORD *)a1 + 1) = v33 + 4;
              _InterlockedAdd(v33, 1u);
              *a1 = -1;
            }
            result = *(unsigned int *)(a3 + 144);
            a1[7] = result;
            return result;
          }
        }
      }
    }
  }
  if ( !v26 )
  {
    a1[7] = -1;
    *a1 = -1;
    return result;
  }
  result = v55;
  if ( v55 )
  {
    v31 = a1[6];
    a1[7] = v31;
    *a1 = v31;
  }
  else
  {
    if ( (*(_DWORD *)(v22 + 1848) & 0x800000) != 0 )
    {
      v45 = v62;
      if ( (_DWORD)v62 )
      {
        v31 = a1[6];
        a1[7] = v31;
        *a1 = -1;
        goto LABEL_126;
      }
    }
    MatchingIndexFromColorref = ulGetMatchingIndexFromColorref(v4, v5, a1[6]);
    v5 = a4;
    v4 = v59;
    v31 = a1[6];
    v32 = v59;
    *a1 = MatchingIndexFromColorref;
    a1[7] = rgbFromColorref(v32, a4, v31);
    result = 0LL;
  }
  if ( *a1 == -1 && !(_DWORD)result )
  {
    v45 = v62;
LABEL_126:
    if ( ((a1[32] & 4) != 0 || (*(_DWORD *)(v22 + 1848) & 0x800000) != 0) && v45 )
    {
      if ( (!v4 || v4 == *(_QWORD *)(v22 + 1832)) && (result = *(unsigned int *)(v22 + 1848), (result & 0x20) != 0)
        || (result = XEPALOBJ::bIsMonochrome((XEPALOBJ *)va), (_DWORD)result) && (*(_DWORD *)(v22 + 1848) & 0x400) != 0 )
      {
        a1[7] = v31;
        return result;
      }
    }
    if ( *(_DWORD *)(v61 + 96) == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v4, v5, v57);
      v47 = v59;
      v48 = v59;
      v49 = NearestIndexFromColorref;
      *a1 = NearestIndexFromColorref;
      result = rgbFromColorref(v48, a4, v57);
      a1[7] = result;
      if ( v57 != a1[6] )
      {
        *a1 = 1 - v49;
        result = *(_QWORD *)(v47 + 128);
        a1[7] = *(_DWORD *)(result + 4LL * (1 - v49));
      }
    }
    else
    {
      v50 = ulGetNearestIndexFromColorref(v4, v5, v31);
      v51 = a1[6];
      v52 = v59;
      *a1 = v50;
      result = rgbFromColorref(v52, a4, v51);
      a1[7] = result;
    }
  }
  if ( !*(_DWORD *)(a3 + 104) && !_InterlockedExchange((volatile __int32 *)(a3 + 104), 1) )
  {
    *(_DWORD *)(a3 + 112) = a1[13];
    *(_DWORD *)(a3 + 116) = a1[11];
    *(_DWORD *)(a3 + 120) = a1[10];
    *(_QWORD *)(a3 + 128) = *a1;
    v34 = a1[7];
    *(_DWORD *)(a3 + 48) |= 0x80000000;
    *(_DWORD *)(a3 + 144) = v34;
    return (unsigned int)_InterlockedExchange((volatile __int32 *)(a3 + 108), a1[12]);
  }
  return result;
}
