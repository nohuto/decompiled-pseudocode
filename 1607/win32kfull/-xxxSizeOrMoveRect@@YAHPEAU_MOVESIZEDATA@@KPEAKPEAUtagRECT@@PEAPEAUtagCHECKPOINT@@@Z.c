/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0201234
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FEDD8 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C0201E1C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FC1F8 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC648 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC678 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FCDD0 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FCEF8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01FCF68 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01FD254 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FD284 (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FD2C8 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FD2FC (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01FD344 (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C01FD8C4 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0201B98 (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 */

__int64 __fastcall xxxSizeOrMoveRect(
        struct _MOVESIZEDATA *a1,
        int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagCHECKPOINT **a5)
{
  int v5; // ebx
  unsigned int v8; // r14d
  int v9; // r13d
  int v10; // eax
  int v11; // ecx
  int v12; // r12d
  int v13; // ebx
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // r15d
  int v17; // ecx
  int v18; // eax
  __int64 result; // rax
  int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  struct tagMONITOR *v23; // r13
  struct tagMONITOR *v24; // rdx
  __int64 v25; // rbx
  _QWORD *v26; // r12
  __int64 v27; // rdx
  _DWORD *v28; // r9
  __int64 v29; // rdx
  int v30; // r8d
  _QWORD *v31; // rdx
  bool v32; // zf
  __int128 v33; // xmm6
  unsigned int v34; // r8d
  unsigned int v35; // eax
  struct tagRECT *v36; // rax
  struct tagRECT v37; // xmm0
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r15d
  int v42; // eax
  struct tagCHECKPOINT *v43; // r14
  int v44; // r11d
  int v45; // eax
  __m128i v46; // xmm6
  int v47; // r8d
  int v48; // r9d
  int v49; // eax
  int v50; // r10d
  int v51; // r14d
  int v52; // edx
  int v53; // ebx
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // r10d
  int v58; // ebx
  int v59; // edx
  int v60; // r11d
  int v61; // r11d
  int v62; // r10d
  int v63; // r13d
  int v64; // r10d
  int v65; // r13d
  unsigned int v66; // r15d
  struct tagRECT *v67; // rax
  int v68; // r13d
  int v69; // r10d
  unsigned int v70; // r15d
  struct tagRECT *v71; // rax
  const struct _MOVESIZEDATA *v72; // rcx
  int v73; // ecx
  int v74; // eax
  struct tagMONITOR *v75; // r14
  unsigned int v76; // eax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __m128i v80; // [rsp+38h] [rbp-51h]
  unsigned __int64 v83; // [rsp+48h] [rbp-41h]
  struct tagCHECKPOINT *v84; // [rsp+50h] [rbp-39h]
  _DWORD *v85; // [rsp+58h] [rbp-31h]
  __int64 v86; // [rsp+60h] [rbp-29h]
  struct tagMONITOR *v87; // [rsp+68h] [rbp-21h]
  struct tagMONITOR *v88; // [rsp+70h] [rbp-19h] BYREF
  __int64 v89; // [rsp+78h] [rbp-11h] BYREF
  struct tagMONITOR *v90; // [rsp+80h] [rbp-9h]
  struct tagMONITOR *v91; // [rsp+E8h] [rbp+5Fh] BYREF
  int v92; // [rsp+F0h] [rbp+67h]
  struct tagRECT *v93; // [rsp+100h] [rbp+77h]

  v93 = a4;
  v92 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 38);
  v85 = 0LL;
  v87 = 0LL;
  v8 = 1;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 39);
  v86 = 0LL;
  v83 = __PAIR64__(v9, v5);
  v84 = GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v84 || v5 == *((_DWORD *)a1 + 69) && v9 == *((_DWORD *)a1 + 70) )
    return 0LL;
  v10 = ComputeMoveOutcome(__PAIR64__(v9, v5), (__int64)a1, &v88, &v91);
  v11 = *((_DWORD *)a1 + 45);
  v12 = v10;
  *(_QWORD *)((char *)a1 + 276) = __PAIR64__(v9, v5);
  v13 = v92;
  v14 = 0x2000000LL;
  if ( (v11 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 45) = v11 & 0xFDFFFFFF;
    v15 = MoveRect((__int64)a1, v13, 0);
    v14 = 0x2000000LL;
    v8 = v15;
    *((_DWORD *)a1 + 45) |= 0x2000000u;
  }
  v16 = (unsigned int)v91;
  if ( v12 != 1 || (unsigned int)((_DWORD)v91 - 1) > 1 )
  {
    *((_DWORD *)a1 + 64) &= ~2u;
    if ( v12 != 1 )
    {
      switch ( v12 )
      {
        case 3:
          v23 = v88;
          if ( !*((_DWORD *)a1 + 54)
            && !v16
            && (*((_DWORD *)a1 + 45) & 0x300) == 0x300
            && ((*((_DWORD *)a1 + 45) >> 15) & 7u) - 4 <= 1 )
          {
            v24 = v88;
            v25 = 0LL;
            v26 = (_QWORD *)(gpDispInfo + 192LL);
            v91 = (struct tagMONITOR *)*((_QWORD *)a1 + 26);
            do
            {
              if ( IsDockTargetActive((__int64)a1, (__int64)v24, 0) && *v28 <= (int)v83 && (int)v83 < v28[2] )
              {
                v85 = v28;
                v87 = (struct tagMONITOR *)v27;
              }
              if ( IsDockTargetActive((__int64)a1, v27, 3)
                && *(_DWORD *)v14 <= (int)v83
                && (int)v83 < *(_DWORD *)(v14 + 8) )
              {
                v25 = v14;
                v86 = v29;
              }
              v31 = *(_QWORD **)(v29 + 496);
              if ( v31 == v26 )
                v31 = (_QWORD *)*v26;
              v24 = (struct tagMONITOR *)(v31 - 62);
            }
            while ( v24 != v91 );
            v32 = v25 == 0;
            v13 = v92;
            if ( !v32 )
            {
              if ( v85 )
              {
                v33 = *(_OWORD *)((char *)a1 + 24);
                MoveRect((__int64)a1, v92, v30);
                if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v87, 0, v86, v83) )
                {
                  *((_DWORD *)a1 + 54) = 0;
                  SetCurrentHitTargetMonitor(a1, v87, 1);
                  result = v34;
                  *((_DWORD *)a1 + 55) = v34 + 1;
                  return result;
                }
                if ( (*((_DWORD *)a1 + 45) & 0x2000000) != 0 )
                  *(_OWORD *)((char *)a1 + 56) = v33;
                else
                  *(_OWORD *)((char *)a1 + 24) = v33;
              }
            }
          }
          if ( (*((_DWORD *)a1 + 45) & 0x6000000) != 0x4000000 )
          {
LABEL_52:
            v8 = 1;
            v89 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v89;
            v90 = v23;
            if ( v23 )
              ++*((_DWORD *)v23 + 2);
            xxxSizeRectFromHitTarget(a1, v23, v16, v14);
            if ( v16 )
            {
              if ( v16 == 1 )
              {
                v35 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x100;
                goto LABEL_58;
              }
              if ( v16 == 2 )
              {
                v35 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x200;
LABEL_58:
                *((_DWORD *)a1 + 45) = v35;
                if ( (*(_BYTE *)(*(_QWORD *)a1 + 55LL) & 1) != 0 )
                {
                  v36 = v93;
                  v37 = *(struct tagRECT *)((char *)a1 + 24);
                  *a3 |= 1u;
                  *v36 = v37;
                  *a5 = v84;
                }
                SetDragOutThresholdAlways(a1);
                goto LABEL_66;
              }
            }
            else
            {
              v38 = *((_DWORD *)a1 + 45);
              *((_DWORD *)a1 + 64) &= ~2u;
              v38 &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 45) = v38;
              if ( (v38 & 0x4000000) == 0 )
                *a3 |= 2u;
              SetDragInToDragOutThreshold(a1);
            }
            if ( v16 == 3 )
            {
LABEL_67:
              *((_DWORD *)a1 + 54) = v16;
              SetCurrentHitTargetMonitor(a1, v23, 1);
              *((_DWORD *)a1 + 55) = 2;
              ThreadUnlock1(v40, v39);
              return v8;
            }
LABEL_66:
            MakeArrangedStateObservable(a1);
            goto LABEL_67;
          }
          if ( (unsigned int)MoveRect((__int64)a1, v13, 0) )
          {
            *a3 |= 8u;
            *((_DWORD *)a1 + 45) |= 0x2000000u;
            goto LABEL_52;
          }
          return 0LL;
        case 4:
          v41 = *((_DWORD *)a1 + 45);
          if ( (v41 & 0x80u) == 0 )
          {
            MoveRect((__int64)a1, v13, 0);
            v42 = *((_DWORD *)a1 + 54);
            if ( v42 )
            {
              if ( (unsigned int)(v42 - 1) <= 1 )
              {
                ++*((_DWORD *)a1 + 74);
                SetDragOutToDragInThreshold(a1);
              }
            }
            else
            {
              ++*((_DWORD *)a1 + 73);
              SetDragInThresholdAlways(a1);
            }
LABEL_108:
            *((_DWORD *)a1 + 45) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 64) &= ~2u;
            *((_DWORD *)a1 + 54) = 4;
            DisableTemporayMetricsOverrides(a1);
            MakeArrangedStateObservable(v72);
            v73 = *((_DWORD *)a1 + 45);
            *((_DWORD *)a1 + 55) = 0;
            if ( (v73 & 0x6000000) == 0x6000000 )
            {
              *a3 |= 4u;
              *((_DWORD *)a1 + 45) = v73 & 0xFDFFFFFF;
            }
            return 1LL;
          }
          v43 = v84;
          v44 = *((_DWORD *)a1 + 54);
          v45 = *((_DWORD *)a1 + 45) & 0x7000;
          v46 = *(__m128i *)v84;
          v47 = _mm_cvtsi128_si32(*(__m128i *)v84);
          v48 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v84, 8));
          v80 = *(__m128i *)v84;
          if ( v44 )
          {
            v32 = v45 == 4096;
            v49 = v48;
            if ( v32 )
            {
              v57 = *((_DWORD *)a1 + 28) - *((_DWORD *)a1 + 26);
              v52 = *((_DWORD *)a1 + 67);
              v58 = (v48 - v47) / 2;
              if ( v52 < v58 )
                goto LABEL_95;
              if ( v52 <= v57 - v58 )
              {
                v52 = (v48 - v47) / 2;
                goto LABEL_95;
              }
              v59 = v52 - v57;
              goto LABEL_93;
            }
          }
          else
          {
            v32 = v45 == 4096;
            v49 = v48;
            if ( v32 )
            {
              v50 = v83;
              v51 = *((_DWORD *)a1 + 4) - *((_DWORD *)a1 + 2);
              v52 = v83 - *((_DWORD *)a1 + 2);
              v53 = (v48 - v47) / 2;
              if ( v52 >= v53 )
              {
                if ( v52 <= v51 - v53 )
                  v52 = (v48 - v47) / 2;
                else
                  v52 = v48 + v52 - v51 - v47;
              }
              v54 = *((_DWORD *)a1 + 66);
              v43 = v84;
              goto LABEL_96;
            }
          }
          v55 = v49 - v47;
          v56 = *((_DWORD *)a1 + 28) - *((_DWORD *)a1 + 26);
          if ( v56 <= v55 )
          {
            v52 = *((_DWORD *)a1 + 67);
            if ( v52 < v56 / 2 )
              goto LABEL_95;
            if ( v52 <= v56 / 2 )
            {
              v52 = v56 / 2;
              goto LABEL_95;
            }
          }
          else
          {
            v52 = *((_DWORD *)a1 + 67);
            if ( v52 < v55 / 2 )
            {
LABEL_95:
              v54 = *((_DWORD *)a1 + 68);
              v50 = v83;
LABEL_96:
              if ( v44 )
              {
                v60 = v44 - 1;
                if ( v60 && (v61 = v60 - 1) != 0 )
                {
                  if ( v61 == 1 )
                  {
                    v62 = v50 - v52 - v47;
                    v63 = v9 - v80.m128i_i32[1] - v54;
                    v80.m128i_i32[0] = v62 + v47;
                    v80.m128i_i32[3] += v63;
                    v80.m128i_i32[1] += v63;
                    v80.m128i_i32[2] = v62 + v48;
                    v46 = v80;
                  }
                }
                else
                {
                  v64 = v50 - v52 - v47;
                  v65 = v9 - v80.m128i_i32[1] - v54;
                  v80.m128i_i32[3] += v65;
                  v80.m128i_i32[1] += v65;
                  v66 = v41 & 0xFFFFFF7F;
                  v80.m128i_i32[0] = v64 + v47;
                  v80.m128i_i32[2] = v64 + v48;
                  *((_DWORD *)a1 + 45) = v66;
                  v46 = v80;
                  if ( (v66 & 0x20) != 0 )
                  {
                    v67 = v93;
                    *a3 |= 1u;
                    *v67 = (struct tagRECT)v80;
                    *a5 = v43;
                  }
                  ++*((_DWORD *)a1 + 74);
                  SetDragOutToDragInThreshold(a1);
                }
              }
              else
              {
                *((_DWORD *)a1 + 65) = v52;
                v68 = v9 - v80.m128i_i32[1] - v54;
                *((_DWORD *)a1 + 66) = v54;
                v80.m128i_i32[3] += v68;
                v69 = v50 - v52 - v47;
                v80.m128i_i32[1] += v68;
                v70 = v41 & 0xFFFFFF7F;
                v80.m128i_i32[0] = v69 + v47;
                v80.m128i_i32[2] = v69 + v48;
                *((_DWORD *)a1 + 45) = v70;
                v46 = v80;
                if ( (v70 & 0x20) != 0 )
                {
                  v71 = v93;
                  *a3 |= 1u;
                  *v71 = (struct tagRECT)v80;
                  *a5 = v43;
                }
                ++*((_DWORD *)a1 + 73);
                SetDragInThresholdAlways(a1);
              }
              *(__m128i *)((char *)a1 + 24) = v46;
              goto LABEL_108;
            }
            if ( v52 <= v56 - v55 / 2 )
            {
              v52 = v55 / 2;
              goto LABEL_95;
            }
          }
          v59 = v52 - v56;
