/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020618C
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C020514C (-HandleNoTargetToDockTargetSizing@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DI.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C0205E54 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0209C0C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020571C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall VerticalSizeRectFromHitTarget(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // r13d
  __int64 v6; // r10
  __int64 v7; // rdx
  int v9; // r11d
  __int128 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // esi
  int v14; // r14d
  bool v15; // cc
  __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // r14
  __int128 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  int v23; // edx
  __int128 *v24; // r10
  int v25; // r14d
  int v26; // eax
  int v27; // r12d
  int v28; // edx
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // r8
  int v32; // edx
  __int64 v33; // rsi
  __int128 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r8
  int v37; // edx
  __int128 *v38; // r10
  int v39; // esi
  int v40; // eax
  int v41; // r12d
  int v42; // eax
  int v43; // esi
  int v44; // eax
  int v46; // [rsp+20h] [rbp-40h] BYREF
  int v47; // [rsp+24h] [rbp-3Ch]
  __int128 v48; // [rsp+28h] [rbp-38h]
  __int64 v49; // [rsp+38h] [rbp-28h] BYREF
  __int64 v50; // [rsp+40h] [rbp-20h] BYREF
  __int128 v51; // [rsp+48h] [rbp-18h] BYREF

  v49 = 0LL;
  v5 = 0;
  v50 = a2;
  v6 = a2;
  v7 = *(_QWORD *)a1;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
  if ( v9 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v9 != 1
      || (v10 = (__int128 *)(v6 + 108),
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      v10 = (__int128 *)(v6 + 76);
    }
  }
  else
  {
    v10 = (__int128 *)(v6 + 92);
  }
  v48 = *v10;
  if ( a4 )
  {
    if ( v9 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v9 != 1
        || (v12 = *(_QWORD *)(v7 + 16),
            v11 = a4 + 108,
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 416) + 8LL) + 260LL) & 1) == 0) )
      {
        v11 = a4 + 76;
      }
    }
    else
    {
      v11 = a4 + 92;
    }
    v13 = HIDWORD(v48);
    v14 = DWORD1(v48);
    if ( *(_DWORD *)(v11 + 12) > SHIDWORD(v48) )
      v13 = *(_DWORD *)(v11 + 12);
    v15 = *(_DWORD *)(v11 + 4) < SDWORD1(v48);
    HIDWORD(v48) = v13;
    if ( v15 )
      v14 = *(_DWORD *)(v11 + 4);
    DWORD1(v48) = v14;
  }
  else
  {
    v13 = HIDWORD(v48);
    v14 = DWORD1(v48);
  }
  if ( a3 )
  {
    if ( a3 != 3 )
      return v5;
    v16 = *(_QWORD *)(a1 + 208);
    while ( 1 )
    {
      v17 = *(_QWORD *)a1;
      v18 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
      if ( v18 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v18 != 1
          || (v19 = v16 + 108,
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
        {
          v19 = v16 + 76;
        }
      }
      else
      {
        v19 = v16 + 92;
      }
      if ( v18 == 2 || v16 == v6 )
      {
        if ( v18 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
        {
          if ( v18 != 1
            || (v20 = (__int128 *)(v16 + 108),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
          {
            v20 = (__int128 *)(v16 + 76);
          }
        }
        else
        {
          v20 = (__int128 *)(v16 + 92);
        }
        v51 = *v20;
      }
      else
      {
        v51 = *(_OWORD *)(v16 + 76);
        PhysicalToLogicalDPIRect(&v51, &v51, 0LL, &v50);
      }
      if ( IsDockTargetActive(a1, v16, 0) && (int)v51 <= a5 && a5 < SDWORD2(v51) )
        break;
      v21 = *(_QWORD *)(v16 + 496);
      if ( v21 == gpDispInfo + 192LL )
        v21 = *(_QWORD *)(gpDispInfo + 192LL);
      v16 = v21 - 496;
      if ( v16 == *(_QWORD *)(a1 + 208) )
        return v5;
    }
    v22 = *(_QWORD *)a1;
    v5 = 1;
    v49 = v16;
    v23 = *(_DWORD *)(v22 + 344);
    if ( v23 == 2 || *(_WORD *)(v16 + 152) == *(_WORD *)(v6 + 152) )
    {
      v25 = *(_DWORD *)(v19 + 4);
      DWORD1(v48) = v25;
    }
    else
    {
      v49 = v6;
      v16 = v6;
      v23 = *(_DWORD *)(v22 + 344);
      if ( v23 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v23 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
          v24 = (__int128 *)(v6 + 108);
        else
          v24 = (__int128 *)(v6 + 76);
      }
      else
      {
        v24 = (__int128 *)(v6 + 92);
      }
      v48 = *v24;
      v13 = HIDWORD(v48);
      v25 = DWORD1(v48);
    }
    v26 = *(_DWORD *)(a1 + 24);
    v27 = *(_DWORD *)(a1 + 32);
    LODWORD(v48) = v26;
    DWORD2(v48) = v27;
    if ( v23 != 2 && v16 != *(_QWORD *)(a1 + 184) )
    {
      v47 = 0;
      v46 = v26;
      LogicalToPhysicalDPIPoint(&v46, &v46, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v46, &v46, 0LL, &v49);
      LODWORD(v48) = (__int16)v46;
      v46 = v27;
      LogicalToPhysicalDPIPoint(&v46, &v46, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v46, &v46, 0LL, &v49);
      DWORD2(v48) = (__int16)v46;
    }
    v28 = *(_DWORD *)(a1 + 92);
    if ( v13 - v25 < v28 )
      DWORD1(v48) = v13 - v28;
    v29 = *(_DWORD *)(a1 + 100);
    if ( v13 - v25 >= v29 )
      DWORD1(v48) = v13 - v29;
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 208);
    while ( 1 )
    {
      v31 = *(_QWORD *)a1;
      v32 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
      if ( v32 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v32 != 1
          || (v33 = v30 + 108,
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
        {
          v33 = v30 + 76;
        }
      }
      else
      {
        v33 = v30 + 92;
      }
      if ( v32 == 2 || v30 == v6 )
      {
        if ( v32 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
        {
          if ( v32 != 1
            || (v34 = (__int128 *)(v30 + 108),
                (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
          {
            v34 = (__int128 *)(v30 + 76);
          }
        }
        else
        {
          v34 = (__int128 *)(v30 + 92);
        }
        v51 = *v34;
      }
      else
      {
        v51 = *(_OWORD *)(v30 + 76);
        PhysicalToLogicalDPIRect(&v51, &v51, 0LL, &v50);
      }
      if ( IsDockTargetActive(a1, v30, 3) && (int)v51 <= a5 && a5 < SDWORD2(v51) )
        break;
      v35 = *(_QWORD *)(v30 + 496);
      if ( v35 == gpDispInfo + 192LL )
        v35 = *(_QWORD *)(gpDispInfo + 192LL);
      v30 = v35 - 496;
      if ( v30 == *(_QWORD *)(a1 + 208) )
        return v5;
    }
    v36 = *(_QWORD *)a1;
    v5 = 1;
    v49 = v30;
    v37 = *(_DWORD *)(v36 + 344);
    if ( v37 == 2 || *(_WORD *)(v30 + 152) == *(_WORD *)(v6 + 152) )
    {
      v39 = *(_DWORD *)(v33 + 12);
      HIDWORD(v48) = v39;
    }
    else
    {
      v49 = v6;
      v30 = v6;
      v37 = *(_DWORD *)(v36 + 344);
      if ( v37 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
      {
        if ( v37 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
          v38 = (__int128 *)(v6 + 108);
        else
          v38 = (__int128 *)(v6 + 76);
      }
      else
      {
        v38 = (__int128 *)(v6 + 92);
      }
      v48 = *v38;
      v39 = HIDWORD(v48);
      v14 = DWORD1(v48);
    }
    v40 = *(_DWORD *)(a1 + 24);
    v41 = *(_DWORD *)(a1 + 32);
    LODWORD(v48) = v40;
    DWORD2(v48) = v41;
    if ( v37 != 2 && v30 != *(_QWORD *)(a1 + 184) )
    {
      v47 = 0;
      v46 = v40;
      LogicalToPhysicalDPIPoint(&v46, &v46, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v46, &v46, 0LL, &v49);
      LODWORD(v48) = (__int16)v46;
      v46 = v41;
      LogicalToPhysicalDPIPoint(&v46, &v46, 0LL, a1 + 184);
      PhysicalToLogicalDPIPoint(&v46, &v46, 0LL, &v49);
      DWORD2(v48) = (__int16)v46;
    }
    v42 = *(_DWORD *)(a1 + 92);
    v43 = v39 - v14;
    if ( v43 < v42 )
      HIDWORD(v48) = v14 + v42;
    v44 = *(_DWORD *)(a1 + 100);
    if ( v43 >= v44 )
      HIDWORD(v48) = v14 + v44;
  }
  if ( (*(_DWORD *)(a1 + 180) & 0x2000000) != 0 )
    *(_OWORD *)(a1 + 56) = v48;
  else
    *(_OWORD *)(a1 + 24) = v48;
  return v5;
}
