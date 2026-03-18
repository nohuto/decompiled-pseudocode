/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0117C3C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     CanForceForeground @ 0x1C009AF60 (CanForceForeground.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     GetLastTopMostWindow @ 0x1C00A8B9C (GetLastTopMostWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00B2640 (SkipWindowOnMonitor.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  BOOL v6; // r15d
  int v7; // ebx
  __int64 LastTopMostWindow; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 ThreadDesktopWindow; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD v20[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL) != 0LL;
  if ( *((_DWORD *)a1 + 76) == 1 )
  {
    v7 = 1;
    LastTopMostWindow = GetLastTopMostWindow((__int64)a1);
  }
  else
  {
    v7 = 0;
    LastTopMostWindow = 0LL;
  }
  if ( LastTopMostWindow )
    v9 = *(_QWORD *)(LastTopMostWindow + 72);
  else
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
  v10 = v7;
  while ( 1 )
  {
    v11 = v6 ? *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL) : v9;
    v12 = 0LL;
    if ( v11 )
    {
      do
      {
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v11 + gSharedInfo[1] + 17LL) & 1) == 0
          && (*(_BYTE *)(v11 + 51) & 8) == 0
          && (*(_BYTE *)(v11 + 55) & 0x18) == 0x10
          && !(unsigned int)GetWindowCloakState(v11)
          && ((*(_BYTE *)(v11 + 55) & 0x20) == 0 || (*(_BYTE *)(v11 + 47) & 7) == 1)
          && (!v10 || *(_DWORD *)(v11 + 304) == 1)
          && !(unsigned int)SkipWindowOnMonitor(v11) )
        {
          if ( *(char *)(v11 + 48) >= 0 )
            break;
          if ( !v12 )
            v12 = v11;
        }
        if ( v6 )
        {
          v6 = 0;
          v11 = v9;
        }
        else
        {
          v11 = *(_QWORD *)(v11 + 72);
        }
      }
      while ( v11 );
      if ( v11 )
        break;
    }
    if ( v4 )
    {
      v11 = v12;
      if ( !v12 )
        return 0LL;
      break;
    }
    v4 = 1;
    if ( v9 )
    {
      ThreadDesktopWindow = *(_QWORD *)(v9 + 88);
      goto LABEL_32;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, a2, a3, a4);
    if ( ThreadDesktopWindow )
LABEL_32:
      v9 = *(_QWORD *)(ThreadDesktopWindow + 96);
    else
      v9 = 0LL;
  }
  v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v20;
  v20[1] = v11;
  ++*(_DWORD *)(v11 + 8);
  v13 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v13 + 1096) & 0x40000) != 0 && *(struct tagWND **)(v13 + 1248) == a1 )
  {
    v18 = *(_QWORD *)(v13 + 384);
    if ( v18 == gpqForeground && *(struct tagWND **)(v18 + 88) == a1 )
    {
      v19 = *(_QWORD *)(v13 + 1256);
      if ( v19 )
      {
        if ( *(_QWORD *)(v19 + 16) == gptiForeground
          && *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL) != gpqForeground
          && !(unsigned int)CanForceForeground(*(_QWORD *)(v13 + 376)) )
        {
          *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
        }
      }
    }
  }
  xxxSetForegroundWindow((struct tagWND *)v11, 0);
  ThreadUnlock1(v15, v14);
  return 1LL;
}
