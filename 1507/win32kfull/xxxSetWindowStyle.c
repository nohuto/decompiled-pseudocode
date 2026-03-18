/*
 * XREFs of xxxSetWindowStyle @ 0x1C0068470
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01E75D0 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0063AFC (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     DecVisWindows @ 0x1C0081EF0 (DecVisWindows.c)
 *     IncVisWindows @ 0x1C0082188 (IncVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C008227C (ComposeWindowIfNeeded.c)
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     _IsWindowVisible @ 0x1C00FA288 (_IsWindowVisible.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ClrWFNoDwmNotify @ 0x1C01D5C48 (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01E7C84 (xxxTurnOffCompositing.c)
 *     VerifyChildMenu @ 0x1C02239A8 (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetWindowStyle(struct tagWND *a1, int a2, unsigned int a3)
{
  unsigned __int64 v4; // r13
  int v5; // r9d
  int v6; // r15d
  int v7; // r14d
  bool v8; // zf
  unsigned int v9; // edi
  int v10; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r12d
  __int64 CurrentProcessWin32Process; // rax
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // cl
  __int64 v23; // r10
  BOOL v24; // r11d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  struct tagWND *i; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // edi
  int v33; // ecx
  struct tagWND *j; // rcx
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned int v38; // edi
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // edi
  int v43; // esi
  unsigned int v44; // edx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // esi
  __int64 v55; // r14
  __int64 v56; // rax
  void *v57; // rdi
  __int64 v58; // rdx
  int v59; // [rsp+50h] [rbp-19h] BYREF
  __int16 v60; // [rsp+54h] [rbp-15h]
  int v61; // [rsp+56h] [rbp-13h]
  __int64 v62; // [rsp+5Ah] [rbp-Fh]
  __int64 v63; // [rsp+62h] [rbp-7h]
  __int64 v64; // [rsp+6Ah] [rbp+1h]
  _TBYTE v65; // [rsp+72h] [rbp+9h]
  __int64 v66; // [rsp+7Ch] [rbp+13h]
  int v67; // [rsp+84h] [rbp+1Bh]
  unsigned int v68; // [rsp+88h] [rbp+1Fh]
  unsigned int v69; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v70; // [rsp+D4h] [rbp+6Bh]
  unsigned int v71; // [rsp+D8h] [rbp+6Fh]

  v4 = a2;
  v5 = 8 * ((*((_DWORD *)a1 + 12) >> 25) & 1);
  v71 = 0;
  v6 = 0;
  v7 = 0;
  v71 = v5 & 0xFFFFFFFB | (4 * ((*((_DWORD *)a1 + 13) >> 28) & 1));
  if ( a2 == -16 )
  {
    v8 = (*((_DWORD *)a1 + 12) & 0x800) == 0;
    v9 = *((_DWORD *)a1 + 13);
    v69 = v9;
    if ( v8 )
      goto LABEL_6;
    v9 |= 0x10000000u;
  }
  else
  {
    v9 = ~((*((_BYTE *)a1 + 288) & 0x20) << 14) & *((_DWORD *)a1 + 12) & 0xA7F77FF;
  }
  v69 = v9;
LABEL_6:
  v8 = (*((_BYTE *)a1 + 45) & 2) == 0;
  v10 = 1;
  v70 = a3;
  if ( !v8 )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(a1, 0x7Cu, a2, (__int64)&v69, 0, 0, 0LL, 1, 1);
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0 )
      return v9;
    v69 = v9;
  }
  v16 = IsTrayWindow(a1);
  if ( (_DWORD)v4 != -16 )
  {
    if ( (GetAppCompatFlags2(1024LL, v12, v14, v15) & 4) != 0 )
      v38 = v70 & 0x777FF;
    else
      v38 = v70 & 0xA7F77FF;
    v39 = v69 & 8;
    v70 = v38;
    if ( v39 != (v38 & 8) && ((*((_BYTE *)a1 + 45) & 2) != 0 || !HIWORD(v38)) )
    {
      v38 = v39 | v38 & 0xFFFFFFF7;
      v70 = v38;
    }
    v40 = v38 & 0x80000;
    if ( (*((_DWORD *)a1 + 12) & ~((*((_BYTE *)a1 + 288) & 0x20) << 14) & 0x80000) != 0 )
    {
      if ( v40 )
        goto LABEL_85;
      if ( IsTopLevelOrLayeredChildWindow((__int64)a1) && !(unsigned int)IsTopLevelWindow((__int64)a1) )
        LOBYTE(v7) = 1;
      UnsetLayeredWindow(a1, v7);
    }
    else
    {
      if ( !v40 )
        goto LABEL_85;
      if ( (int)xxxSetLayeredWindow(a1, 1, 0LL) < 0 )
        return 0LL;
    }
    v38 = v70;
LABEL_85:
    v41 = (*((_DWORD *)a1 + 12) >> 21) & 1;
    if ( v41 == ((v38 >> 21) & 1) && (!v41 || (v38 & 0x2000000) == 0) )
    {
      v42 = (v38 >> 25) & 1;
      v43 = *((_DWORD *)a1 + 12) & 0x2000000;
      if ( !v43 && v42 && GetStyleWindow(*((_QWORD *)a1 + 11), 2818) )
        return 0LL;
      v71 = ((*((_DWORD *)a1 + 13) & 0x10000000) != 0) | v71 & 0xFFFFFFFE;
      v71 = v71 & 0xFFFFFFFD | (2 * (v42 & 1));
      if ( v43 )
      {
        if ( !v42 )
        {
          UnsetRedirectedWindow(a1);
          ClrWFNoDwmNotify(a1, 2818LL);
        }
      }
      else if ( v42 )
      {
        if ( (int)SetRedirectedWindow(a1, 2) < 0 )
          return 0LL;
        SetOrClrWF(1, a1, 0xB02u, 0);
        v6 = 1;
      }
      ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v71])(a1);
      if ( v6 )
        xxxTurnOffCompositing(a1, 1LL);
      v44 = v70;
      v45 = v70;
      *((_DWORD *)a1 + 12) = v70 & 0xFDF7FFFF | *((_DWORD *)a1 + 12) & 0xF7888800;
      v46 = v69;
      if ( ((v69 ^ v45) & 0x407000) != 0 )
      {
        xxxSetWindowPosAndBand(a1, 0, 0, 55, 0);
        v44 = v70;
        v46 = v69;
      }
      if ( ((v46 ^ v44) & 0x80000) != 0 && (v7 & 1) != 0 )
        xxxRedrawWindow(a1);
      goto LABEL_103;
    }
    UserSetLastError(87);
    return 0LL;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v18 = v70;
  if ( CurrentProcessWin32Process != *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL)
    && *(_WORD *)(gpsi + 854LL) == *(_WORD *)(*((_QWORD *)a1 + 19) + 10LL)
    && (v69 & 0x20) != 0
    && (v70 & 0x20) == 0 )
  {
    UserSetLastError(5);
    return 0LL;
  }
  v19 = *((_QWORD *)a1 + 3);
  v20 = 0LL;
  if ( v19 )
  {
    v21 = *(_QWORD *)(v19 + 8);
    if ( v21 )
      v20 = *(_QWORD *)(v21 + 16);
  }
  if ( *((_QWORD *)a1 + 11) == v20 )
  {
    v18 = v70 | 0x4000000;
    v70 |= 0x4000000u;
  }
  if ( ((v69 ^ v18) & 0x6000000) != 0 )
  {
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
    v18 = v70;
  }
  v22 = *((_BYTE *)a1 + 55);
  if ( (v22 & 0x40) == 0 && (v22 & 0x20) != 0 && (*((_BYTE *)a1 + 40) & 8) == 0 && (v18 & 0x20000000) == 0 )
  {
    v18 |= 0x20000000u;
    v70 = v18;
  }
  v23 = *((_QWORD *)a1 + 11);
  v24 = (v22 & 0xC0) == 64;
  if ( v23 )
  {
    v25 = *((_QWORD *)a1 + 3);
    v26 = 0LL;
    if ( v25 )
    {
      v27 = *(_QWORD *)(v25 + 8);
      if ( v27 )
        v26 = *(_QWORD *)(v27 + 16);
    }
    if ( v23 == v26 && (*((_DWORD *)a1 + 13) & 0x30000000) == 0x10000000 )
      v7 = 1;
  }
  if ( v16 )
  {
    for ( i = a1;
          (*((_BYTE *)i + 55) & 0x10) != 0 || (*((_BYTE *)i + 49) & 8) != 0;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( (*((_WORD *)i + 33) & 0x3FFF) == 0x29D )
        goto LABEL_42;
    }
  }
  v10 = 0;
LABEL_42:
  *((_DWORD *)a1 + 13) = v18;
  if ( (v18 & 0x10000000) != 0 )
    *((_DWORD *)a1 + 12) |= 0x800u;
  else
    *((_DWORD *)a1 + 12) &= ~0x800u;
  if ( !v23 )
    goto LABEL_51;
  v29 = *((_QWORD *)a1 + 3);
  v30 = 0LL;
  if ( v29 )
  {
    v31 = *(_QWORD *)(v29 + 8);
    if ( v31 )
      v30 = *(_QWORD *)(v31 + 16);
  }
  if ( v23 != v30 || (v32 = 1, (v18 & 0x30000000) != 0x10000000) )
LABEL_51:
    v32 = 0;
  v33 = *((_DWORD *)a1 + 12) >> 25;
  v71 = ((v18 & 0x10000000) != 0) | v71 & 0xFFFFFFFE;
  v71 = v71 & 0xFFFFFFFD | (2 * (v33 & 1));
  VerifyChildMenu(a1, v24);
  ((void (__fastcall *)(struct tagWND *))(&grpVisCompStyleChangeAction)[v71])(a1);
  if ( v7 != v32 )
  {
    if ( v7 )
    {
      DecVisWindows(a1);
    }
    else
    {
      IncVisWindows(a1);
      if ( (*((_BYTE *)a1 + 50) & 8) == 0 )
        ComposeWindowIfNeeded(a1, 0LL);
    }
  }
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    for ( j = a1; ; j = (struct tagWND *)*((_QWORD *)j + 11) )
    {
      if ( (*((_BYTE *)j + 55) & 0x10) == 0 && (*((_BYTE *)j + 49) & 8) == 0 )
      {
        v35 = 0;
        goto LABEL_65;
      }
      if ( (*((_WORD *)j + 33) & 0x3FFF) == 0x29D )
        break;
    }
    v35 = 1;
LABEL_65:
    if ( v10 != v35 )
    {
      v36 = *(_QWORD *)a1;
      v37 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( v10 )
        PostIAMShellHookMessageEx(v37, 22LL, v36);
      else
        PostIAMShellHookMessageEx(v37, 17LL, v36);
    }
  }
LABEL_103:
  v47 = *((_DWORD *)a1 + 12);
  v48 = *((_DWORD *)a1 + 13);
  if ( (v47 & 1) != 0
    || (v47 & 0x20000) == 0
    && ((v48 & 0x40000) != 0
     || (v49 = v48 & 0xC00000, v49 == 0x400000)
     || v49 == 12582912 && (*((_BYTE *)a1 + 45) & 2) != 0) )
  {
    *((_BYTE *)a1 + 49) |= 1u;
  }
  else
  {
    ClrWFNoDwmNotify(a1, 2305LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v54 = v70;
    v55 = *(_QWORD *)a1;
    v56 = ReferenceDwmApiPort(v51, v50, v52, v53);
    v57 = (void *)v56;
    if ( v56 )
    {
      v61 = 0;
      *(_QWORD *)&v65 = 0LL;
      v62 = 0LL;
      v63 = 0LL;
      v64 = 0LL;
      v60 = 0x8000;
      v59 = 3932180;
      *(_DWORD *)((char *)&v65 + 6) = 1073741846;
      v66 = v55;
      v67 = v4;
      v68 = v54;
      LpcRequestPort(v56, &v59);
      ObfDereferenceObject(v57);
    }
  }
  if ( v16 == (unsigned int)IsTrayWindow(a1) )
    goto LABEL_123;
  if ( v16 )
  {
    v58 = 18LL;
LABEL_122:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), v58, *(_QWORD *)a1);
    goto LABEL_123;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v58 = 17LL;
    goto LABEL_122;
  }
LABEL_123:
  if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(a1, 0x7Du, v4, (__int64)&v69, 0, 0, 0LL, 1, 1);
  }
  return v69;
}
