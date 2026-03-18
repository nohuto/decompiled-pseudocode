/*
 * XREFs of xxxActivateWindow @ 0x1C0044954
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0044810 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxSetActiveWindow @ 0x1C00FCE40 (xxxSetActiveWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FA850 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02024F4 (xxxHandleNCMouseGuys.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     SkipWindowOnMonitor @ 0x1C00427F0 (SkipWindowOnMonitor.c)
 *     NextTopWindow @ 0x1C0042A00 (NextTopWindow.c)
 *     FBadWindow @ 0x1C004490C (FBadWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C0044BF8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  struct tagWND *v3; // rdi
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rcx
  BOOL v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // edi
  struct tagWND *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // r14
  char i; // bl
  struct tagWND *v17; // r8
  struct tagWND *TopWindow; // rax
  struct tagWND *v19; // rbx
  int v20; // eax
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
      return 0LL;
  }
  else
  {
    v2 = 5;
  }
  if ( v2 != 1 )
  {
    if ( v2 != 2 )
    {
      if ( v2 == 3 )
        goto LABEL_18;
      if ( v2 != 4 )
      {
        if ( v2 != 5 )
        {
          if ( v2 != 6 )
            return 0LL;
          goto LABEL_4;
        }
LABEL_19:
        v13 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 416LL) + 240LL);
        if ( (unsigned int)FBadWindow(v13) || v3 && ((v20 = *((_DWORD *)v3 + 76), v20 == 2) || v20 == 16) || !v13 )
        {
          if ( !gpqForegroundPrev
            || (v14 = *(_QWORD *)(gpqForegroundPrev + 88LL), (unsigned int)FBadWindow((struct tagWND *)v14))
            || (*(_BYTE *)(v14 + 44) & 0x20) != 0
            || (unsigned int)SkipWindowOnMonitor(v14) )
          {
            v15 = (__int64)v3;
            for ( i = 6; ; i &= ~2u )
            {
              v17 = 0LL;
              if ( v2 == 3 )
                v17 = (struct tagWND *)v15;
              TopWindow = NextTopWindow(gptiCurrent, v15, v17, i);
              v3 = TopWindow;
              if ( TopWindow )
                break;
              if ( (i & 2) == 0 )
                return 0LL;
            }
            v19 = (struct tagWND *)*((_QWORD *)TopWindow + 30);
            if ( !(unsigned int)FBadWindow(v19) )
              v3 = v19;
          }
          else
          {
            v3 = *(struct tagWND **)(gpqForegroundPrev + 88LL);
          }
          goto LABEL_4;
        }
LABEL_43:
        v3 = v13;
        goto LABEL_4;
      }
    }
    if ( !(unsigned int)FBadWindow(a1) )
      goto LABEL_4;
LABEL_18:
    if ( (((*((_BYTE *)v3 + 55) & 0xC0) + 0x80) & 0xBF) == 0 )
    {
      v13 = (struct tagWND *)*((_QWORD *)v3 + 13);
      if ( !(unsigned int)FBadWindow(v13) )
        goto LABEL_43;
    }
    goto LABEL_19;
  }
LABEL_4:
  if ( v3 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v21;
    v21[1] = v3;
    ++*((_DWORD *)v3 + 2);
    v4 = *(_QWORD *)(gptiCurrent + 392LL);
    if ( *(_QWORD *)(*((_QWORD *)v3 + 2) + 392LL) == v4 )
    {
      if ( !FAllowForegroundActivate(*(struct tagQ **)(gptiCurrent + 392LL), v3) )
      {
        v5 = xxxActivateThisWindow(v3);
        ThreadUnlock1(v7, v6);
        return v5;
      }
      v10 = *(_DWORD *)(gptiCurrent + 784LL) == 0;
    }
    else
    {
      v9 = gpqForeground;
      if ( gpqForeground != v4 && gpqForeground )
      {
        v12 = 0;
LABEL_15:
        ThreadUnlock1(v9, a2);
        return v12;
      }
      v10 = (*(_DWORD *)(gptiCurrent + 448LL) & 0x20) != 0 || v2 == 1 || *(_DWORD *)(gptiCurrent + 784LL);
    }
    v11 = *(_QWORD *)(gptiCurrent + 416LL);
    if ( v11 && v3 == *(struct tagWND **)(v11 + 240) && v2 == 3 )
      *(_DWORD *)(gptiCurrent + 1080LL) |= 0x40u;
    *(_DWORD *)(gptiCurrent + 448LL) |= 0x20u;
    v12 = xxxSetForegroundWindow(v3);
    if ( v10 )
      *(_DWORD *)(gptiCurrent + 448LL) |= 0x20u;
    else
      *(_DWORD *)(gptiCurrent + 448LL) &= ~0x20u;
    goto LABEL_15;
  }
  return 0LL;
}
