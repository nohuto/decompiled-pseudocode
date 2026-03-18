/*
 * XREFs of xxxBeginPaint @ 0x14012A7C4
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x14012A0D0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x14012A670 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402D8E4C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     CalcWindowRgn @ 0x14002C744 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x14012B02C (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     zzzInternalHideCaret @ 0x14012B0B4 (zzzInternalHideCaret.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     xxxSendEraseBkgnd @ 0x14012BCEC (xxxSendEraseBkgnd.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14012C19C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x14012C244 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxBeginPaint(unsigned int **a1, __int64 a2)
{
  unsigned int *v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // r12d
  unsigned int *v7; // rax
  unsigned int v8; // r15d
  int v9; // ebp
  int v10; // eax
  int v11; // r15d
  unsigned int *v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // r12d
  unsigned int *v16; // rax
  unsigned int v17; // r15d
  int v18; // ebp
  int v19; // eax
  int v20; // r15d
  unsigned int *v21; // rax
  char v22; // cl
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // r12d
  __int64 v26; // rcx
  unsigned int *v27; // rax
  unsigned int v28; // r15d
  int v29; // ebp
  int v30; // eax
  int v31; // r15d
  _QWORD *CurrentThreadWin32Thread; // rax
  unsigned int *v33; // rax
  int v34; // r12d
  unsigned int v35; // r15d
  unsigned int v36; // ebp
  unsigned int v37; // ebx
  unsigned int *v38; // rax
  int v39; // ebp
  int v40; // ebx
  int v41; // r15d
  unsigned int *v42; // rax
  unsigned int v43; // r15d
  unsigned int v44; // ebp
  unsigned int v45; // ebx
  unsigned int *v46; // rax
  int v47; // ebp
  int v48; // ebx
  int v49; // r15d
  unsigned int *v50; // rcx
  unsigned int v51; // r14d
  unsigned int v52; // esi
  unsigned int v53; // ebx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned int *v56; // rax
  int v57; // esi
  int v58; // ebx
  int v59; // r14d
  unsigned int *v60; // rax
  __int64 v61; // rsi
  __int64 DCEx; // rax
  __int64 v63; // rbx
  __int64 result; // rax
  HRGN NCUpdateRgn; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  void *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  void *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  void *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  void *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  void *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  void *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 EmptyRgnPublic; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 UserSessionState; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  BOOL v94; // ebx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rax
  _OWORD v101[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(W32GetUserSessionState(a1, a2) + 66792) & 0x10000000) == 0 )
    goto LABEL_6;
  v3 = a1[5];
  v4 = v3[7];
  v5 = v3[6];
  v6 = v3[58];
  *((_BYTE *)v3 + 20) |= 4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_6;
  v7 = a1[5];
  v8 = v7[7];
  v9 = v5 ^ v7[6];
  v10 = v6 ^ v7[58];
  v11 = v4 ^ v8;
  if ( !v11 )
  {
    if ( v9 )
      goto LABEL_76;
    if ( !v10 )
      goto LABEL_6;
  }
  if ( (v11 & 0xB9CF0000) != 0 )
  {
LABEL_73:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v80 = (void *)ReferenceDwmApiPort(v79, v78);
    DwmAsyncChildStyleChange(v80);
    goto LABEL_74;
  }
LABEL_76:
  if ( (v9 & 0x4E27A9) != 0 || (v10 & 0x372C0) != 0 )
    goto LABEL_73;
LABEL_74:
  if ( (v11 & 0x1C40000) != 0 || (v9 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_6:
  v12 = a1[5];
  v13 = v12[7];
  v14 = v12[6];
  v15 = v12[58];
  *((_BYTE *)v12 + 18) &= ~0x40u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_10;
  v16 = a1[5];
  v17 = v16[7];
  v18 = v14 ^ v16[6];
  v19 = v15 ^ v16[58];
  v20 = v13 ^ v17;
  if ( !v20 )
  {
    if ( v18 )
      goto LABEL_48;
    if ( !v19 )
      goto LABEL_10;
  }
  if ( (v20 & 0xB9CF0000) != 0 )
  {
LABEL_45:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v68 = (void *)ReferenceDwmApiPort(v67, v66);
    DwmAsyncChildStyleChange(v68);
    goto LABEL_46;
  }
LABEL_48:
  if ( (v18 & 0x4E27A9) != 0 || (v19 & 0x372C0) != 0 )
    goto LABEL_45;
LABEL_46:
  if ( (v20 & 0x1C40000) != 0 || (v18 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_10:
  v21 = a1[5];
  v22 = *((_BYTE *)v21 + 17);
  if ( (v22 & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, (struct tagWND *)a1, 0x120u, 1);
      NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)a1, 0);
      xxxSendNCPaint((struct tagWND *)a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1[5] + 17) & 0x20) != 0 );
    goto LABEL_15;
  }
  v23 = v21[7];
  v24 = v21[6];
  v25 = v21[58];
  *((_BYTE *)v21 + 17) = v22 & 0xDF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_15;
  v27 = a1[5];
  v28 = v27[7];
  v26 = v27[6];
  v29 = v24 ^ v27[6];
  v30 = v25 ^ v27[58];
  v31 = v23 ^ v28;
  if ( !v31 )
  {
    if ( v29 )
      goto LABEL_83;
    if ( !v30 )
      goto LABEL_15;
  }
  if ( (v31 & 0xB9CF0000) != 0 )
  {
LABEL_80:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v83 = (void *)ReferenceDwmApiPort(v82, v81);
    DwmAsyncChildStyleChange(v83);
    goto LABEL_81;
  }
LABEL_83:
  if ( (v29 & 0x4E27A9) != 0 || (v30 & 0x372C0) != 0 )
    goto LABEL_80;
LABEL_81:
  if ( (v31 & 0x1C40000) != 0 || (v29 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_15:
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v26);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
  if ( a1 == *(unsigned int ***)(CurrentThreadWin32Thread[58] + 344LL) )
    zzzInternalHideCaret();
  v33 = a1[5];
  v34 = *((_BYTE *)v33 + 17) & 2;
  if ( (*((_BYTE *)v33 + 17) & 2) != 0 )
  {
    v35 = v33[7];
    v36 = v33[6];
    v37 = v33[58];
    *((_BYTE *)v33 + 17) &= ~4u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_24;
    v38 = a1[5];
    v39 = v38[6] ^ v36;
    v40 = v38[58] ^ v37;
    v41 = v38[7] ^ v35;
    if ( !v41 )
    {
      if ( v39 )
      {
LABEL_62:
        if ( (v39 & 0x4E27A9) == 0 && (v40 & 0x372C0) == 0 )
        {
LABEL_60:
          if ( (v41 & 0x1C40000) != 0 || (v39 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_24:
          v42 = a1[5];
          v43 = v42[7];
          v44 = v42[6];
          v45 = v42[58];
          *((_BYTE *)v42 + 17) &= ~2u;
          if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            goto LABEL_28;
          v46 = a1[5];
          v47 = v46[6] ^ v44;
          v48 = v46[58] ^ v45;
          v49 = v46[7] ^ v43;
          if ( !v49 )
          {
            if ( v47 )
            {
LABEL_69:
              if ( (v47 & 0x4E27A9) == 0 && (v48 & 0x372C0) == 0 )
              {
LABEL_67:
                if ( (v49 & 0x1C40000) != 0 || (v47 & 0x200A0381) != 0 )
                  WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
                goto LABEL_28;
              }
LABEL_66:
              DirtyVisRgnTrackers((struct tagWND *)a1);
              v77 = (void *)ReferenceDwmApiPort(v76, v75);
              DwmAsyncChildStyleChange(v77);
              goto LABEL_67;
            }
            if ( !v48 )
              goto LABEL_28;
          }
          if ( (v49 & 0xB9CF0000) != 0 )
            goto LABEL_66;
          goto LABEL_69;
        }
LABEL_59:
        DirtyVisRgnTrackers((struct tagWND *)a1);
        v74 = (void *)ReferenceDwmApiPort(v73, v72);
        DwmAsyncChildStyleChange(v74);
        goto LABEL_60;
      }
      if ( !v40 )
        goto LABEL_24;
    }
    if ( (v41 & 0xB9CF0000) != 0 )
      goto LABEL_59;
    goto LABEL_62;
  }
LABEL_28:
  v50 = a1[5];
  if ( *((_QWORD *)v50 + 17) || (*((_BYTE *)v50 + 17) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    v50 = a1[5];
  }
  v51 = v50[7];
  v52 = v50[6];
  v53 = v50[58];
  *((_BYTE *)v50 + 17) &= ~0x10u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v56 = a1[5];
    v55 = v56[6];
    v57 = v55 ^ v52;
    v54 = v56[58];
    v58 = v54 ^ v53;
    v59 = v56[7] ^ v51;
    if ( !v59 )
    {
      if ( v57 )
      {
LABEL_55:
        if ( (v57 & 0x4E27A9) == 0 && (v58 & 0x372C0) == 0 )
        {
LABEL_53:
          if ( (v59 & 0x1C40000) != 0 || (v57 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
          goto LABEL_34;
        }
LABEL_52:
        DirtyVisRgnTrackers((struct tagWND *)a1);
        v71 = (void *)ReferenceDwmApiPort(v70, v69);
        DwmAsyncChildStyleChange(v71);
        goto LABEL_53;
      }
      if ( !v58 )
        goto LABEL_34;
    }
    if ( (v59 & 0xB9CF0000) != 0 )
      goto LABEL_52;
    goto LABEL_55;
  }
LABEL_34:
  v60 = a1[5];
  v61 = *((_QWORD *)v60 + 17);
  *((_QWORD *)v60 + 17) = 0LL;
  if ( (a1[5][5] & 2) != 0 && v61 )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(v55, v54) + 43096) )
    {
      EmptyRgnPublic = CreateEmptyRgnPublic();
      *(_QWORD *)(W32GetUserSessionState(v88, v87) + 43096) = EmptyRgnPublic;
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v85, v84) + 43096) )
    {
      UserSessionState = W32GetUserSessionState(v90, v89);
      if ( v61 == 1 )
      {
        v94 = ((*(_DWORD *)(UserSessionState + 63404) >> 10) & 1) == 0;
        v95 = W32GetUserSessionState(v93, v92);
        CalcWindowRgn((__int64)a1, *(_QWORD *)(v95 + 43096), v94);
      }
      else
      {
        v99 = *(_QWORD *)(UserSessionState + 43096);
        v100 = W32GetUserSessionState(v93, v92);
        GreCombineRgn(*(_QWORD *)(v100 + 43096), v99, v61, 2LL);
      }
      v98 = W32GetUserSessionState(v97, v96);
      ++*(_DWORD *)(v98 + 43268);
    }
  }
  *(_QWORD *)(a2 + 28) = 0LL;
  DCEx = _GetDCEx(a1, v61, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v101[0] = 0LL;
  v63 = DCEx;
  if ( (unsigned int)GreGetClipBox(DCEx, a2 + 12, 1LL) != 1 )
  {
    if ( *(char *)(*((_QWORD *)a1[17] + 1) + 8LL) >= 0
      || (GetRect(a1, v101, 17LL), (unsigned int)IntersectRect(a2 + 12, a2 + 12, v101)) )
    {
      if ( v34 )
        xxxSendEraseBkgnd((struct tagWND *)a1);
    }
  }
  xxxSendChildNCPaint((struct tagWND *)a1);
  result = v63;
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1[5] + 17) >> 2) & 1;
  return result;
}
