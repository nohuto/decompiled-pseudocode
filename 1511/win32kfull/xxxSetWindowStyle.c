/*
 * XREFs of xxxSetWindowStyle @ 0x1C0058020
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E7A40 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0055FC4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     DecVisWindows @ 0x1C007A068 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C007A2F4 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C007A3EC (ComposeWindowIfNeeded.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     _IsWindowVisible @ 0x1C0103758 (_IsWindowVisible.c)
 *     UnlockWndMenu @ 0x1C0104018 (UnlockWndMenu.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     xxxTurnOffCompositing @ 0x1C01E80F8 (xxxTurnOffCompositing.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, unsigned int a3)
{
  unsigned __int64 v4; // r13
  int v5; // r9d
  int v6; // r15d
  int v7; // r14d
  bool v8; // zf
  int v9; // edi
  int v10; // esi
  __int64 v11; // rcx
  int v12; // r12d
  __int64 CurrentProcessWin32Process; // rax
  int v14; // r9d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // cl
  __int64 v20; // r10
  BOOL v21; // r11d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct tagWND *i; // rcx
  BOOL v26; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // edi
  int v31; // ecx
  struct tagWND *j; // rcx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rcx
  char AppCompatFlags2; // al
  unsigned int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // edi
  int v42; // esi
  unsigned int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // esi
  __int64 v54; // r14
  __int64 v55; // rax
  void *v56; // rdi
  __int64 v57; // rdx
  int v58; // [rsp+50h] [rbp-19h] BYREF
  __int16 v59; // [rsp+54h] [rbp-15h]
  int v60; // [rsp+56h] [rbp-13h]
  __int64 v61; // [rsp+5Ah] [rbp-Fh]
  __int64 v62; // [rsp+62h] [rbp-7h]
  __int64 v63; // [rsp+6Ah] [rbp+1h]
  _TBYTE v64; // [rsp+72h] [rbp+9h]
  __int64 v65; // [rsp+7Ch] [rbp+13h]
  int v66; // [rsp+84h] [rbp+1Bh]
  unsigned int v67; // [rsp+88h] [rbp+1Fh]
  unsigned int v68; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v69; // [rsp+D4h] [rbp+6Bh]
  unsigned int v70; // [rsp+D8h] [rbp+6Fh]

  v4 = a2;
  v5 = 8 * ((*((_DWORD *)a1 + 12) >> 25) & 1);
  v70 = 0;
  v6 = 0;
  v7 = 0;
  v70 = v5 & 0xFFFFFFFB | (4 * ((*((_DWORD *)a1 + 13) >> 28) & 1));
  if ( a2 == -16 )
  {
    v8 = (*((_DWORD *)a1 + 12) & 0x800) == 0;
    v9 = *((_DWORD *)a1 + 13);
    v68 = v9;
    if ( v8 )
      goto LABEL_6;
    v9 |= 0x10000000u;
  }
  else
  {
    v9 = ~((*((_BYTE *)a1 + 288) & 0x20) << 14) & *((_DWORD *)a1 + 12) & 0xA7F77FF;
  }
  v68 = v9;
LABEL_6:
  v8 = (*((_BYTE *)a1 + 45) & 2) == 0;
  v10 = 1;
  v69 = a3;
  if ( !v8 )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(a1, 0x7Cu, a2, (__int64)&v68, 0, 0, 0LL, 1, 1);
    v68 = v9;
  }
  v12 = IsTrayWindow(a1);
  if ( (_DWORD)v4 == -16 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v14 = v69;
    if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL)
      && *(_WORD *)(gpsi + 854LL) == *(_WORD *)(*((_QWORD *)a1 + 19) + 10LL)
      && (v68 & 0x20) != 0
      && (v69 & 0x20) == 0 )
    {
      UserSetLastError(5);
      return 0LL;
    }
    v16 = *((_QWORD *)a1 + 3);
    v17 = 0LL;
    if ( v16 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      if ( v18 )
        v17 = *(_QWORD *)(v18 + 16);
    }
    if ( *((_QWORD *)a1 + 11) == v17 )
    {
      v14 = v69 | 0x4000000;
      v69 |= 0x4000000u;
    }
    if ( ((v68 ^ v14) & 0x6000000) != 0 )
    {
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      v14 = v69;
    }
    v19 = *((_BYTE *)a1 + 55);
    if ( (v19 & 0x40) == 0 && (v19 & 0x20) != 0 && (*((_BYTE *)a1 + 40) & 8) == 0 && (v14 & 0x20000000) == 0 )
    {
      v14 |= 0x20000000u;
      v69 = v14;
    }
    v20 = *((_QWORD *)a1 + 11);
    v21 = (v19 & 0xC0) == 64;
    if ( v20 )
    {
      v22 = *((_QWORD *)a1 + 3);
      v23 = 0LL;
      if ( v22 )
      {
        v24 = *(_QWORD *)(v22 + 8);
        if ( v24 )
          v23 = *(_QWORD *)(v24 + 16);
      }
      if ( v20 == v23 && (*((_DWORD *)a1 + 13) & 0x30000000) == 0x10000000 )
        v7 = 1;
    }
    if ( v12 )
    {
      for ( i = a1;
            (*((_BYTE *)i + 55) & 0x10) != 0 || (*((_BYTE *)i + 49) & 8) != 0;
            i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( (*((_WORD *)i + 33) & 0x3FFF) == 0x29D )
          goto LABEL_41;
      }
    }
    v10 = 0;
LABEL_41:
    *((_DWORD *)a1 + 13) = v14;
    if ( (v14 & 0x10000000) != 0 )
      *((_DWORD *)a1 + 12) |= 0x800u;
    else
      *((_DWORD *)a1 + 12) &= ~0x800u;
    v26 = (*((_BYTE *)a1 + 55) & 0xC0) == 64;
    if ( !v20 )
      goto LABEL_50;
    v27 = *((_QWORD *)a1 + 3);
    v28 = 0LL;
    if ( v27 )
    {
      v29 = *(_QWORD *)(v27 + 8);
      if ( v29 )
        v28 = *(_QWORD *)(v29 + 16);
    }
    if ( v20 != v28 || (v30 = 1, (v14 & 0x30000000) != 0x10000000) )
LABEL_50:
      v30 = 0;
    v31 = *((_DWORD *)a1 + 12) >> 25;
    v70 = ((v14 & 0x10000000) != 0) | v70 & 0xFFFFFFFE;
    v70 = v70 & 0xFFFFFFFD | (2 * (v31 & 1));
    if ( v21 )
    {
      if ( !v26 )
        *((_QWORD *)a1 + 24) = 0LL;
    }
    else if ( v26 )
    {
      *((_BYTE *)a1 + 40) &= ~1u;
      UnlockWndMenu(a1, (char *)a1 + 192);
    }
    ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v70])(a1);
    if ( v7 != v30 )
    {
      if ( v7 )
      {
        DecVisWindows(a1);
      }
      else
      {
        IncVisWindows(a1);
        if ( (*((_BYTE *)a1 + 50) & 8) == 0 )
          ComposeWindowIfNeeded(a1);
      }
    }
    if ( (unsigned int)IsTrayWindow(a1) )
    {
      for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 11) )
      {
        if ( (*((_BYTE *)j + 55) & 0x10) == 0 && (*((_BYTE *)j + 49) & 8) == 0 )
        {
          v33 = 0;
          goto LABEL_69;
        }
        if ( (*((_WORD *)j + 33) & 0x3FFF) == 0x29D )
          break;
      }
      v33 = 1;
LABEL_69:
      if ( v10 != v33 )
      {
        v34 = *(_QWORD *)a1;
        v35 = *(_QWORD *)(gptiCurrent + 408LL);
        if ( v10 )
          PostIAMShellHookMessageEx(v35, 22LL, v34);
        else
          PostIAMShellHookMessageEx(v35, 17LL, v34);
      }
    }
    goto LABEL_105;
  }
  AppCompatFlags2 = GetAppCompatFlags2(1024LL);
  v37 = v69 & 0xA7F77FF;
  if ( (AppCompatFlags2 & 4) != 0 )
    v37 = v69 & 0x777FF;
  v69 = v37;
  v38 = v68 & 8;
  if ( v38 != (v37 & 8) && ((*((_BYTE *)a1 + 45) & 2) != 0 || !HIWORD(v37)) )
  {
    v37 = v38 | v37 & 0xFFFFFFF7;
    v69 = v37;
  }
  v39 = v37 & 0x80000;
  if ( (*((_DWORD *)a1 + 12) & ~((*((_BYTE *)a1 + 288) & 0x20) << 14) & 0x80000) != 0 )
  {
    if ( v39 )
      goto LABEL_88;
    if ( IsTopLevelOrLayeredChildWindow((__int64)a1) && !(unsigned int)IsTopLevelWindow((__int64)a1) )
      LOBYTE(v7) = 1;
    UnsetLayeredWindow(a1);
  }
  else
  {
    if ( !v39 )
      goto LABEL_88;
    if ( (int)xxxSetLayeredWindow(a1) < 0 )
      return 0LL;
  }
  v37 = v69;
LABEL_88:
  v40 = (*((_DWORD *)a1 + 12) >> 21) & 1;
  if ( v40 != ((v37 >> 21) & 1) || v40 && (v37 & 0x2000000) != 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v41 = (v37 >> 25) & 1;
  v42 = *((_DWORD *)a1 + 12) & 0x2000000;
  if ( !v42 && v41 && GetStyleWindow(*((_QWORD *)a1 + 11), 2818) )
    return 0LL;
  v70 = ((*((_DWORD *)a1 + 13) & 0x10000000) != 0) | v70 & 0xFFFFFFFE;
  v70 = v70 & 0xFFFFFFFD | (2 * (v41 & 1));
  if ( v42 )
  {
    if ( !v41 )
    {
      UnsetRedirectedWindow(a1);
      SetOrClrWF(0LL, a1, 2818LL, 0LL);
    }
  }
  else if ( v41 )
  {
    if ( (int)SetRedirectedWindow(a1) < 0 )
      return 0LL;
    SetOrClrWF(1LL, a1, 2818LL, 0LL);
    v6 = 1;
  }
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v70])(a1);
  if ( v6 )
    xxxTurnOffCompositing(a1, 1LL);
  v43 = v69;
  v44 = v69;
  *((_DWORD *)a1 + 12) = v69 & 0xFDF7FFFF | *((_DWORD *)a1 + 12) & 0xF7888800;
  v45 = v68;
  if ( ((v68 ^ v44) & 0x407000) != 0 )
  {
    xxxSetWindowPosAndBand(a1, 0, 0, 55, 0);
    v43 = v69;
    v45 = v68;
  }
  if ( ((v45 ^ v43) & 0x80000) != 0 && (v7 & 1) != 0 )
    xxxRedrawWindow(a1, 0LL, 0LL, 1157);
LABEL_105:
  v46 = *((_DWORD *)a1 + 12);
  v47 = *((_DWORD *)a1 + 13);
  if ( (v46 & 1) != 0
    || (v46 & 0x20000) == 0
    && ((v47 & 0x40000) != 0
     || (v48 = v47 & 0xC00000, v48 == 0x400000)
     || v48 == 12582912 && (*((_BYTE *)a1 + 45) & 2) != 0) )
  {
    *((_BYTE *)a1 + 49) |= 1u;
  }
  else
  {
    *((_BYTE *)a1 + 49) &= ~1u;
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v53 = v69;
    v54 = *(_QWORD *)a1;
    v55 = ReferenceDwmApiPort(v50, v49, v51, v52);
    v56 = (void *)v55;
    if ( v55 )
    {
      v60 = 0;
      *(_QWORD *)&v64 = 0LL;
      v61 = 0LL;
      v62 = 0LL;
      v63 = 0LL;
      v59 = 0x8000;
      v58 = 3932180;
      *(_DWORD *)((char *)&v64 + 6) = 1073741846;
      v65 = v54;
      v66 = v4;
      v67 = v53;
      LpcRequestPort(v55, &v58);
      ObfDereferenceObject(v56);
    }
  }
  if ( v12 == (unsigned int)IsTrayWindow(a1) )
    goto LABEL_125;
  if ( v12 )
  {
    v57 = 18LL;
LABEL_124:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v57, *(_QWORD *)a1);
    goto LABEL_125;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v57 = 17LL;
    goto LABEL_124;
  }
LABEL_125:
  if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(a1, 0x7Du, v4, (__int64)&v68, 0, 0, 0LL, 1, 1);
  }
  return v68;
}