LABEL_93:
          v52 = v48 + v59 - v47;
          goto LABEL_95;
        case 5:
LABEL_13:
          v20 = *((_DWORD *)a1 + 55);
          return MoveRect((__int64)a1, v13, v20);
      }
      if ( v12 != 6 )
        return 0LL;
      if ( (*((_DWORD *)a1 + 45) & 0x40000) == 0 )
      {
        CkptRestore(*(_QWORD *)a1, (struct _MOVESIZEDATA *)((char *)a1 + 104));
        v74 = *((_DWORD *)a1 + 45) | 0x40000;
        *((_DWORD *)a1 + 45) = v74;
        if ( (v74 & 0x1000000) != 0 )
          *(_OWORD *)((char *)a1 + 136) = *(_OWORD *)v84;
      }
      if ( (*((_DWORD *)a1 + 45) & 0x6000000) == 0x4000000 )
      {
        if ( !(unsigned int)MoveRect((__int64)a1, v13, 0) )
          return 0LL;
        *a3 |= 8u;
        *((_DWORD *)a1 + 45) |= 0x2000000u;
      }
      v75 = v88;
      v89 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v89;
      v90 = v75;
      if ( v75 )
        ++*((_DWORD *)v75 + 2);
      xxxSizeRectFromHitTarget(a1, v75, v16, v14);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          v76 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x100;
        }
        else
        {
          if ( v16 != 2 )
          {
            if ( v16 == 3 )
            {
              *((_DWORD *)a1 + 45) &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 64) &= ~2u;
            }
            goto LABEL_132;
          }
          v76 = *((_DWORD *)a1 + 45) & 0xFFFFFCFF | 0x200;
        }
        *((_DWORD *)a1 + 45) = v76;
      }
      else
      {
        v77 = *((_DWORD *)a1 + 45);
        *((_DWORD *)a1 + 64) &= ~2u;
        v77 &= 0xFFFFFCFF;
        *((_DWORD *)a1 + 45) = v77;
        if ( (v77 & 0x4000000) == 0 )
          *a3 |= 2u;
      }
      SetDragInToDragOutThreshold(a1);
