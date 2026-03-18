/*
 * XREFs of xxxActivateWindow @ 0x1C008CA64
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C008C694 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxMouseActivate @ 0x1C00E95C4 (xxxMouseActivate.c)
 *     xxxSetActiveWindow @ 0x1C010BCE0 (xxxSetActiveWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C008B38C (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     NextTopWindow @ 0x1C008B4E8 (NextTopWindow.c)
 *     FBadWindow @ 0x1C008CA1C (FBadWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C008CE74 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00C7964 (SkipWindowOnMonitor.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  struct tagWND *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct tagWND *ImmersiveRealmFallbackWindow; // rax
  __int64 v9; // r14
  char i; // si
  struct tagWND *v11; // r8
  struct tagWND *TopWindow; // rax
  BOOL v13; // esi
  __int64 v14; // rax
  __int64 v15; // rcx
  struct tagWND **v16; // rsi
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

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
      {
LABEL_11:
        if ( (((*((_BYTE *)v3 + 55) & 0xC0) + 0x80) & 0xBF) == 0
          && !(unsigned int)FBadWindow(*((struct tagWND **)v3 + 13)) )
        {
          v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
          goto LABEL_4;
        }
        goto LABEL_12;
      }
      if ( v2 != 4 )
      {
        if ( v2 != 5 )
        {
          if ( v2 != 6 )
            return 0LL;
          goto LABEL_4;
        }
LABEL_12:
        ImmersiveRealmFallbackWindow = GetImmersiveRealmFallbackWindow(v3);
        if ( ImmersiveRealmFallbackWindow )
        {
          v3 = ImmersiveRealmFallbackWindow;
        }
        else if ( !gpqForegroundPrev
               || (unsigned int)FBadWindow(*(struct tagWND **)(gpqForegroundPrev + 88LL))
               || (v15 = *(_QWORD *)(gpqForegroundPrev + 88LL), (*(_BYTE *)(v15 + 44) & 0x20) != 0)
               || (unsigned int)SkipWindowOnMonitor(v15) )
        {
          v9 = (__int64)v3;
          for ( i = 6; ; i &= ~2u )
          {
            v11 = 0LL;
            if ( v2 == 3 )
              v11 = (struct tagWND *)v9;
            TopWindow = NextTopWindow(gptiCurrent, v9, v11, i);
            v3 = TopWindow;
            if ( TopWindow )
              break;
            if ( (i & 2) == 0 )
              return 0LL;
          }
          v16 = (struct tagWND **)((char *)TopWindow + 240);
          if ( !(unsigned int)FBadWindow(*((struct tagWND **)TopWindow + 30)) )
            v3 = *v16;
        }
        else
        {
          v3 = *(struct tagWND **)(gpqForegroundPrev + 88LL);
        }
        goto LABEL_4;
      }
    }
    if ( !(unsigned int)FBadWindow(a1) )
      goto LABEL_4;
    goto LABEL_11;
  }
LABEL_4:
  if ( v3 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v3;
    ++*((_DWORD *)v3 + 2);
    v4 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( *(_QWORD *)(*((_QWORD *)v3 + 2) + 384LL) == v4 )
    {
      if ( !FAllowForegroundActivate(*(struct tagQ **)(gptiCurrent + 384LL), v3) )
      {
        v6 = xxxActivateThisWindow(v3);
LABEL_8:
        ThreadUnlock1(v5, a2);
        return v6;
      }
      v13 = *(_DWORD *)(gptiCurrent + 776LL) == 0;
    }
    else
    {
      v5 = gpqForeground;
      if ( gpqForeground != v4 && gpqForeground )
      {
        v6 = 0;
        goto LABEL_8;
      }
      v13 = (*(_DWORD *)(gptiCurrent + 440LL) & 0x20) != 0 || v2 == 1 || *(_DWORD *)(gptiCurrent + 776LL);
    }
    v14 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v14 && v3 == *(struct tagWND **)(v14 + 288) && v2 == 3 )
      *(_DWORD *)(gptiCurrent + 1072LL) |= 0x40u;
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
    v6 = xxxSetForegroundWindow(v3);
    if ( v13 )
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
    else
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x20u;
    goto LABEL_8;
  }
  return 0LL;
}
