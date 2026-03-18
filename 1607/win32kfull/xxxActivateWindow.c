/*
 * XREFs of xxxActivateWindow @ 0x1C00AB2EC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxMouseActivate @ 0x1C0109300 (xxxMouseActivate.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0114818 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetActiveWindow @ 0x1C012FEE0 (xxxSetActiveWindow.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F1F34 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00AB1B8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     FBadWindow @ 0x1C00AB590 (FBadWindow.c)
 *     SkipWindowOnMonitor @ 0x1C00B2640 (SkipWindowOnMonitor.c)
 *     NextTopWindow @ 0x1C0105548 (NextTopWindow.c)
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C012707C (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall xxxActivateWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  struct tagWND *v3; // rbx
  char v4; // r15
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct tagWND *ImmersiveRealmFallbackWindow; // rax
  char i; // si
  __int64 TopWindow; // rax
  BOOL v12; // esi
  __int64 v13; // rax
  struct tagWND **v14; // rsi
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 2;
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
          v4 = 3;
          goto LABEL_4;
        }
LABEL_12:
        ImmersiveRealmFallbackWindow = GetImmersiveRealmFallbackWindow(v3);
        if ( ImmersiveRealmFallbackWindow )
        {
          v3 = ImmersiveRealmFallbackWindow;
        }
        else if ( !gpqForegroundPrev
               || (unsigned int)FBadWindow(*(struct tagWND **)(gpqForegroundPrev + 96LL))
               || (*(_BYTE *)(*(_QWORD *)(gpqForegroundPrev + 96LL) + 44LL) & 0x20) != 0
               || (unsigned int)SkipWindowOnMonitor() )
        {
          for ( i = 6; ; i &= ~2u )
          {
            TopWindow = NextTopWindow(gptiCurrent);
            v3 = (struct tagWND *)TopWindow;
            if ( TopWindow )
              break;
            if ( (i & 2) == 0 )
              return 0LL;
          }
          v14 = (struct tagWND **)(TopWindow + 240);
          if ( !(unsigned int)FBadWindow(*(struct tagWND **)(TopWindow + 240)) )
            v3 = *v14;
        }
        else
        {
          v3 = *(struct tagWND **)(gpqForegroundPrev + 96LL);
        }
        goto LABEL_4;
      }
      v4 = 3;
    }
    if ( !(unsigned int)FBadWindow(a1) )
      goto LABEL_4;
    goto LABEL_11;
  }
LABEL_4:
  if ( v3 )
  {
    v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v15;
    v15[1] = v3;
    ++*((_DWORD *)v3 + 2);
    v5 = *(_QWORD *)(gptiCurrent + 384LL);
    if ( *(_QWORD *)(*((_QWORD *)v3 + 2) + 384LL) == v5 )
    {
      if ( !(unsigned int)FAllowForegroundActivate(*(struct tagQ **)(gptiCurrent + 384LL), v3) )
      {
        v7 = xxxActivateThisWindow(v3, 0, v4, 0);
LABEL_8:
        ThreadUnlock1(v6, a2);
        return v7;
      }
      v12 = *(_DWORD *)(gptiCurrent + 784LL) == 0;
    }
    else
    {
      v6 = gpqForeground;
      if ( gpqForeground != v5 && gpqForeground )
      {
        v7 = 0;
        goto LABEL_8;
      }
      v12 = (*(_DWORD *)(gptiCurrent + 440LL) & 0x20) != 0 || v2 == 1 || *(_DWORD *)(gptiCurrent + 784LL);
    }
    v13 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v13 && v3 == *(struct tagWND **)(v13 + 288) && v2 == 3 )
      *(_DWORD *)(gptiCurrent + 1096LL) |= 0x40u;
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
    v7 = xxxSetForegroundWindow(v3, v2 == 1);
    if ( v12 )
      *(_DWORD *)(gptiCurrent + 440LL) |= 0x20u;
    else
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x20u;
    goto LABEL_8;
  }
  return 0LL;
}
