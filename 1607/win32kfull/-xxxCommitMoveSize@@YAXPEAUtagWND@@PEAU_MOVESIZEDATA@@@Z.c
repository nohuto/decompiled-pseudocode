/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FE80C
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0F0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0200F20 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C00B0090 (_MonitorFromRect.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C015A6E0 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FCEF8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FEF8C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     MigrateRectMonitors @ 0x1C0202620 (MigrateRectMonitors.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r15d
  int v5; // ebp
  __int64 v6; // rdx
  unsigned __int8 v8; // al
  int v9; // r12d
  int *v10; // rax
  int v11; // r10d
  int v12; // r11d
  int *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  int v22; // r8d
  int v23; // ecx
  struct tagRECT *Prop; // rax
  struct tagRECT *v25; // r14
  int v26; // eax
  char v27; // dl
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // r8
  int v31; // eax
  int v32; // ecx
  char v33; // al
  __int64 v34; // rdx
  _QWORD v35[3]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v36[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v37; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_QWORD *)a1 + 11) != GetDesktopWindow((__int64)a1) )
  {
LABEL_67:
    v23 = *((_DWORD *)a2 + 45);
    if ( (v23 & 0x1000) != 0 && (v23 & 0x6000) == 0 && (v23 & 0x20) == 0
      || (*((_BYTE *)a1 + 55) & 1) != 0 && (v23 & 0x100000) == 0 )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
      v25 = Prop;
      if ( Prop )
      {
        v37 = *(struct tagRECT *)((char *)a2 + 8);
        SwapRect(Prop, &v37);
        xxxMinMaximizeEx(*(struct tagWND **)a2, 9u, 4, 0LL, 0LL);
        SwapRect(&v37, v25);
        MakeArrangedStateObservable(a2);
      }
    }
    v26 = *((_DWORD *)a2 + 40);
    v27 = 4;
    if ( (v26 == 9 && !v5 || v26 == 10) && !v4 )
      v27 = 5;
    if ( (*((_DWORD *)a2 + 79) & 0x20) != 0 )
      v27 |= 0x10u;
    v28 = *((unsigned int *)a2 + 3);
    v29 = *((_DWORD *)a2 + 5) - v28;
    v30 = *((unsigned int *)a2 + 2);
    v31 = *((_DWORD *)a2 + 4) - v30;
    *((_DWORD *)a2 + 45) |= 0x80000000;
    xxxSetWindowPos(a1, 0LL, v30, v28, v31, v29, v27);
    v32 = *((_DWORD *)a2 + 45);
    if ( (v32 & 0x100000) == 0 || !gSqmIsOptedIn )
    {
LABEL_96:
      if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 )
        goto LABEL_98;
      goto LABEL_97;
    }
    v33 = *((_BYTE *)a1 + 289) & 3;
    if ( v33 == 3 )
    {
      v34 = 3537LL;
    }
    else
    {
      if ( v33 )
      {
        v34 = 3529LL;
        goto LABEL_95;
      }
      if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 )
      {
LABEL_97:
        CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 8));
LABEL_98:
        if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
        {
          if ( gSqmIsOptedIn )
          {
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531LL, *((unsigned int *)a2 + 73));
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528LL, *((unsigned int *)a2 + 74));
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536LL, *((unsigned int *)a2 + 75));
          }
        }
        return;
      }
      if ( (*((_DWORD *)a2 + 45) & 0x6000) != 0x6000 )
      {
        if ( (v32 & 0x1000) != 0 )
        {
          if ( (v32 & 0x6000) == 0 )
          {
            v34 = 3530LL;
            goto LABEL_95;
          }
        }
        else if ( (v32 & 0x6000) == 0 )
        {
          goto LABEL_96;
        }
        v34 = 5882LL;
        goto LABEL_95;
      }
      v34 = 3535LL;
    }
LABEL_95:
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v34, 1LL);
    goto LABEL_96;
  }
  if ( !*(_DWORD *)(v6 + 216) && (*(_DWORD *)(v6 + 180) & 0x300) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 54LL) & 1) != 0 )
    {
      v8 = 1;
      goto LABEL_10;
    }
    *((_DWORD *)a2 + 45) |= 0x80000u;
  }
  v8 = 0;
