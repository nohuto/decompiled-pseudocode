/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0
 * Callers:
 *     xxxArrangeWindow @ 0x1C0202CF4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C00AFD1C (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FCDD0 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C01FD254 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01FD378 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FE80C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0200F20 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C0203C4C (xxxEvaluateDestRectForMonitorMigration.c)
 */

__int64 __fastcall xxxApplyArrangeAction(__int64 a1, int a2, int a3, int a4, struct _MOVESIZEDATA *a5)
{
  unsigned int v7; // ebx
  BOOL v8; // ecx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rax
  _DWORD *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  _OWORD *v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // r9
  bool v41; // al
  __int64 v42; // r9
  __int16 v43; // r10
  struct tagMONITOR *v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  __int16 v50; // si
  int v51; // ecx
  __int64 v52; // rax
  int v53; // r13d
  _DWORD v55[2]; // [rsp+30h] [rbp-50h] BYREF
  struct tagMONITOR *v56; // [rsp+38h] [rbp-48h]
  __int64 v57; // [rsp+40h] [rbp-40h]
  __int64 v58; // [rsp+48h] [rbp-38h] BYREF
  __int64 v59; // [rsp+50h] [rbp-30h]
  __int64 v60[2]; // [rsp+60h] [rbp-20h] BYREF

  v55[0] = a4;
  v7 = 1;
  *(_OWORD *)v60 = 0LL;
  v8 = a5 && (*((_DWORD *)a5 + 64) & 8) != 0;
  if ( !a3 )
  {
    v53 = 2;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v53 = 6;
    v52 = xxxMinMaximizeEx((struct tagWND *)a1, 3u, v53 | 0x10u, 0LL, v60);
    return v52 != 0;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    v51 = 0;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v51 = 4;
    v52 = xxxMinMaximizeEx((struct tagWND *)a1, 6u, v51 | gdwPUDFlags & 0x10000u, 0LL, 0LL);
    return v52 != 0;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    xxxSysCommand((struct tagWND *)a1, 61730, 0LL);
    return v7;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v15 = *((_QWORD *)a5 + 26);
            v16 = *(_QWORD *)(v15 + 504);
            if ( v16 == gpDispInfo + 192LL )
              v16 = *(_QWORD *)(gpDispInfo + 200LL);
            v17 = v16 - 496;
            if ( v17 != v15 )
            {
              while ( a2 )
              {
                v58 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v58;
                v59 = v17;
                if ( v17 )
                  ++*(_DWORD *)(v17 + 8);
                if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(a2, (_DWORD)a5, a1, v17, 0) )
                  goto LABEL_35;
                v20 = *(_QWORD *)(v17 + 504);
                ThreadUnlock1(v19, v18);
                if ( v20 == gpDispInfo + 192LL )
                  v20 = *(_QWORD *)(gpDispInfo + 200LL);
                v17 = v20 - 496;
                if ( v17 == *((_QWORD *)a5 + 26) )
                  return 0;
              }
LABEL_49:
              SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
LABEL_108:
              *(_OWORD *)((char *)a5 + 8) = *(_OWORD *)((char *)a5 + 24);
              xxxCommitMoveSize((struct tagWND *)a1, a5);
              return v7;
            }
          }
        }
        else
        {
          v21 = *((_QWORD *)a5 + 26);
          v22 = *(_QWORD *)(v21 + 496);
          if ( v22 == gpDispInfo + 192LL )
            v22 = *(_QWORD *)(gpDispInfo + 192LL);
          v17 = v22 - 496;
          if ( v17 != v21 )
          {
            while ( a2 )
            {
              v58 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v58;
              v59 = v17;
              if ( v17 )
                ++*(_DWORD *)(v17 + 8);
              if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(a2, (_DWORD)a5, a1, v17, 0) )
              {
LABEL_35:
                if ( a2 == 1 )
                {
                  *((_DWORD *)a5 + 40) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
                    && (v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
                    && (v19 = *(unsigned int *)(*(_QWORD *)(v24 + 8) + 244LL), (v19 & 1) != 0) )
                  {
                    v25 = (_DWORD *)(v17 + 92);
                  }
                  else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 1
                         && (v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
                         && (v19 = *(unsigned int *)(*(_QWORD *)(v26 + 8) + 244LL), (v19 & 1) != 0) )
                  {
                    v25 = (_DWORD *)(v17 + 108);
                  }
                  else
                  {
                    v25 = (_DWORD *)(v17 + 76);
                  }
                  v18 = (unsigned int)((v25[2] - *v25) >> 31);
                  *((_DWORD *)a5 + 69) = *v25 + (v25[2] - *v25) / 2;
                  *((_DWORD *)a5 + 69) = v25[1];
                }
                else if ( (unsigned int)(a2 - 2) <= 1 )
                {
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                }
                ThreadUnlock1(v19, v18);
                goto LABEL_108;
              }
              v23 = *(_QWORD *)(v17 + 496);
              ThreadUnlock1(v19, v18);
              if ( v23 == gpDispInfo + 192LL )
                v23 = *(_QWORD *)(gpDispInfo + 192LL);
              v17 = v23 - 496;
              if ( v17 == *((_QWORD *)a5 + 26) )
                return 0;
            }
            goto LABEL_49;
          }
        }
        return 0;
      }
      v27 = *((_QWORD *)a5 + 26);
      v28 = 2;
      if ( a2 == 3 && !v8 )
      {
        v29 = *(_QWORD *)(v27 + 496);
        if ( v29 == gpDispInfo + 192LL )
          v29 = *(_QWORD *)(gpDispInfo + 192LL);
        v28 = 1;
        v27 = v29 - 496;
      }
      v58 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v58;
      v59 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      v30 = v28;
    }
    else
    {
      v27 = *((_QWORD *)a5 + 26);
      v30 = 1LL;
      if ( a2 == 2 && !v8 )
      {
        v31 = *(_QWORD *)(v27 + 504);
        if ( v31 == gpDispInfo + 192LL )
          v31 = *(_QWORD *)(gpDispInfo + 200LL);
        v30 = 2LL;
        v27 = v31 - 496;
      }
      v58 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v58;
      v59 = v27;
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
    }
    v7 = xxxProgrammaticSemiMaximize(a5, v27, v30);
    ThreadUnlock1(v33, v32);
    return v7;
  }
  v57 = 0LL;
  v56 = 0LL;
  if ( a2 == 4 )
  {
    *((_DWORD *)a5 + 54) = 4;
    UpdateCheckpoint(a1);
  }
  v34 = *((_QWORD *)a5 + 26);
  do
  {
    if ( (*(_DWORD *)(*(_QWORD *)a5 + 352LL) & 0xF) == 2 || v34 == *((_QWORD *)a5 + 23) )
    {
      if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
        && (v35 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v35 + 8) + 244LL) & 1) != 0 )
      {
        v36 = (_OWORD *)(v34 + 92);
      }
      else if ( (*(_DWORD *)(a1 + 352) & 0xF) != 1
             || (v37 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
             || (v38 = *(_DWORD *)(*(_QWORD *)(v37 + 8) + 244LL), v36 = (_OWORD *)(v34 + 108), (v38 & 1) == 0) )
      {
        v36 = (_OWORD *)(v34 + 76);
      }
      *(_OWORD *)v60 = *v36;
    }
    else
    {
      *(_OWORD *)v60 = *(_OWORD *)(v34 + 76);
      PhysicalToLogicalDPIRect(v60, v60, 0LL, (char *)a5 + 184);
    }
    if ( IsDockTargetActive((__int64)a5, v34, 0) && SLODWORD(v60[0]) <= SLOWORD(v55[0]) )
    {
      if ( SLOWORD(v55[0]) <= SLODWORD(v60[1]) )
        v40 = v34;
      v57 = v40;
    }
    v41 = IsDockTargetActive((__int64)a5, v39, 3);
    v44 = v56;
    if ( v41 && SLODWORD(v60[0]) <= v43 )
    {
      if ( v43 <= SLODWORD(v60[1]) )
        v44 = (struct tagMONITOR *)v34;
      v56 = v44;
    }
    v45 = *(_QWORD *)(v34 + 496);
    if ( v45 == gpDispInfo + 192LL )
      v45 = *(_QWORD *)(gpDispInfo + 192LL);
    v34 = v45 - 496;
  }
  while ( v34 != *((_QWORD *)a5 + 26) );
  if ( v44 && v42 )
  {
    if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
      && (v46 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v46 + 8) + 244LL) & 1) != 0 )
    {
      v47 = v42 + 92;
    }
    else if ( (*(_DWORD *)(a1 + 352) & 0xF) != 1
           || (v48 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
           || (v49 = *(_DWORD *)(*(_QWORD *)(v48 + 8) + 244LL), v47 = v42 + 108, (v49 & 1) == 0) )
    {
      v47 = v42 + 76;
    }
    v50 = *(_WORD *)(v47 + 4);
    if ( (*(_DWORD *)(*(_QWORD *)a5 + 352LL) & 0xF) != 2 && *((_WORD *)v44 + 77) != *(_WORD *)(v42 + 154) )
    {
      v55[1] = 0;
      v56 = (struct tagMONITOR *)v42;
      v55[0] = v43;
      LogicalToPhysicalDPIPoint(v55, v55, 0LL, (char *)a5 + 184);
      PhysicalToLogicalDPIPoint(v55, v55, 0LL);
      v43 = v55[0];
      v44 = v56;
    }
    SizeRect(
      a5,
      (unsigned __int16)(v43 + *((_WORD *)a5 + 76)) | ((unsigned __int16)(v50 + *((_WORD *)a5 + 78)) << 16),
      v44,
      0LL);
    goto LABEL_108;
  }
  return 0;
}
