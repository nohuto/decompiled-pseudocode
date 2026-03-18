/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70
 * Callers:
 *     xxxArrangeWindow @ 0x1C020BBA4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C0077304 (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0205AD4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C0205F4C (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C0206070 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209E38 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C020CAEC (xxxEvaluateDestRectForMonitorMigration.c)
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
  int v24; // edx
  _DWORD *v25; // rsi
  __int64 v26; // rdx
  unsigned int v27; // r13d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  int v34; // edx
  _OWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  bool v38; // al
  __int64 v39; // r9
  __int16 v40; // r10
  struct tagMONITOR *v41; // r8
  __int64 v42; // rsi
  int v43; // edx
  __int64 v44; // rax
  __int16 v45; // si
  int v46; // ecx
  __int64 v47; // rax
  int v48; // r13d
  _DWORD v50[2]; // [rsp+30h] [rbp-50h] BYREF
  struct tagMONITOR *v51; // [rsp+38h] [rbp-48h]
  __int64 v52; // [rsp+40h] [rbp-40h] BYREF
  __int64 v53; // [rsp+48h] [rbp-38h] BYREF
  __int64 v54; // [rsp+50h] [rbp-30h]
  __int64 v55[2]; // [rsp+60h] [rbp-20h] BYREF

  v50[0] = a4;
  v7 = 1;
  *(_OWORD *)v55 = 0LL;
  v8 = a5 && (*((_DWORD *)a5 + 64) & 8) != 0;
  if ( !a3 )
  {
    v48 = 2;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v48 = 6;
    v47 = xxxMinMaximizeEx((struct tagWND *)a1, 3u, v48 | 0x10u, 0LL, v55);
    return v47 != 0;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    v46 = 0;
    if ( (unsigned int)(a2 - 1) <= 2 )
      v46 = 4;
    v47 = xxxMinMaximizeEx((struct tagWND *)a1, 6u, v46 | gdwPUDFlags & 0x10000u, 0LL, 0LL);
    return v47 != 0;
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
                v53 = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = &v53;
                v54 = v17;
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
LABEL_47:
              SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
LABEL_102:
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
              v53 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v53;
              v54 = v17;
              if ( v17 )
                ++*(_DWORD *)(v17 + 8);
              if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(a2, (_DWORD)a5, a1, v17, 0) )
              {
LABEL_35:
                if ( a2 == 1 )
                {
                  *((_DWORD *)a5 + 40) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v24 = *(_DWORD *)(a1 + 344);
                  if ( v24
                    || (v19 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL),
                        (v19 & 1) == 0) )
                  {
                    if ( v24 == 1
                      && (v19 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL),
                          (v19 & 1) != 0) )
                    {
                      v25 = (_DWORD *)(v17 + 108);
                    }
                    else
                    {
                      v25 = (_DWORD *)(v17 + 76);
                    }
                  }
                  else
                  {
                    v25 = (_DWORD *)(v17 + 92);
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
                goto LABEL_102;
              }
              v23 = *(_QWORD *)(v17 + 496);
              ThreadUnlock1(v19, v18);
              if ( v23 == gpDispInfo + 192LL )
                v23 = *(_QWORD *)(gpDispInfo + 192LL);
              v17 = v23 - 496;
              if ( v17 == *((_QWORD *)a5 + 26) )
                return 0;
            }
            goto LABEL_47;
          }
        }
        return 0;
      }
      v26 = *((_QWORD *)a5 + 26);
      v27 = 2;
      if ( a2 == 3 && !v8 )
      {
        v28 = *(_QWORD *)(v26 + 496);
        if ( v28 == gpDispInfo + 192LL )
          v28 = *(_QWORD *)(gpDispInfo + 192LL);
        v27 = 1;
        v26 = v28 - 496;
      }
      v53 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v53;
      v54 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v29 = v27;
    }
    else
    {
      v26 = *((_QWORD *)a5 + 26);
      v29 = 1LL;
      if ( a2 == 2 && !v8 )
      {
        v30 = *(_QWORD *)(v26 + 504);
        if ( v30 == gpDispInfo + 192LL )
          v30 = *(_QWORD *)(gpDispInfo + 200LL);
        v29 = 2LL;
        v26 = v30 - 496;
      }
      v53 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v53;
      v54 = v26;
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
    }
    v7 = xxxProgrammaticSemiMaximize(a5, v26, v29);
    ThreadUnlock1(v32, v31);
    return v7;
  }
  v52 = 0LL;
  v51 = 0LL;
  if ( a2 == 4 )
  {
    *((_DWORD *)a5 + 54) = 4;
    UpdateCheckpoint(a1);
  }
  v33 = *((_QWORD *)a5 + 26);
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)a5 + 344LL) == 2 || v33 == *((_QWORD *)a5 + 23) )
    {
      v34 = *(_DWORD *)(a1 + 344);
      if ( v34 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
      {
        if ( v34 != 1
          || (v35 = (_OWORD *)(v33 + 108),
              (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
        {
          v35 = (_OWORD *)(v33 + 76);
        }
      }
      else
      {
        v35 = (_OWORD *)(v33 + 92);
      }
      *(_OWORD *)v55 = *v35;
    }
    else
    {
      *(_OWORD *)v55 = *(_OWORD *)(v33 + 76);
      PhysicalToLogicalDPIRect(v55, v55, 0LL, (char *)a5 + 184);
    }
    if ( IsDockTargetActive((__int64)a5, v33, 0) && SLODWORD(v55[0]) <= SLOWORD(v50[0]) )
    {
      if ( SLOWORD(v50[0]) <= SLODWORD(v55[1]) )
        v37 = v33;
      v52 = v37;
    }
    v38 = IsDockTargetActive((__int64)a5, v36, 3);
    v41 = v51;
    if ( v38 && SLODWORD(v55[0]) <= v40 )
    {
      if ( v40 <= SLODWORD(v55[1]) )
        v41 = (struct tagMONITOR *)v33;
      v51 = v41;
    }
    v42 = *(_QWORD *)(v33 + 496);
    if ( v42 == gpDispInfo + 192LL )
      v42 = *(_QWORD *)(gpDispInfo + 192LL);
    v33 = v42 - 496;
  }
  while ( v33 != *((_QWORD *)a5 + 26) );
  if ( v41 && v39 )
  {
    v43 = *(_DWORD *)(a1 + 344);
    if ( v43 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v43 != 1
        || (v44 = v39 + 108, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
      {
        v44 = v39 + 76;
      }
    }
    else
    {
      v44 = v39 + 92;
    }
    v45 = *(_WORD *)(v44 + 4);
    if ( *(_DWORD *)(*(_QWORD *)a5 + 344LL) != 2 && *((_WORD *)v41 + 76) != *(_WORD *)(v39 + 152) )
    {
      v50[1] = 0;
      v51 = (struct tagMONITOR *)v39;
      v50[0] = v40;
      LogicalToPhysicalDPIPoint(v50, v50, 0LL, (char *)a5 + 184);
      PhysicalToLogicalDPIPoint(v50, v50, 0LL, &v52);
      v40 = v50[0];
      v41 = v51;
    }
    SizeRect(
      a5,
      (unsigned __int16)(v40 + *((_WORD *)a5 + 76)) | ((unsigned __int16)(v45 + *((_WORD *)a5 + 78)) << 16),
      v41,
      0LL);
    goto LABEL_102;
  }
  return 0;
}