LABEL_10:
  v9 = v8;
  if ( (*((_DWORD *)a2 + 45) & 0x300) != 0 || v8 )
    v5 = 1;
  v10 = (int *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  v13 = v10;
  if ( v10 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 40) - 1) <= 1 && (v11 & 0x6000) == 0x6000 && v12 == 768 )
    {
      *v10 = *((_DWORD *)a2 + 2);
      v10[2] = *((_DWORD *)a2 + 4);
    }
    else if ( *((_QWORD *)a2 + 24) == *((_QWORD *)a2 + 26) )
    {
      if ( (v11 & 0x1000) == 0
        && v5
        && ((*((_DWORD *)a2 + 64) & 8) == 0 || *((_DWORD *)a2 + 26) != -32000 || *((_DWORD *)a2 + 27) != -32000) )
      {
        *(_OWORD *)v10 = *(_OWORD *)((char *)a2 + 104);
      }
    }
    else if ( v9 || (*((_BYTE *)a1 + 289) & 3) != 0 )
    {
      if ( (v11 & 0x1000000) != 0
        && (*(_QWORD *)v10 != *((_QWORD *)a2 + 17) || *((_QWORD *)v10 + 1) != *((_QWORD *)a2 + 18)) )
      {
        *(_OWORD *)v10 = *(_OWORD *)((char *)a2 + 136);
      }
      v14 = *((_QWORD *)a2 + 24);
      if ( (*((_BYTE *)a1 + 289) & 3) == 3 )
        v14 = MonitorFromRect(v10, 2u);
      v15 = *((_QWORD *)a2 + 26);
      if ( (*((_DWORD *)a2 + 45) & 0x300) == 0x300 )
      {
        v16 = *((_DWORD *)a2 + 69);
        if ( *v13 <= v16 && v16 < v13[2] )
          v15 = MonitorFromRect(v13, 2u);
      }
      if ( (*((_BYTE *)a1 + 289) & 3) == 3 && (*((_DWORD *)a2 + 45) & 0x300) == 0x300 )
        *((_DWORD *)a2 + 45) |= 0x80000u;
      v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v35;
      v35[1] = v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 8);
      v36[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v36;
      v36[1] = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      if ( *(_WORD *)(v14 + 154) != *(_WORD *)(v15 + 154) && (*((_DWORD *)a1 + 88) & 0xF) == 2 )
        xxxGetMinMaxTrackInfo(a2, 0);
      if ( (unsigned int)MigrateRectMonitors(
                           (_DWORD)a1,
                           (_DWORD)v13,
                           v14,
                           (unsigned int)&v37,
                           v15,
                           0LL,
                           (__int64)a2,
                           48) )
        *(struct tagRECT *)v13 = v37;
      ThreadUnlock1(v18, v17);
      ThreadUnlock1(v20, v19);
    }
  }
  v21 = *((_DWORD *)a2 + 45);
  if ( ((v21 ^ (v21 >> 5)) & 0x300) != 0 || (v21 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( *((_QWORD *)a2 + 1) != *((_QWORD *)a1 + 14) || *((_QWORD *)a2 + 2) != *((_QWORD *)a1 + 15) )
    {
      v5 = 1;
      goto LABEL_58;
    }
  }
  v5 = 0;
LABEL_58:
  MakeArrangedStateObservable(a2);
  if ( !v9 )
    goto LABEL_67;
  if ( (*((_BYTE *)a1 + 55) & 1) == 0 || *((_QWORD *)a2 + 24) != *((_QWORD *)a2 + 26) )
  {
    v22 = gdwPUDFlags & 0x10000 | 6;
    if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
      v22 = gdwPUDFlags & 0x10000 | 0x16;
    xxxMinMaximizeEx(a1, 3u, v22, *((_QWORD *)a2 + 26), 0LL);
  }
  if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
    goto LABEL_98;
  }
}
