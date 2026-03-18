/*
 * XREFs of UpdateWindowMonitor @ 0x14004BA40
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     RecreateRedirectionBitmap @ 0x140041830 (RecreateRedirectionBitmap.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x140046530 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     UpdateTopLevelWindowDPITransform @ 0x14004A540 (UpdateTopLevelWindowDPITransform.c)
 *     ResetWindowTransform @ 0x14004A5F8 (ResetWindowTransform.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14004ABFC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x14004DA2C (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     UpdateWindowSpriteMonitor @ 0x1400A6748 (UpdateWindowSpriteMonitor.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x14019AAA4 (-IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     FindShadowWindow @ 0x140231868 (FindShadowWindow.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *ShadowWindow, struct tagMONITOR *a2)
{
  __int16 WindowDpiLastNotify; // ax
  __int64 v5; // rdx
  int v6; // r9d
  unsigned int v7; // ecx
  int v8; // r9d
  unsigned int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // bl
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  _BYTE v20[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v21[24]; // [rsp+40h] [rbp-18h] BYREF

  if ( a2 )
  {
    while ( 1 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)ShadowWindow);
      v5 = *(unsigned __int16 *)(*((_QWORD *)a2 + 5) + 60LL);
      v7 = v6 & 0xFFFBFFFF;
      v8 = v6 | 0x40000;
      if ( (_WORD)v5 == WindowDpiLastNotify )
        v8 = v7;
      *((_DWORD *)ShadowWindow + 95) = v8;
      if ( (unsigned int)IsTopLevelWindow(ShadowWindow, v5)
        && (*(_DWORD *)(*((_QWORD *)ShadowWindow + 5) + 288LL) & 0xF) == 2 )
      {
        SetDeferredDpiStateForWindowAndChildren((__int64 *)ShadowWindow, (v9 >> 18) & 1, 0);
      }
      UpdateWindowMonitorAndDpiInfoHelper(ShadowWindow, a2);
      v10 = *((_QWORD *)ShadowWindow + 5);
      *(_DWORD *)(v10 + 232) = *(_DWORD *)(v10 + 232) & 0xFFFFFBFF | (ShouldUseLogPixelsForWindowMetrics(ShadowWindow) << 10);
      v12 = IsChildWindowDpiBoundary(ShadowWindow);
      v13 = *((_QWORD *)ShadowWindow + 5);
      if ( v12 )
      {
        if ( (*(_BYTE *)(v13 + 26) & 8) == 0 )
          ComposeWindow(ShadowWindow);
      }
      else if ( (*(_DWORD *)(v13 + 232) & 2) != 0 && IsChildWindowCoordinateSpaceBoundary(ShadowWindow) )
      {
        ComposeWindow(ShadowWindow);
        if ( GetTopLevelWindow(ShadowWindow) )
        {
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v20);
          xxxInternalInvalidate(*((struct tagWND **)ShadowWindow + 13), (HRGN)1, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v20);
        }
      }
      if ( !(unsigned int)IsTopLevelWindow(ShadowWindow, v11) && !v12 )
        break;
      if ( (*((_DWORD *)ShadowWindow + 95) & 0x40000) != 0 )
      {
        if ( PtiCurrent(v14) )
        {
          if ( *((_QWORD *)PtiCurrent(v15) + 61) )
          {
            if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v16) + 61) + 8LL) + 64LL) & 1) != 0 )
            {
              v17 = *((_QWORD *)ShadowWindow + 5);
              if ( (*(_DWORD *)(v17 + 288) & 0x4000000F) == 0x40000000
                && (*(_BYTE *)(v17 + 27) & 0x20) != 0
                && (*(_BYTE *)(v17 + 26) & 0x20) == 0 )
              {
                GreLockVisRgn();
                v18 = RecreateRedirectionBitmap(ShadowWindow, 0, 0, 0, 0, 0LL);
                GreUnlockVisRgn(v19);
                if ( v18 >= 0 )
                {
                  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v21);
                  xxxInternalInvalidate(ShadowWindow, (HRGN)1, 0x85u);
                  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v21);
                }
              }
            }
          }
        }
      }
      UpdateWindowSpriteMonitor(ShadowWindow, a2);
      UpdateTopLevelWindowDPITransform(ShadowWindow, (__int64)a2);
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)ShadowWindow + 17) + 8LL) + 10LL) & 2) != 0 )
      {
        ShadowWindow = (struct tagWND *)FindShadowWindow(ShadowWindow);
        if ( ShadowWindow )
          continue;
      }
      return;
    }
    ResetWindowTransform((__int64)ShadowWindow);
    if ( (*(_BYTE *)(*((_QWORD *)ShadowWindow + 5) + 26LL) & 8) != 0 )
      UpdateWindowSpriteMonitor(ShadowWindow, a2);
  }
}
