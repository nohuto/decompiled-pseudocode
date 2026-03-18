/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206950 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209AF0 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C0082E40 (_MonitorFromRect.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     CkptRestore @ 0x1C0085C30 (CkptRestore.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C015D788 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C0205830 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C0207890 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     MigrateRectMonitors @ 0x1C020AF84 (MigrateRectMonitors.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r12d
  int v5; // edi
  BOOL v6; // r15d
  __int64 v7; // rdx
  unsigned __int8 v9; // al
  int v10; // r13d
  BOOL v11; // r14d
  int *v12; // rax
  __int64 v13; // r8
  int v14; // r10d
  int v15; // r11d
  int *v16; // rdi
  __int64 v17; // r15
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // ecx
  int v25; // r8d
  BOOL v26; // r12d
  __int64 *v27; // r15
  __int64 v28; // rsi
  int v29; // edx
  BOOL v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edi
  int v34; // ecx
  struct tagRECT *Prop; // rax
  struct tagRECT *v36; // r15
  int v37; // eax
  char v38; // dl
  int v39; // ecx
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // rax
  BOOL v43; // [rsp+40h] [rbp-59h]
  _QWORD v44[3]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v45[3]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v46[5]; // [rsp+78h] [rbp-21h] BYREF
  struct tagRECT v47; // [rsp+A0h] [rbp+7h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = !IsRectEmptyInl((const struct tagRECT *)a2 + 14);
  v43 = v6;
  if ( *((_QWORD *)a1 + 11) != GetDesktopWindow((__int64)a1) )
  {
LABEL_76:
    v34 = *((_DWORD *)a2 + 45);
    if ( (v34 & 0x1000) != 0 && (v34 & 0x6000) == 0 && (v34 & 0x20) == 0
      || (*((_BYTE *)a1 + 55) & 1) != 0 && (v34 & 0x100000) == 0 )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
      v36 = Prop;
      if ( Prop )
      {
        v47 = *(struct tagRECT *)((char *)a2 + 8);
        SwapRect(Prop, &v47);
        xxxMinMaximizeEx(*(struct tagWND **)a2, 9u, 4, 0LL, 0LL);
        SwapRect(&v47, v36);
        MakeArrangedStateObservable(a2);
      }
    }
    v37 = *((_DWORD *)a2 + 40);
    v38 = 4;
    if ( (v37 == 9 && !v5 || v37 == 10) && !v4 )
      v38 = 5;
    if ( (*((_DWORD *)a2 + 79) & 0x20) != 0 )
      v38 |= 0x10u;
    v26 = v43;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 2),
      *((unsigned int *)a2 + 3),
      *((_DWORD *)a2 + 4) - *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 3),
      v38);
    v39 = *((_DWORD *)a2 + 45);
    if ( (v39 & 0x100000) == 0 || !gSqmIsOptedIn )
    {
LABEL_105:
      if ( (*((_BYTE *)a1 + 55) & 0x20) == 0 )
        goto LABEL_69;
LABEL_106:
      CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 8));
      goto LABEL_69;
    }
    v40 = *((_BYTE *)a1 + 289) & 3;
    if ( v40 == 3 )
    {
      v41 = 3537LL;
    }
    else
    {
      if ( v40 )
      {
        v41 = 3529LL;
        goto LABEL_104;
      }
      if ( (*((_BYTE *)a1 + 55) & 0x20) != 0 )
        goto LABEL_106;
      if ( (*((_DWORD *)a2 + 45) & 0x6000) != 0x6000 )
      {
        if ( (v39 & 0x1000) != 0 )
        {
          if ( (v39 & 0x6000) == 0 )
          {
            v41 = 3530LL;
            goto LABEL_104;
          }
        }
        else if ( (v39 & 0x6000) == 0 )
        {
          goto LABEL_105;
        }
        v41 = 5882LL;
        goto LABEL_104;
      }
      v41 = 3535LL;
    }
LABEL_104:
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v41, 1LL);
    goto LABEL_105;
  }
  if ( !*(_DWORD *)(v7 + 216) && (*(_DWORD *)(v7 + 180) & 0x300) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 54LL) & 1) != 0 )
    {
      v9 = 1;
      goto LABEL_10;
    }
    *((_DWORD *)a2 + 45) |= 0x80000u;
  }
  v9 = 0;
