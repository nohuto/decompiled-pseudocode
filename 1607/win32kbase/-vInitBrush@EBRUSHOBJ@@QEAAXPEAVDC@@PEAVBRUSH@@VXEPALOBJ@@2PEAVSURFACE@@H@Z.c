/*
 * XREFs of ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0025670
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0027224 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C002723C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C005CF10 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z @ 0x1C00751DC (-ulGetMatchingIndexFromColorref@@YAKVXEPALOBJ@@0K@Z.c)
 *     rgbFromColorref @ 0x1C00767B0 (rgbFromColorref.c)
 *     ulGetNearestIndexFromColorref @ 0x1C0076F80 (ulGetNearestIndexFromColorref.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C00BD250 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

int EBRUSHOBJ::vInitBrush(unsigned int *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  void *v14; // r12
  unsigned int v15; // r11d
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rdi
  volatile signed __int32 *v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // r8d
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rax
  int v26; // edx
  unsigned int MatchingIndexFromColorref; // eax
  __int64 v28; // rdx
  unsigned int v29; // r12d
  __int64 v30; // rcx
  unsigned int v31; // eax
  volatile signed __int32 *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // ecx
  bool v37; // zf
  HBITMAP IcmDIB; // rax
  volatile signed __int32 *v39; // rcx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  _DWORD *v42; // rcx
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int NearestIndexFromColorref; // eax
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // edi
  unsigned int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v55; // [rsp+20h] [rbp-18h]
  unsigned int v56; // [rsp+24h] [rbp-14h]
  int v58; // [rsp+90h] [rbp+58h]
  __int64 v59; // [rsp+98h] [rbp+60h] BYREF
  va_list va; // [rsp+98h] [rbp+60h]
  __int64 v61; // [rsp+A0h] [rbp+68h] BYREF
  va_list va1; // [rsp+A0h] [rbp+68h]
  __int64 v63; // [rsp+A8h] [rbp+70h]
  __int64 v64; // [rsp+B0h] [rbp+78h]
  va_list va2; // [rsp+B8h] [rbp+80h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v59 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v61 = va_arg(va2, _QWORD);
  v63 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _QWORD);
  v3 = v61;
  v5 = v59;
  v6 = a2;
  if ( !v61 || (*(_DWORD *)(v61 + 24) & 0x800) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v8 = *(_QWORD *)(v61 + 128);
    if ( v8 == v61 )
      v9 = *(_DWORD *)(v61 + 32);
    else
      v9 = *(_DWORD *)(v8 + 32);
  }
  *((_QWORD *)a1 + 10) = v63;
  v10 = *(_QWORD *)(v6 + 80);
  v11 = *(_DWORD *)(v6 + 112);
  v12 = *(_DWORD *)(v10 + 40);
  v13 = *(_DWORD *)(v10 + 32);
  v14 = *(void **)(v10 + 112);
  v56 = v12;
  v55 = v13;
  if ( *(_DWORD *)(a3 + 52) == a1[33]
    && ((v31 = a1[32], (v31 & 1) == 0) || a1[12] == v12)
    && ((v31 & 2) == 0 || a1[13] == v13) )
  {
    LODWORD(v25) = XEPALOBJ::ulTime((XEPALOBJ *)va);
    v15 = v64;
    if ( (struct BRUSH *)a3 != gpbrDCBrush
      && (_DWORD)v25 == a1[11]
      && v9 == a1[10]
      && (struct BRUSH *)a3 != gpbrDCPen
      && a1[18] == v11
      && *((void **)a1 + 8) == v14
      && (_DWORD)v64 == a1[34] )
    {
      return v25;
    }
  }
  else
  {
    v15 = v64;
  }
  a1[32] = *(_DWORD *)(a3 + 48);
  *((_QWORD *)a1 + 15) = a3;
  a1[33] = *(_DWORD *)(a3 + 52);
  a1[12] = v12;
  a1[13] = v13;
  v16 = *(_QWORD *)(v5 + 128);
  if ( v16 == v5 )
    v17 = *(_DWORD *)(v5 + 32);
  else
    v17 = *(_DWORD *)(v16 + 32);
  v58 = 0;
  a1[4] = 0;
  a1[11] = v17;
  a1[10] = v9;
  a1[34] = v15;
  if ( (v11 & 7) == 0 )
    goto LABEL_10;
  v35 = a1[32];
  if ( (v35 & 0x20030) != 0 )
  {
    v36 = v11 & 1;
    if ( (v11 & 1) == 0
      || (v35 & 0x20010) != 0
      && ((v35 & 3) != 0 || (struct BRUSH *)a3 == gpbrDCBrush || (struct BRUSH *)a3 == gpbrDCPen) )
    {
      goto LABEL_94;
    }
    if ( (*(_DWORD *)(a3 + 48) & 0x400) != 0 )
    {
      if ( v14 )
      {
        v37 = (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 8LL) & 0x80000) == 0;
        goto LABEL_85;
      }
    }
    else if ( v14 )
    {
      v37 = (*(_DWORD *)(*(_QWORD *)(v6 + 80) + 8LL) & 0x40000) == 0;
LABEL_85:
      if ( !v37 )
        goto LABEL_94;
LABEL_10:
      a1[18] = 0;
      *((_QWORD *)a1 + 8) = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (v35 & 0x80u) == 0 )
      goto LABEL_10;
    v36 = v11 & 1;
    if ( (v11 & 1) == 0 || !v14 )
      goto LABEL_94;
    IcmDIB = BRUSH::hFindIcmDIB((BRUSH *)a3, v14);
    v3 = v61;
    v5 = v59;
    if ( !IcmDIB )
      goto LABEL_10;
    v36 = v11 & 1;
  }
LABEL_94:
  a1[18] = v11;
  *((_QWORD *)a1 + 8) = v14;
  if ( (v11 & 5) != 0 )
  {
    a1[4] |= 2u;
  }
  else if ( (v11 & 2) != 0 )
  {
    a1[4] |= 1u;
  }
  if ( v36 && v14 && (v11 & 0x10000000) != 0 && (a1[32] & 0x10) != 0 )
  {
    a1[4] |= 4u;
    v58 = 1;
  }
  else
  {
    v58 = 0;
  }
LABEL_11:
  v18 = *(_QWORD *)(v63 + 48);
  if ( !v18 )
    v18 = *(_QWORD *)(a2 + 48);
  v19 = (volatile signed __int32 *)*((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 12) = v5;
  *((_QWORD *)a1 + 11) = v3;
  *((_QWORD *)a1 + 13) = *(_QWORD *)(v18 + 1832);
  a1[28] = *(_DWORD *)(v18 + 2132);
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v19, 1LL);
    *((_QWORD *)a1 + 4) = 0LL;
    v3 = v61;
    v5 = v59;
  }
  v20 = *((_QWORD *)a1 + 1);
  if ( v20 )
  {
    v39 = (volatile signed __int32 *)(v20 - 16);
    if ( _InterlockedExchangeAdd(v39, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v39, 0LL);
    *((_QWORD *)a1 + 1) = 0LL;
    v3 = v61;
    v5 = v59;
  }
  v21 = a1[32];
  v22 = v21 & 0x10;
  if ( (v21 & 0x10) != 0 )
  {
    if ( (v21 & 1) != 0 )
    {
      a1[6] = a1[12];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_21;
      v40 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 44LL);
    }
    else if ( (v21 & 2) != 0 )
    {
      a1[6] = a1[13];
      if ( (a1[18] & 1) == 0 )
        goto LABEL_21;
      v40 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 36LL);
    }
    else if ( (struct BRUSH *)a3 == gpbrDCBrush )
    {
      v33 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 48LL);
      if ( (v33 & 1) == 0 )
        goto LABEL_21;
      v40 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 52LL);
    }
    else
    {
      if ( (struct BRUSH *)a3 != gpbrDCPen )
        goto LABEL_20;
      v41 = a1[18];
      a1[6] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
      if ( (v41 & 1) == 0 )
        goto LABEL_21;
      v40 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 60LL);
    }
    a1[35] = v40;
    goto LABEL_21;
  }
  if ( (v21 & 0x20) == 0 )
    goto LABEL_21;
LABEL_20:
  v23 = a1[18];
  v24 = *(_DWORD *)(a3 + 84);
  a1[6] = v24;
  if ( (v23 & 1) == 0 )
    goto LABEL_21;
  a1[35] = v24;
  v42 = *(_DWORD **)(a2 + 80);
  if ( (*(_DWORD *)(a3 + 48) & 0x400) != 0 )
  {
    if ( (v42[2] & 0x80000) == 0 )
      goto LABEL_21;
    v43 = v42[35];
  }
  else
  {
    if ( (v42[2] & 0x40000) == 0 )
      goto LABEL_21;
    v43 = v42[34];
  }
  a1[6] = v43;
LABEL_21:
  LODWORD(v25) = *(_DWORD *)(a3 + 108);
  if ( (_DWORD)v25 != -1 )
  {
    v26 = *(_DWORD *)(a3 + 48);
    if ( (v26 & 1) == 0 || (_DWORD)v25 == v56 )
    {
      if ( (v26 & 2) == 0 || (LODWORD(v25) = v55, *(_DWORD *)(a3 + 112) == v55) )
      {
        LODWORD(v25) = a1[11];
        if ( *(_DWORD *)(a3 + 116) == (_DWORD)v25 )
        {
          LODWORD(v25) = a1[10];
          if ( *(_DWORD *)(a3 + 120) == (_DWORD)v25
            && *(_QWORD *)(a3 + 136) == v18
            && (struct BRUSH *)a3 != gpbrDCBrush
            && (struct BRUSH *)a3 != gpbrDCPen )
          {
            if ( v26 < 0 )
            {
              *a1 = *(_DWORD *)(a3 + 128);
            }
            else
            {
              v32 = *(volatile signed __int32 **)(a3 + 128);
              if ( (v26 & 0x40000000) != 0 )
                *((_QWORD *)a1 + 4) = v32;
              else
                *((_QWORD *)a1 + 1) = v32 + 4;
              _InterlockedAdd(v32, 1u);
              *a1 = -1;
            }
            LODWORD(v25) = *(_DWORD *)(a3 + 144);
            a1[7] = v25;
            return v25;
          }
        }
      }
    }
  }
  if ( !v22 )
  {
    a1[7] = -1;
    *a1 = -1;
    return v25;
  }
  LODWORD(v25) = v58;
  if ( v58 )
  {
    v29 = a1[6];
    a1[7] = v29;
    *a1 = v29;
  }
  else
  {
    if ( (*(_DWORD *)(v18 + 1848) & 0x800000) != 0 )
    {
      v44 = v64;
      if ( (_DWORD)v64 )
      {
        v29 = a1[6];
        a1[7] = v29;
        *a1 = -1;
        goto LABEL_123;
      }
    }
    MatchingIndexFromColorref = ulGetMatchingIndexFromColorref(v3, v5, a1[6]);
    v5 = v59;
    v3 = v61;
    v28 = v59;
    v29 = a1[6];
    v30 = v61;
    *a1 = MatchingIndexFromColorref;
    a1[7] = rgbFromColorref(v30, v28, v29);
    LODWORD(v25) = 0;
  }
  if ( *a1 == -1 && !(_DWORD)v25 )
  {
    v44 = v64;
LABEL_123:
    if ( ((a1[32] & 4) != 0 || (*(_DWORD *)(v18 + 1848) & 0x800000) != 0) && v44 )
    {
      if ( (!v3 || v3 == *(_QWORD *)(v18 + 1832)) && (LODWORD(v25) = *(_DWORD *)(v18 + 1848), (v25 & 0x20) != 0)
        || (LODWORD(v25) = XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1), (_DWORD)v25)
        && (*(_DWORD *)(v18 + 1848) & 0x400) != 0 )
      {
        a1[7] = v29;
        return v25;
      }
    }
    if ( *(_DWORD *)(v63 + 96) == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v3, v5, v55, 0LL);
      v46 = v61;
      v47 = v59;
      v48 = v61;
      v49 = NearestIndexFromColorref;
      *a1 = NearestIndexFromColorref;
      LODWORD(v25) = rgbFromColorref(v48, v47, v55);
      a1[7] = v25;
      if ( v55 != a1[6] )
      {
        *a1 = 1 - v49;
        v25 = *(_QWORD *)(v46 + 120);
        a1[7] = *(_DWORD *)(v25 + 4LL * (1 - v49));
      }
    }
    else
    {
      v50 = ulGetNearestIndexFromColorref(v3, v5, v29, 0LL);
      v51 = a1[6];
      v52 = v59;
      v53 = v61;
      *a1 = v50;
      LODWORD(v25) = rgbFromColorref(v53, v52, v51);
      a1[7] = v25;
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
    LODWORD(v25) = _InterlockedExchange((volatile __int32 *)(a3 + 108), a1[12]);
  }
  return v25;
}
