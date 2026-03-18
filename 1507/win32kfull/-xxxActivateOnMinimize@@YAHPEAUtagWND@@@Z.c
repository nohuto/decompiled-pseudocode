/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z @ 0x1C003E5C4 (-ForceForegroundChangeOnMinimize@@YAHPEAUtagWND@@0@Z.c)
 *     SkipWindowOnMonitor @ 0x1C00427F0 (SkipWindowOnMonitor.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r12d
  struct tagWND *v2; // r13
  BOOL v3; // r15d
  int v4; // ebx
  __int64 LastTopMostWindow; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  char v9; // r14
  __int64 ThreadDesktopWindow; // rax
  _QWORD v12[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+88h] [rbp+10h]

  v1 = 0;
  v2 = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 88LL) != 0LL;
  if ( *((_DWORD *)a1 + 76) == 1 )
  {
    v4 = 1;
    LastTopMostWindow = GetLastTopMostWindow();
  }
  else
  {
    v4 = 0;
    LastTopMostWindow = 0LL;
  }
  if ( LastTopMostWindow )
    v6 = *(_QWORD *)(LastTopMostWindow + 72);
  else
    v6 = *(_QWORD *)(*((_QWORD *)v2 + 11) + 96LL);
  v14 = v4;
  while ( 1 )
  {
    v7 = v3 ? *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 88LL) : v6;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v7 + gSharedInfo[1] + 17LL) & 1) == 0
          && (*(_BYTE *)(v7 + 51) & 8) == 0 )
        {
          v9 = *(_BYTE *)(v7 + 55);
          if ( (v9 & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v7)
            && ((v9 & 0x20) == 0 || (*(_BYTE *)(v7 + 47) & 7) == 1)
            && (!v14 || *(_DWORD *)(v7 + 304) == 1)
            && !(unsigned int)SkipWindowOnMonitor(v7) )
          {
            if ( *(char *)(v7 + 48) >= 0 )
              break;
            if ( !v8 )
              v8 = v7;
          }
        }
        if ( v3 )
        {
          v3 = 0;
          v7 = v6;
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 72);
        }
      }
      while ( v7 );
      v2 = a1;
      if ( v7 )
        break;
    }
    if ( v1 )
    {
      v7 = v8;
      if ( !v8 )
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
  v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v12;
  v12[1] = v7;
  ++*(_DWORD *)(v7 + 8);
  if ( ForceForegroundChangeOnMinimize(v2, (struct tagWND *)v7) )
    *(_DWORD *)(gptiCurrent + 448LL) |= 0x20u;
  xxxSetForegroundWindow((struct tagWND *)v7);
  ThreadUnlock1();
  return 1LL;
}
