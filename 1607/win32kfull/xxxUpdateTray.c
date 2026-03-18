/*
 * XREFs of xxxUpdateTray @ 0x1C009C3D0
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSetTrayWindow @ 0x1C00991F4 (xxxSetTrayWindow.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     Is31TrayWindow @ 0x1C0224508 (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  struct tagWND *v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *v15; // rcx
  __int64 v16; // rsi
  int i; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx
  char v38; // al
  _QWORD v39[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = (__int64)a1;
  if ( (*((_BYTE *)a1 + 55) & 0x10) == 0 )
    return;
  while ( 1 )
  {
    a1 = (struct tagWND *)*((_QWORD *)a1 + 13);
    if ( !a1 )
      break;
    if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
      v2 = (__int64)a1;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 384LL) != gpqForeground )
    goto LABEL_20;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v4, v3, v5, v6) & 0xF) == 0 )
    {
LABEL_42:
      v15 = (_DWORD *)(gpsi + 2492LL);
      goto LABEL_8;
    }
  }
  else if ( IsDPIDWMSysMet(v4)
         && (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29)
                                              + 408)
                                  + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_42;
  }
  if ( IsDPIDWMSysMet(0x38uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v12, v11, v13, v14) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 408)
      ? (v37 = 0)
      : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v37) )
  {
    v15 = (_DWORD *)(gpsi + 2880LL);
  }
  else
  {
    v15 = (_DWORD *)(gpsi + 2104LL);
  }
LABEL_8:
  if ( (*v15 & 8) == 0 )
  {
LABEL_20:
    v16 = gptiCurrent;
    goto LABEL_21;
  }
  v16 = gptiCurrent;
  if ( (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0
     || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 184LL))
    && (unsigned int)IsTopLevelWindow(v2)
    && ((*(_BYTE *)(v2 + 55) & 0x10) != 0 || (*((_BYTE *)v1 + 50) & 4) != 0) )
  {
    for ( i = 1; ; i = 0 )
    {
      if ( (*(_BYTE *)(v2 + 45) & 2) != 0 )
      {
        if ( (*((_BYTE *)v1 + 45) & 2) != 0 && (unsigned int)IsTrayWindow(v1) )
        {
          v18 = (__int64)v1;
          goto LABEL_17;
        }
        v23 = IsTrayWindow(v2);
        goto LABEL_26;
      }
      if ( *(char *)(v2 + 48) < 0 )
        break;
      if ( (*(_BYTE *)(v2 + 44) & 0x40) != 0
        || (v38 = *(_BYTE *)(v2 + 54), (v38 & 0xA) != 0) && ((v38 & 0xC0) != 0 || (*(_BYTE *)(v2 + 55) & 0x20) != 0) )
      {
        v23 = Is31TrayWindow((struct tagWND *)v2);
LABEL_26:
        v18 = v2 & -(__int64)(v23 != 0);
        goto LABEL_17;
      }
      if ( !i )
        return;
      v2 = *(_QWORD *)(v2 + 240);
      if ( !v2 )
        return;
    }
    v18 = 0LL;
LABEL_17:
    v39[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v39;
    v39[1] = v18;
    if ( v18 )
    {
      ++*(_DWORD *)(v18 + 8);
      v19 = *(_QWORD *)(v18 + 24);
    }
    else
    {
      v19 = *(_QWORD *)(v2 + 24);
    }
    xxxSetTrayWindow(v19, (__int64 *)v18);
    ThreadUnlock1(v21, v20);
    goto LABEL_20;
  }
LABEL_21:
  if ( !*((_QWORD *)v1 + 13) || (v22 = 23LL, (*((_BYTE *)v1 + 50) & 4) != 0) )
    v22 = 19LL;
  PostIAMShellHookMessageEx(*(_QWORD *)(*(_QWORD *)v16 + 408LL), v22, *(_QWORD *)v1);
}