LABEL_132:
      MakeArrangedStateObservable(a1);
      *((_DWORD *)a1 + 54) = v16;
      SetCurrentHitTargetMonitor(a1, v75, 1);
      ThreadUnlock1(v79, v78);
      return 1LL;
    }
  }
  v17 = *((_DWORD *)a1 + 54);
  if ( (unsigned int)(v17 - 1) <= 1 )
  {
    v18 = *((_DWORD *)a1 + 45);
    if ( (v18 & 0x300) == 0 )
    {
      if ( (v18 & 0x2000000) != 0 )
        return v8;
      goto LABEL_13;
    }
  }
  if ( !v17 )
  {
    v21 = *((_DWORD *)a1 + 45);
    if ( (v21 & 0x300) == 0x300 && ((v21 >> 15) & 7) - 4 <= 1 )
    {
      if ( (v21 & 0x2000000) != 0 )
        return v8;
      goto LABEL_19;
    }
    v22 = *((_DWORD *)a1 + 45);
    if ( (v22 & 0x300) != 0 && ((v22 >> 15) & 7) - 4 <= 1 )
    {
      *((_DWORD *)a1 + 45) = v22 | 0x300;
      MakeArrangedStateObservable(a1);
      if ( (*((_DWORD *)a1 + 45) & 0x2000000) != 0 )
        return v8;
LABEL_19:
      v20 = 3;
      return MoveRect((__int64)a1, v13, v20);
    }
  }
  return (*((_DWORD *)a1 + 45) & 0x2000000) != 0 ? v8 : 0;
}
