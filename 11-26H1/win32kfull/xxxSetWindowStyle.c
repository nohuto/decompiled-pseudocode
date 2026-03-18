/*
 * XREFs of xxxSetWindowStyle @ 0x1401C9A38
 * Callers:
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x14024C0C0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402C8A60 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402C8AE0 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ?DecVisWindows@@YAXPEAUtagWND@@@Z @ 0x140010520 (-DecVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     GetStyleWindow @ 0x1400463E0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x14004C50C (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1400A8258 (IsTopLevelOrLayeredChildWindow.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     NeedsWindowEdge @ 0x1401D281C (NeedsWindowEdge.c)
 *     ?CheckWindowChildnessChanged@@YAXPEAUtagWND@@_N@Z @ 0x1401E34FC (-CheckWindowChildnessChanged@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxTurnOffCompositing @ 0x1401F9048 (xxxTurnOffCompositing.c)
 *     _IsWindowVisible @ 0x140206F58 (_IsWindowVisible.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x140295F3C (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?DecComposited@@YAXPEAUtagWND@@@Z @ 0x1402E17F0 (-DecComposited@@YAXPEAUtagWND@@@Z.c)
 *     ?IncComposited@@YAXPEAUtagWND@@@Z @ 0x1402E1810 (-IncComposited@@YAXPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, int a3)
{
  __int64 v3; // rax
  int v5; // esi
  unsigned __int64 v6; // r12
  int v7; // r13d
  int v8; // r14d
  bool v9; // cf
  __int64 v10; // rax
  _DWORD *v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rcx
  char v15; // bl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // edx
  ULONG_PTR v21; // rcx
  int v22; // r10d
  __int64 v23; // r11
  char v24; // r14
  int v25; // r10d
  __int64 v26; // r11
  int v27; // r15d
  __int64 v28; // r8
  unsigned int v29; // edx
  int v30; // ebx
  unsigned int v31; // r10d
  __int64 v32; // rcx
  unsigned int v33; // ecx
  unsigned int v34; // ebx
  int v35; // ecx
  int v36; // edx
  __int64 v37; // r15
  int v38; // ebx
  int v39; // esi
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  unsigned __int16 v43; // r10
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  void *v47; // rax
  char v48; // al
  unsigned int v49; // ecx
  __int64 v50; // [rsp+90h] [rbp+40h] BYREF
  char v51; // [rsp+98h] [rbp+48h]
  unsigned int v52; // [rsp+A0h] [rbp+50h]

  v3 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v6 = a2;
  v50 = 0LL;
  v7 = 0;
  v52 = 0;
  v8 = 0;
  v9 = (*(_DWORD *)(v3 + 24) & 0x2000000) != 0;
  v10 = *((_QWORD *)a1 + 5);
  v52 = v9 ? 8 : 0;
  v11 = (_DWORD *)*((_QWORD *)a1 + 5);
  v52 = v52 & 0xFFFFFFFB | ((*(_DWORD *)(v10 + 28) & 0x10000000) != 0 ? 4 : 0);
  if ( a2 == -16 )
  {
    v12 = v11[7];
    LODWORD(v50) = v12;
    if ( (v11[6] & 0x800) == 0 )
      goto LABEL_6;
    v12 |= 0x10000000u;
  }
  else
  {
    v12 = v11[6] & 0xA7F77FF & (((~(unsigned __int8)v11[58] & 2) << 18) | 0xFFF7FFFF);
  }
  LODWORD(v50) = v12;
LABEL_6:
  HIDWORD(v50) = a3;
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 124LL, a2, (__int64)&v50, 0, 0, 0LL, 1u, 1);
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return v12;
  LODWORD(v50) = v12;
  v51 = IsTrayWindow(a1, 1LL);
  v15 = v51;
  if ( (_DWORD)v6 == -16 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
    {
      v17 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v17;
    }
    v18 = *((_QWORD *)a1 + 2);
    if ( CurrentProcessWin32Process != *(_QWORD *)(v18 + 456)
      && *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v18, v17) + 19904) + 870LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL)
                                                                                               + 2LL)
      && (v50 & 0x20) != 0
      && (v50 & 0x2000000000LL) == 0 )
    {
      v19 = 5;
LABEL_82:
      UserSetLastError(v19);
      return 0LL;
    }
    if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
    {
      v22 |= 0x4000000u;
      HIDWORD(v50) = v22;
    }
    if ( ((v20 ^ v22) & 0x6000000) != 0 )
    {
      zzzLockDisplayAreaAndInvalidateDCCache(v21, 1, 0LL);
      v22 = HIDWORD(v50);
    }
    v23 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v23 + 31) & 0x60) == 0x20 && (*(_BYTE *)(v23 + 16) & 8) == 0 && (v22 & 0x20000000) == 0 )
      HIDWORD(v50) = v22 | 0x20000000;
    v24 = *(_BYTE *)(v23 + 31) & 0xC0;
    v27 = VisWindow(a1, *(unsigned int *)(v23 + 28));
    if ( v15 && (unsigned int)IsWindowVisible(a1) )
      v5 = 1;
    *(_DWORD *)(v26 + 28) = v25;
    v28 = *((_QWORD *)a1 + 5);
    v29 = *(_DWORD *)(v28 + 24) | 0x800;
    if ( (*(_DWORD *)(v28 + 28) & 0x10000000) == 0 )
      v29 = *(_DWORD *)(v28 + 24) & 0xFFFFF7FF;
    *(_DWORD *)(v28 + 24) = v29;
    v30 = VisWindow(a1, *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL));
    v32 = *((_QWORD *)a1 + 5);
    v52 = v52 & 0xFFFFFFFE | (v31 >> 28) & 1;
    v52 = v52 & 0xFFFFFFFD | ((*(_DWORD *)(v32 + 24) & 0x2000000) != 0 ? 2 : 0);
    CheckWindowChildnessChanged(a1, v24 == 64);
    funcs_1401C9CF0[v52](a1);
    if ( v27 != v30 )
    {
      if ( v27 )
      {
        DecVisWindows(a1);
      }
      else
      {
        IncVisWindows(a1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
          ComposeWindowIfNeeded(a1, 0);
      }
    }
    tagWND::ComputeDominantState(a1);
    if ( IsTrayWindow(a1, 1LL) && v5 != (unsigned int)IsWindowVisible(a1) )
    {
      v33 = 22;
      if ( !v5 )
        v33 = 17;
      PostIAMShellHookMessage(v33, *(_QWORD *)a1);
    }
LABEL_69:
    v42 = NeedsWindowEdge(
            *(unsigned int *)(*((_QWORD *)a1 + 5) + 28LL),
            *(unsigned int *)(*((_QWORD *)a1 + 5) + 24LL),
            1LL);
    SetOrClrWF(v42 != 0, a1, v43, 0);
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      DirtyVisRgnTrackers(a1);
      v44 = *(_QWORD *)a1;
      v47 = (void *)ReferenceDwmApiPort(v46, v45);
      DwmAsyncChildStyleChange(v47, v44, (unsigned int)v6, SHIDWORD(v50));
      WindowMargins::CheckForChanges(a1, 1LL);
    }
    v48 = IsTrayWindow(a1, 1LL);
    if ( v51 == v48 )
      goto LABEL_80;
    if ( v51 )
    {
      v49 = 18;
    }
    else
    {
      if ( !(unsigned int)IsWindowVisible(a1) )
      {
LABEL_80:
        xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 125LL, v6, (__int64)&v50, 0, 0, 0LL, 1u, 1);
        return (unsigned int)v50;
      }
      v49 = 17;
    }
    PostIAMShellHookMessage(v49, *(_QWORD *)a1);
    goto LABEL_80;
  }
  if ( (GetAppCompatFlags2(1024LL) & 4) != 0 )
    v34 = HIDWORD(v50) & 0x777FF;
  else
    v34 = HIDWORD(v50) & 0xA7F77FF;
  v35 = v50 & 8;
  HIDWORD(v50) = v34;
  if ( v35 != (v34 & 8) )
  {
    v34 = v35 | v34 & 0xFFFFFFF7;
    HIDWORD(v50) = v34;
  }
  v36 = v34 & 0x80000;
  if ( (((~(unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) << 18) & *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL)) != 0 )
  {
    if ( v36 )
      goto LABEL_53;
    if ( (unsigned int)IsTopLevelOrLayeredChildWindow(a1) && !IsTopLevelWindow((__int64)a1) )
      v8 = 1;
    UnsetLayeredWindow((ULONG_PTR)a1, v8);
  }
  else
  {
    if ( !v36 )
      goto LABEL_53;
    if ( (int)xxxSetLayeredWindow(a1, 1, 0LL) < 0 )
      return 0LL;
  }
  v34 = HIDWORD(v50);
LABEL_53:
  v37 = *((_QWORD *)a1 + 5);
  if ( ((*(_DWORD *)(v37 + 24) & 0x200000) != 0) != ((v34 >> 21) & 1)
    || (*(_DWORD *)(v37 + 24) & 0x200000) != 0 && (v34 & 0x2000000) != 0 )
  {
    v19 = 87;
    goto LABEL_82;
  }
  v38 = v34 & 0x2000000;
  v39 = *(_DWORD *)(v37 + 24) & 0x2000000;
  if ( !v39 && v38 && GetStyleWindow(*((_QWORD *)a1 + 13), 2818) )
    return 0LL;
  v52 = (*(_DWORD *)(v37 + 28) >> 28) & 1 | v52 & 0xFFFFFFFE;
  v52 = v52 & 0xFFFFFFFD | (v38 != 0 ? 2 : 0);
  if ( v39 )
  {
    if ( !v38 )
    {
      UnsetRedirectedWindow(a1, 2LL);
      SetOrClrWF(0, a1, 0xB02u, 0);
    }
    goto LABEL_62;
  }
  if ( !v38 )
  {
LABEL_62:
    funcs_1401C9CF0[v52](a1);
    if ( v7 )
      xxxTurnOffCompositing(a1, 1LL);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) = HIDWORD(v50) & 0xFDF7FFFF | *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) & 0xF7888800;
    v40 = HIDWORD(v50);
    v41 = v50;
    if ( (((unsigned int)v50 ^ HIDWORD(v50)) & 0x407000) != 0 )
    {
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
      v40 = HIDWORD(v50);
      v41 = v50;
    }
    if ( ((v41 ^ v40) & 0x80000) != 0 && v8 )
      xxxRedrawWindow(a1, 0LL, 0LL, 1157);
    goto LABEL_69;
  }
  if ( (int)SetRedirectedWindow(a1, 2) >= 0 )
  {
    SetOrClrWF(1, a1, 0xB02u, 0);
    v7 = 1;
    goto LABEL_62;
  }
  return 0LL;
}