LABEL_10:
  v10 = v9;
  v11 = (*((_DWORD *)a2 + 45) & 0x300) != 0 || v9;
  v12 = (int *)GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  v16 = v12;
  if ( v12 )
  {
    if ( *((_DWORD *)a2 + 40) - (int)v13 <= (unsigned int)v13 && (v14 & 0x6000) == 0x6000 && v15 == 768 )
    {
      *v12 = *((_DWORD *)a2 + 2);
      v12[2] = *((_DWORD *)a2 + 4);
    }
    else if ( *((_QWORD *)a2 + 24) == *((_QWORD *)a2 + 26) )
    {
      if ( (v14 & 0x1000) == 0 && v11 && (!v6 || *((_DWORD *)a2 + 26) != -32000 || *((_DWORD *)a2 + 27) != -32000) )
        *(_OWORD *)v12 = *(_OWORD *)((char *)a2 + 104);
    }
    else if ( v10 || (*((_BYTE *)a1 + 289) & 3) != 0 )
    {
      if ( (v14 & 0x1000000) != 0
        && (*(_QWORD *)v12 != *((_QWORD *)a2 + 17) || *((_QWORD *)v12 + 1) != *((_QWORD *)a2 + 18)) )
      {
        *(_OWORD *)v12 = *(_OWORD *)((char *)a2 + 136);
      }
      v17 = *((_QWORD *)a2 + 24);
      if ( (*((_BYTE *)a1 + 289) & 3) == 3 )
        v17 = MonitorFromRect(v12, 2LL, v13);
      v18 = *((_QWORD *)a2 + 26);
      if ( (*((_DWORD *)a2 + 45) & 0x300) == 0x300 )
      {
        v19 = *((_DWORD *)a2 + 69);
        if ( *v16 <= v19 && v19 < v16[2] )
          v18 = MonitorFromRect(v16, 2LL, v13);
      }
      if ( (*((_BYTE *)a1 + 289) & 3) == 3 && (*((_DWORD *)a2 + 45) & 0x300) == 0x300 )
        *((_DWORD *)a2 + 45) |= 0x80000u;
      v44[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v44;
      v44[1] = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v45[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v45;
      v45[1] = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      if ( *(_WORD *)(v17 + 152) != *(_WORD *)(v18 + 152) && *((_DWORD *)a1 + 86) == 2 )
        xxxGetMinMaxTrackInfo(a2, 0);
      if ( (unsigned int)MigrateRectMonitors(
                           (_DWORD)a1,
                           (_DWORD)v16,
                           v17,
                           (unsigned int)&v47,
                           v18,
                           0LL,
                           (__int64)a2,
                           48) )
        *(struct tagRECT *)v16 = v47;
      ThreadUnlock1(v21, v20);
      ThreadUnlock1(v23, v22);
      LODWORD(v13) = 1;
    }
  }
  v24 = *((_DWORD *)a2 + 45);
  if ( ((v24 ^ (v24 >> 5)) & 0x300) != 0 || (v24 & 0x80000) != 0 )
  {
    v4 = v13;
  }
  else
  {
    v4 = 0;
    if ( *((_QWORD *)a2 + 1) != *((_QWORD *)a1 + 14) || *((_QWORD *)a2 + 2) != *((_QWORD *)a1 + 15) )
    {
      v5 = v13;
      goto LABEL_59;
    }
  }
  v5 = 0;
LABEL_59:
  MakeArrangedStateObservable(a2);
  if ( !v10 )
    goto LABEL_76;
  if ( (*((_BYTE *)a1 + 55) & 1) == 0 || *((_QWORD *)a2 + 24) != *((_QWORD *)a2 + 26) )
  {
    v25 = gdwPUDFlags & 0x10000 | 6;
    if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
      v25 = gdwPUDFlags & 0x10000 | 0x16;
    xxxMinMaximizeEx(a1, 3u, v25, *((_QWORD *)a2 + 26), 0LL);
  }
  if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 && gSqmIsOptedIn )
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
  v26 = v43;
LABEL_69:
  v27 = *(__int64 **)a2;
  v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 24LL) + 312LL);
  if ( !v26 )
  {
    if ( v28 )
    {
      v30 = !IsRectEmptyInl((const struct tagRECT *)a2 + 15);
      if ( v32 || v30 )
      {
        v33 = 2;
        if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
        {
          if ( v32 )
            v33 = v31 != 0;
          else
            v33 = v29 == 0 ? 2 : 0;
        }
        memset(v46, 0, sizeof(v46));
        v42 = *v27;
        v46[3] = 0LL;
        v46[0] = v42;
        v46[2] = v33;
        LODWORD(v46[1]) = 2;
        if ( (unsigned int)xxxNotifyIAMWindowManagementEvent((const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const)v46)
          && !v33 )
        {
          SetLastInputWoken(*(_QWORD *)(v28 + 16), 0LL);
        }
      }
    }
  }
  if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
    {
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531LL, *((unsigned int *)a2 + 73));
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528LL, *((unsigned int *)a2 + 74));
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536LL, *((unsigned int *)a2 + 75));
    }
  }
}
