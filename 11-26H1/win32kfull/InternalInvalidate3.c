/*
 * XREFs of InternalInvalidate3 @ 0x14002EEB8
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x14002E2B0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 * Callees:
 *     CalcWindowRgn @ 0x14002C744 (CalcWindowRgn.c)
 *     IncPaintCount @ 0x14002FB54 (IncPaintCount.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     IncPaintCountInterMoveSize @ 0x1402E70CC (IncPaintCountInterMoveSize.c)
 */

void __fastcall InternalInvalidate3(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  int v6; // r14d
  __int64 v7; // rcx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  BOOL v12; // ebx
  int v13; // eax
  int v14; // ebp
  int v15; // ebx
  _DWORD *v16; // rax
  int v17; // ebx
  int v18; // r15d
  int v19; // r13d
  __int64 v20; // rax
  int v21; // r12d
  int v22; // r14d
  int v23; // ebx
  __int64 v24; // rcx
  unsigned int *v25; // rax
  int v26; // r14d
  int v27; // ebx
  int v28; // r12d
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v30; // rax
  int v31; // r12d
  int v32; // r14d
  int v33; // ebx
  _DWORD *v34; // rax
  int v35; // r14d
  int v36; // ebx
  int v37; // r12d
  __int64 v38; // rax
  int v39; // r15d
  int v40; // ebp
  int v41; // ebx
  _DWORD *v42; // rax
  int v43; // ebp
  int v44; // ebx
  int v45; // r15d
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 UserSessionState; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  void *v59; // rax
  __int64 v60; // r8
  __int64 v61; // rdx
  struct tagTHREADINFO *v62; // rbx
  int v63; // [rsp+20h] [rbp-48h]
  BOOL v65; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    goto LABEL_6;
  v7 = *((_QWORD *)a1 + 3);
  v8 = 0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 8);
    if ( v9 )
      v8 = *(struct tagWND **)(v9 + 24);
  }
  if ( a1 != v8 || !(unsigned int)IsWindowDesktopComposed(a1) )
  {
LABEL_6:
    v10 = *((_QWORD *)a1 + 5);
    v11 = (_BYTE *)(v10 + 17);
    v12 = *(_QWORD *)(v10 + 136) || (*v11 & 0x10) != 0;
    v65 = v12;
    if ( (a3 & 0x407) != 0 )
    {
      if ( (a3 & 2) == 0
        || (v13 = *(_DWORD *)(v10 + 24),
            v14 = *(_DWORD *)(v10 + 28),
            v15 = *(_DWORD *)(v10 + 232),
            *v11 |= 0x10u,
            v63 = v13,
            !(unsigned int)IsWindowDesktopComposed(a1)) )
      {
LABEL_15:
        if ( !v6 )
          goto LABEL_37;
        v20 = *((_QWORD *)a1 + 5);
        v21 = *(_DWORD *)(v20 + 28);
        v22 = *(_DWORD *)(v20 + 24);
        v23 = *(_DWORD *)(v20 + 232);
        *(_BYTE *)(v20 + 17) &= ~1u;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        {
LABEL_20:
          CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v24);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread = (_QWORD *)*CurrentThreadWin32Thread;
          if ( *((_QWORD **)a1 + 2) != CurrentThreadWin32Thread )
          {
            SetOrClrWF(1LL, a1, 288LL, 1LL);
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 1) != 0 )
            {
              SetOrClrWF(1LL, a1, 1026LL, 1LL);
              UserSessionState = W32GetUserSessionState(v54, v53);
              *(_DWORD *)(UserSessionState + 63404) |= a3;
            }
          }
          if ( (a3 & 4) == 0
            || (v30 = *((_QWORD *)a1 + 5),
                v31 = *(_DWORD *)(v30 + 28),
                v32 = *(_DWORD *)(v30 + 24),
                v33 = *(_DWORD *)(v30 + 232),
                *(_BYTE *)(v30 + 17) |= 2u,
                !(unsigned int)IsWindowDesktopComposed(a1)) )
          {
LABEL_28:
            if ( (a3 & 0x400) == 0 )
              goto LABEL_33;
            v38 = *((_QWORD *)a1 + 5);
            v39 = *(_DWORD *)(v38 + 28);
            v40 = *(_DWORD *)(v38 + 24);
            v41 = *(_DWORD *)(v38 + 232);
            *(_BYTE *)(v38 + 17) |= 8u;
            if ( !(unsigned int)IsWindowDesktopComposed(a1) )
              goto LABEL_33;
            v42 = (_DWORD *)*((_QWORD *)a1 + 5);
            v43 = v42[6] ^ v40;
            v44 = v42[58] ^ v41;
            v45 = v42[7] ^ v39;
            if ( !v45 )
            {
              if ( v43 )
              {
LABEL_97:
                if ( (v43 & 0x4E27A9) == 0 && (v44 & 0x372C0) == 0 )
                {
LABEL_95:
                  if ( (v45 & 0x1C40000) != 0 || (v43 & 0x200A0381) != 0 )
                    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_33:
                  v46 = *((_QWORD *)a1 + 5);
                  v47 = *(_QWORD *)(v46 + 136);
                  if ( v47 != 1 )
                  {
                    if ( v4 == 1 )
                      goto LABEL_49;
                    if ( v47 )
                    {
                      if ( (unsigned int)GreCombineRgn(v47, *(_QWORD *)(v46 + 136), v4, 2LL) )
                        goto LABEL_37;
LABEL_49:
                      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
                      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
                      goto LABEL_37;
                    }
                    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
                    v49 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
                    if ( !v49 || !(unsigned int)GreCombineRgn(v49, v4, 0LL, 5LL) )
                      goto LABEL_49;
                  }
LABEL_37:
                  if ( !v65 )
                  {
                    v48 = *((_QWORD *)a1 + 5);
                    if ( *(_QWORD *)(v48 + 136) || (*(_BYTE *)(v48 + 17) & 0x10) != 0 )
                    {
                      if ( (a3 & 0x20000) == 0
                        || (v62 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2), v62 == PtiCurrent()) )
                      {
                        IncPaintCount(a1);
                      }
                      else
                      {
                        IncPaintCountInterMoveSize(a1);
                      }
                    }
                  }
                  return;
                }
LABEL_94:
                DirtyVisRgnTrackers(a1);
                v59 = (void *)ReferenceDwmApiPort();
                DwmAsyncChildStyleChange(v59);
                goto LABEL_95;
              }
              if ( !v44 )
                goto LABEL_33;
            }
            if ( (v45 & 0xB9CF0000) != 0 )
              goto LABEL_94;
            goto LABEL_97;
          }
          v34 = (_DWORD *)*((_QWORD *)a1 + 5);
          v35 = v34[6] ^ v32;
          v36 = v34[58] ^ v33;
          v37 = v34[7] ^ v31;
          if ( !v37 )
          {
            if ( v35 )
            {
LABEL_90:
              if ( (v35 & 0x4E27A9) == 0 && (v36 & 0x372C0) == 0 )
              {
LABEL_88:
                if ( (v37 & 0x1C40000) != 0 || (v35 & 0x200A0381) != 0 )
                  WindowMargins::CheckForChanges(a1, 1LL);
                goto LABEL_28;
              }
LABEL_87:
              DirtyVisRgnTrackers(a1);
              v58 = (void *)ReferenceDwmApiPort();
              DwmAsyncChildStyleChange(v58);
              goto LABEL_88;
            }
            if ( !v36 )
              goto LABEL_28;
          }
          if ( (v37 & 0xB9CF0000) != 0 )
            goto LABEL_87;
          goto LABEL_90;
        }
        v25 = (unsigned int *)*((_QWORD *)a1 + 5);
        v24 = v25[6];
        v26 = v24 ^ v22;
        v27 = v25[58] ^ v23;
        v28 = v25[7] ^ v21;
        if ( !v28 )
        {
          if ( v26 )
          {
LABEL_83:
            if ( (v26 & 0x4E27A9) == 0 && (v27 & 0x372C0) == 0 )
            {
LABEL_81:
              if ( (v28 & 0x1C40000) != 0 || (v26 & 0x200A0381) != 0 )
                WindowMargins::CheckForChanges(a1, 1LL);
              goto LABEL_20;
            }
LABEL_80:
            DirtyVisRgnTrackers(a1);
            v57 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildStyleChange(v57);
            goto LABEL_81;
          }
          if ( !v27 )
            goto LABEL_20;
        }
        if ( (v28 & 0xB9CF0000) != 0 )
          goto LABEL_80;
        goto LABEL_83;
      }
      v16 = (_DWORD *)*((_QWORD *)a1 + 5);
      v17 = v16[58] ^ v15;
      v18 = v63 ^ v16[6];
      v19 = v14 ^ v16[7];
      if ( !v19 )
      {
        if ( v18 )
        {
LABEL_76:
          if ( (v18 & 0x4E27A9) == 0 && (v17 & 0x372C0) == 0 )
          {
LABEL_74:
            if ( (v19 & 0x1C40000) != 0 || (v18 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_14;
          }
LABEL_73:
          DirtyVisRgnTrackers(a1);
          v56 = (void *)ReferenceDwmApiPort();
          DwmAsyncChildStyleChange(v56);
          goto LABEL_74;
        }
        if ( !v17 )
        {
LABEL_14:
          v4 = a2;
          goto LABEL_15;
        }
      }
      if ( (v19 & 0xB9CF0000) != 0 )
        goto LABEL_73;
      goto LABEL_76;
    }
    if ( (a3 & 0x838) == 0 )
      return;
    LOBYTE(v11) = ((a3 & 0x8000) == 0) & (*v11 >> 5);
    if ( ((unsigned __int8)v11 & 1) != 0 )
      return;
    if ( (a3 & 0x10) != 0 )
      SetOrClrWF(0LL, a1, 272LL, 1LL);
    if ( (a3 & 8) == 0 )
      goto LABEL_55;
    if ( (a3 & 0x20) != 0 )
      SetOrClrWF(0LL, a1, 258LL, 1LL);
    if ( (a3 & 0x800) != 0 )
      SetOrClrWF(0LL, a1, 264LL, 1LL);
    v51 = *((_QWORD *)a1 + 5);
    if ( !*(_QWORD *)(v51 + 136) )
      goto LABEL_55;
    if ( (*(_BYTE *)(v51 + 17) & 8) != 0 )
    {
      if ( v4 != 1 )
        goto LABEL_66;
      v4 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 63360);
      CalcWindowRgn((__int64)a1, v4, 1);
    }
    if ( v4 == 1 )
    {
LABEL_69:
      DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
      SetOrClrWF(0LL, a1, 258LL, 1LL);
LABEL_55:
      if ( v12 )
      {
        v50 = *((_QWORD *)a1 + 5);
        if ( !*(_QWORD *)(v50 + 136) && (*(_BYTE *)(v50 + 17) & 0x10) == 0 )
          DecPaintCount(a1);
      }
      return;
    }
LABEL_66:
    if ( *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) == 1LL )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = CreateEmptyRgnPublic();
      v60 = *((_QWORD *)a1 + 5);
      v61 = *(_QWORD *)(v60 + 136);
      if ( !v61 )
        goto LABEL_49;
      LOBYTE(v60) = ~*(_BYTE *)(v60 + 17);
      if ( !(unsigned int)CalcWindowRgn((__int64)a1, v61, ((unsigned int)v60 >> 3) & 1) )
        goto LABEL_49;
    }
    v52 = GreCombineRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), v4, 4LL);
    if ( !v52 )
      goto LABEL_49;
    if ( v52 != 1 )
      goto LABEL_55;
    goto LABEL_69;
  }
}
