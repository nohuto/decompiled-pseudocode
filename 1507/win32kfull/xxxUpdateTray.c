/*
 * XREFs of xxxUpdateTray @ 0x1C007FA48
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSetTrayWindow @ 0x1C0047654 (xxxSetTrayWindow.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     Is31TrayWindow @ 0x1C0223920 (Is31TrayWindow.c)
 */

void __fastcall xxxUpdateTray(struct tagWND *a1)
{
  struct tagWND *v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rsi
  int i; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // ecx
  char v19; // al
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

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
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 392LL) != gpqForeground )
    goto LABEL_20;
  if ( (unsigned int)IsDPIAbsoluteSysMet(56LL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) == 0 )
    {
LABEL_44:
      v6 = (_DWORD *)(gpsi + 2492LL);
      goto LABEL_8;
    }
  }
  else if ( (unsigned int)IsDPIDWMSysMet(v3)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_44;
  }
  if ( (unsigned int)IsDPIDWMSysMet(56LL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v18 = 0)
      : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v18) )
  {
    v6 = (_DWORD *)(gpsi + 2880LL);
  }
  else
  {
    v6 = (_DWORD *)(gpsi + 2104LL);
  }
LABEL_8:
  if ( (*v6 & 8) == 0 )
  {
LABEL_20:
    v7 = gptiCurrent;
    goto LABEL_21;
  }
  v7 = gptiCurrent;
  if ( (((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0
     || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 184LL))
    && (unsigned int)IsTopLevelWindow(v2)
    && ((*(_BYTE *)(v2 + 55) & 0x10) != 0 || (*((_BYTE *)v1 + 50) & 4) != 0) )
  {
    for ( i = 1; ; i = 0 )
    {
      if ( (*(_BYTE *)(v2 + 45) & 2) != 0 )
      {
        if ( (*((_BYTE *)v1 + 45) & 2) != 0 && (unsigned int)IsTrayWindow((__int64)v1) )
        {
          v9 = (__int64)v1;
          goto LABEL_17;
        }
        v14 = IsTrayWindow(v2);
        goto LABEL_26;
      }
      if ( *(char *)(v2 + 48) < 0 )
        break;
      if ( (*(_BYTE *)(v2 + 44) & 0x40) != 0
        || (v19 = *(_BYTE *)(v2 + 54), (v19 & 0xA) != 0) && ((v19 & 0xC0) != 0 || (*(_BYTE *)(v2 + 55) & 0x20) != 0) )
      {
        v14 = Is31TrayWindow((struct tagWND *)v2);
LABEL_26:
        v9 = v2 & -(__int64)(v14 != 0);
        goto LABEL_17;
      }
      if ( !i )
        return;
      v2 = *(_QWORD *)(v2 + 240);
      if ( !v2 )
        return;
    }
    v9 = 0LL;
LABEL_17:
    v20[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v20;
    v20[1] = v9;
    if ( v9 )
    {
      ++*(_DWORD *)(v9 + 8);
      v10 = *(_QWORD *)(v9 + 24);
    }
    else
    {
      v10 = *(_QWORD *)(v2 + 24);
    }
    xxxSetTrayWindow(v10, (__int64 *)v9);
    ThreadUnlock1(v12, v11);
    goto LABEL_20;
  }
LABEL_21:
  if ( !*((_QWORD *)v1 + 13) || (v13 = 23, (*((_BYTE *)v1 + 50) & 4) != 0) )
    v13 = 19;
  PostIAMShellHookMessageEx(*(_QWORD *)(*(_QWORD *)v7 + 416LL), v13, *(_QWORD *)v1);
}
