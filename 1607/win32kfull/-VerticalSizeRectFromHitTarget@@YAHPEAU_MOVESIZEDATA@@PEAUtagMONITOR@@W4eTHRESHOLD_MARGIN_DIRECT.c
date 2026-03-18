/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FD8C4
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C01FC800 (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01FD52C (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0201234 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FCDD0 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // r13d
  __int64 v7; // r10
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rax
  __int128 *v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // esi
  int v19; // r14d
  bool v20; // cc
  __int64 v21; // rbx
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  __int128 *v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // rbx
  __int64 v32; // r8
  int v33; // edx
  __int64 v34; // rax
  __int128 *v35; // r10
  __int64 v36; // rax
  int v37; // r14d
  int v38; // eax
  int v39; // r12d
  int v40; // edx
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // r8
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rax
  __int128 *v49; // rax
  __int64 v50; // rax
  int v51; // ecx
  __int64 v52; // rbx
  __int64 v53; // r8
  int v54; // edx
  __int64 v55; // rax
  __int128 *v56; // r10
  __int64 v57; // rax
  int v58; // esi
  int v59; // eax
  int v60; // r12d
  int v61; // eax
  int v62; // esi
  int v63; // eax
  int v65; // [rsp+20h] [rbp-40h] BYREF
  int v66; // [rsp+24h] [rbp-3Ch]
  __int128 v67; // [rsp+28h] [rbp-38h]
  __int64 v68; // [rsp+38h] [rbp-28h]
  __int64 v69; // [rsp+40h] [rbp-20h] BYREF
  __int128 v70; // [rsp+48h] [rbp-18h] BYREF

  v68 = 0LL;
  v5 = 0;
  v69 = a2;
  v7 = a2;
  v9 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF;
  if ( !v10
    && (v11 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 244LL) & 1) != 0 )
  {
    v12 = (__int128 *)(v7 + 92);
  }
  else if ( v10 != 1
         || (v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) == 0
         || (v14 = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 244LL), v12 = (__int128 *)(v7 + 108), (v14 & 1) == 0) )
  {
    v12 = (__int128 *)(v7 + 76);
  }
  v67 = *v12;
  if ( a4 )
  {
    if ( !v10
      && (v15 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v15 + 8) + 244LL) & 1) != 0 )
    {
      v16 = a4 + 92;
    }
    else if ( v10 != 1
           || (v17 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) == 0
           || (v16 = a4 + 108, (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 244LL) & 1) == 0) )
    {
      v16 = a4 + 76;
    }
    v18 = HIDWORD(v67);
    v19 = DWORD1(v67);
    if ( *(_DWORD *)(v16 + 12) > SHIDWORD(v67) )
      v18 = *(_DWORD *)(v16 + 12);
    v20 = *(_DWORD *)(v16 + 4) < SDWORD1(v67);
    HIDWORD(v67) = v18;
    if ( v20 )
      v19 = *(_DWORD *)(v16 + 4);
    DWORD1(v67) = v19;
  }
  else
  {
    v18 = HIDWORD(v67);
    v19 = DWORD1(v67);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v5;
    v21 = *(_QWORD *)(a1 + 208);
    while ( 1 )
    {
      v22 = *(_QWORD *)a1;
      v23 = *(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF;
      if ( !v23
        && (v24 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v24 + 8) + 244LL) & 1) != 0 )
      {
        v25 = v21 + 92;
      }
      else if ( v23 != 1
             || (v26 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 408LL)) == 0
             || (v25 = v21 + 108, (*(_DWORD *)(*(_QWORD *)(v26 + 8) + 244LL) & 1) == 0) )
      {
        v25 = v21 + 76;
      }
      if ( v23 == 2 || v21 == v7 )
      {
        if ( !v23
          && (v27 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 408LL)) != 0
          && (*(_DWORD *)(*(_QWORD *)(v27 + 8) + 244LL) & 1) != 0 )
        {
          v28 = (__int128 *)(v21 + 92);
        }
        else if ( v23 != 1
               || (v29 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 408LL)) == 0
               || (v30 = *(_DWORD *)(*(_QWORD *)(v29 + 8) + 244LL), v28 = (__int128 *)(v21 + 108), (v30 & 1) == 0) )
        {
          v28 = (__int128 *)(v21 + 76);
        }
        v70 = *v28;
      }
      else
      {
        v70 = *(_OWORD *)(v21 + 76);
        PhysicalToLogicalDPIRect(&v70, &v70, 0LL, &v69);
      }
      if ( IsDockTargetActive(a1, v21, 0) && (int)v70 <= a5 && a5 < SDWORD2(v70) )
        break;
      v31 = *(_QWORD *)(v21 + 496);
      if ( v31 == gpDispInfo + 192LL )
        v31 = *(_QWORD *)(gpDispInfo + 192LL);
      v21 = v31 - 496;
      if ( v21 == *(_QWORD *)(a1 + 208) )
        return v5;
    }
    v32 = *(_QWORD *)a1;
    v5 = 1;
    v68 = v21;
    v33 = *(_DWORD *)(v32 + 352) & 0xF;
    if ( v33 == 2 || *(_WORD *)(v21 + 154) == *(_WORD *)(v7 + 154) )
    {
      v37 = *(_DWORD *)(v25 + 4);
      DWORD1(v67) = v37;
    }
    else
    {
      v21 = v7;
      v68 = v7;
      v33 = *(_DWORD *)(v32 + 352) & 0xF;
      if ( !v33
        && (v34 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v34 + 8) + 244LL) & 1) != 0 )
      {
        v35 = (__int128 *)(v7 + 92);
      }
      else if ( v33 == 1
             && (v36 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v36 + 8) + 244LL) & 1) != 0 )
      {
        v35 = (__int128 *)(v7 + 108);
      }
      else
      {
        v35 = (__int128 *)(v7 + 76);
      }
      v67 = *v35;
      v18 = HIDWORD(v67);
      v37 = DWORD1(v67);
    }
    v38 = *(_DWORD *)(a1 + 24);
    v39 = *(_DWORD *)(a1 + 32);
    LODWORD(v67) = v38;
    DWORD2(v67) = v39;
    if ( v33 != 2 && v21 != *(_QWORD *)(a1 + 184) )
    {
      v66 = 0;
      v65 = v38;
      LogicalToPhysicalDPIPoint(&v65, &v65, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v65, &v65, 0LL);
      LODWORD(v67) = (__int16)v65;
      v65 = v39;
      LogicalToPhysicalDPIPoint(&v65, &v65, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v65, &v65, 0LL);
      DWORD2(v67) = (__int16)v65;
    }
    v40 = *(_DWORD *)(a1 + 92);
    if ( v18 - v37 < v40 )
      DWORD1(v67) = v18 - v40;
    v41 = *(_DWORD *)(a1 + 100);
    if ( v18 - v37 >= v41 )
      DWORD1(v67) = v18 - v41;
  }
  else
  {
    v42 = *(_QWORD *)(a1 + 208);
    while ( 1 )
    {
      v43 = *(_QWORD *)a1;
      v44 = *(_DWORD *)(*(_QWORD *)a1 + 352LL) & 0xF;
      if ( !v44
        && (v45 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v45 + 8) + 244LL) & 1) != 0 )
      {
        v46 = v42 + 92;
      }
      else if ( v44 != 1
             || (v47 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 408LL)) == 0
             || (v46 = v42 + 108, (*(_DWORD *)(*(_QWORD *)(v47 + 8) + 244LL) & 1) == 0) )
      {
        v46 = v42 + 76;
      }
      if ( v44 == 2 || v42 == v7 )
      {
        if ( !v44
          && (v48 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 408LL)) != 0
          && (*(_DWORD *)(*(_QWORD *)(v48 + 8) + 244LL) & 1) != 0 )
        {
          v49 = (__int128 *)(v42 + 92);
        }
        else if ( v44 != 1
               || (v50 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 408LL)) == 0
               || (v51 = *(_DWORD *)(*(_QWORD *)(v50 + 8) + 244LL), v49 = (__int128 *)(v42 + 108), (v51 & 1) == 0) )
        {
          v49 = (__int128 *)(v42 + 76);
        }
        v70 = *v49;
      }
      else
      {
        v70 = *(_OWORD *)(v42 + 76);
        PhysicalToLogicalDPIRect(&v70, &v70, 0LL, &v69);
      }
      if ( IsDockTargetActive(a1, v42, 3) && (int)v70 <= a5 && a5 < SDWORD2(v70) )
        break;
      v52 = *(_QWORD *)(v42 + 496);
      if ( v52 == gpDispInfo + 192LL )
        v52 = *(_QWORD *)(gpDispInfo + 192LL);
      v42 = v52 - 496;
      if ( v42 == *(_QWORD *)(a1 + 208) )
        return v5;
    }
    v53 = *(_QWORD *)a1;
    v5 = 1;
    v68 = v42;
    v54 = *(_DWORD *)(v53 + 352) & 0xF;
    if ( v54 == 2 || *(_WORD *)(v42 + 154) == *(_WORD *)(v7 + 154) )
    {
      v58 = *(_DWORD *)(v46 + 12);
      HIDWORD(v67) = v58;
    }
    else
    {
      v42 = v7;
      v68 = v7;
      v54 = *(_DWORD *)(v53 + 352) & 0xF;
      if ( !v54
        && (v55 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v55 + 8) + 244LL) & 1) != 0 )
      {
        v56 = (__int128 *)(v7 + 92);
      }
      else if ( v54 == 1
             && (v57 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v57 + 8) + 244LL) & 1) != 0 )
      {
        v56 = (__int128 *)(v7 + 108);
      }
      else
      {
        v56 = (__int128 *)(v7 + 76);
      }
      v67 = *v56;
      v58 = HIDWORD(v67);
      v19 = DWORD1(v67);
    }
    v59 = *(_DWORD *)(a1 + 24);
    v60 = *(_DWORD *)(a1 + 32);
    LODWORD(v67) = v59;
    DWORD2(v67) = v60;
    if ( v54 != 2 && v42 != *(_QWORD *)(a1 + 184) )
    {
      v66 = 0;
      v65 = v59;
      LogicalToPhysicalDPIPoint(&v65, &v65, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v65, &v65, 0LL);
      LODWORD(v67) = (__int16)v65;
      v65 = v60;
      LogicalToPhysicalDPIPoint(&v65, &v65, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v65, &v65, 0LL);
      DWORD2(v67) = (__int16)v65;
    }
    v61 = *(_DWORD *)(a1 + 92);
    v62 = v58 - v19;
    if ( v62 < v61 )
      HIDWORD(v67) = v19 + v61;
    v63 = *(_DWORD *)(a1 + 100);
    if ( v62 >= v63 )
      HIDWORD(v67) = v19 + v63;
  }
  if ( (*(_DWORD *)(a1 + 180) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 56) = v67;
  else
    *(_OWORD *)(a1 + 24) = v67;
  return v5;
}
