/*
 * XREFs of xxxEndPaint @ 0x14012B900
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x14012A0D0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x14012A570 (NtUserEndPaint.c)
 *     NtUserBeginPaint @ 0x14012A670 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402D8E4C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     zzzInternalShowCaret @ 0x14012BC20 (zzzInternalShowCaret.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall xxxEndPaint(unsigned int **a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int *v5; // rax
  unsigned int v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // r13d
  unsigned int *v9; // rax
  unsigned int v10; // r12d
  int v11; // ebp
  int v12; // eax
  int v13; // r12d
  unsigned int *v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  __int64 v18; // rcx
  unsigned int *v19; // rax
  unsigned int v20; // r15d
  int v21; // ebp
  int v22; // eax
  int v23; // r15d
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 UserSessionState; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx

  ReleaseCacheDC(*a2, 1LL);
  if ( (a1[5][5] & 2) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 43096) )
    {
      v33 = *(_DWORD *)(W32GetUserSessionState(v32, v31) + 63404);
      UserSessionState = W32GetUserSessionState(v35, v34);
      InternalInvalidate3((struct tagWND *)a1, *(_QWORD *)(UserSessionState + 43096), v33);
      v39 = W32GetUserSessionState(v38, v37);
      if ( (*(_DWORD *)(v39 + 43268))-- == 1 )
      {
        v43 = W32GetUserSessionState(v41, v40);
        GreDeleteObject(*(_QWORD *)(v43 + 43096));
        *(_QWORD *)(W32GetUserSessionState(v45, v44) + 43096) = 0LL;
        *(_DWORD *)(W32GetUserSessionState(v47, v46) + 63404) = 0;
      }
    }
    SetOrClrWF(0, (struct tagWND *)a1, 0x402u, 1);
  }
  v5 = a1[5];
  v6 = v5[7];
  v7 = v5[6];
  v8 = v5[58];
  *((_BYTE *)v5 + 20) &= ~1u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = a1[5];
    v10 = v9[7];
    v11 = v7 ^ v9[6];
    v12 = v8 ^ v9[58];
    v13 = v6 ^ v10;
    if ( !v13 )
    {
      if ( v11 )
      {
LABEL_17:
        if ( (v11 & 0x4E27A9) == 0 && (v12 & 0x372C0) == 0 )
        {
LABEL_15:
          if ( (v13 & 0x1C40000) != 0 || (v11 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
          goto LABEL_6;
        }
LABEL_14:
        DirtyVisRgnTrackers((struct tagWND *)a1);
        v27 = (void *)ReferenceDwmApiPort(v26, v25);
        DwmAsyncChildStyleChange(v27);
        goto LABEL_15;
      }
      if ( !v12 )
        goto LABEL_6;
    }
    if ( (v13 & 0xB9CF0000) != 0 )
      goto LABEL_14;
    goto LABEL_17;
  }
LABEL_6:
  v14 = a1[5];
  v15 = v14[7];
  v16 = v14[6];
  v17 = v14[58];
  *((_BYTE *)v14 + 20) &= ~4u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_10;
  v19 = a1[5];
  v20 = v19[7];
  v18 = v19[6];
  v21 = v16 ^ v19[6];
  v22 = v17 ^ v19[58];
  v23 = v15 ^ v20;
  if ( !v23 )
  {
    if ( v21 )
      goto LABEL_24;
    if ( !v22 )
      goto LABEL_10;
  }
  if ( (v23 & 0xB9CF0000) != 0 )
  {
LABEL_21:
    DirtyVisRgnTrackers((struct tagWND *)a1);
    v30 = (void *)ReferenceDwmApiPort(v29, v28);
    DwmAsyncChildStyleChange(v30);
    goto LABEL_22;
  }
LABEL_24:
  if ( (v21 & 0x4E27A9) != 0 || (v22 & 0x372C0) != 0 )
    goto LABEL_21;
LABEL_22:
  if ( (v23 & 0x1C40000) != 0 || (v21 & 0x200A0381) != 0 )
    WindowMargins::CheckForChanges((struct tagWND *)a1, 1LL);
LABEL_10:
  if ( a1 == *(unsigned int ***)(*((_QWORD *)PtiCurrent(v18) + 58) + 344LL) )
    zzzInternalShowCaret();
  return 1LL;
}
