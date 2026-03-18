/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C7790
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C00C7708 (-ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z.c)
 *     SkipWindowOnMonitor @ 0x1C00C7964 (SkipWindowOnMonitor.c)
 *     GetLastTopMostWindow @ 0x1C00C7B04 (GetLastTopMostWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r12d
  BOOL v3; // r14d
  int v4; // ebx
  __int64 LastTopMostWindow; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 ThreadDesktopWindow; // rax
  _QWORD v16[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) != 0LL;
  if ( *((_DWORD *)a1 + 76) == 1 )
  {
    v4 = 1;
    LastTopMostWindow = GetLastTopMostWindow(a1);
  }
  else
  {
    v4 = 0;
    LastTopMostWindow = 0LL;
  }
  if ( LastTopMostWindow )
    v6 = *(_QWORD *)(LastTopMostWindow + 72);
  else
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
  v7 = v4;
  while ( 1 )
  {
    v8 = v3 ? *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) : v6;
    v9 = 0LL;
    if ( v8 )
    {
      do
      {
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v8 + gSharedInfo[1] + 17LL) & 1) == 0
          && (*(_BYTE *)(v8 + 51) & 8) == 0
          && (*(_BYTE *)(v8 + 55) & 0x18) == 0x10
          && !(unsigned int)GetWindowCloakState(v8)
          && ((*(_BYTE *)(v8 + 55) & 0x20) == 0 || (*(_BYTE *)(v8 + 47) & 7) == 1)
          && (!v7 || *(_DWORD *)(v8 + 304) == 1)
          && !(unsigned int)SkipWindowOnMonitor(v8) )
        {
          if ( *(char *)(v8 + 48) >= 0 )
            break;
          if ( !v9 )
            v9 = v8;
        }
        if ( v3 )
        {
          v3 = 0;
          v8 = v6;
        }
        else
        {
          v8 = *(_QWORD *)(v8 + 72);
        }
      }
      while ( v8 );
      if ( v8 )
        break;
    }
    if ( v1 )
    {
      v8 = v9;
      if ( !v9 )
        return 0LL;
      break;
    }
    v1 = 1;
    if ( v6 )
    {
      ThreadDesktopWindow = *(_QWORD *)(v6 + 88);
      goto LABEL_33;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_33:
      v6 = *(_QWORD *)(ThreadDesktopWindow + 96);
    else
      v6 = 0LL;
  }
  v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v16;
  v16[1] = v8;
  ++*(_DWORD *)(v8 + 8);
  if ( ForceForegroundChangeOnMinimize(a1, (struct tagWND *)v8) )
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
  xxxSetForegroundWindow((struct tagWND *)v8, 0LL, v10, v11);
  ThreadUnlock1(v13, v12);
  return 1LL;
}
