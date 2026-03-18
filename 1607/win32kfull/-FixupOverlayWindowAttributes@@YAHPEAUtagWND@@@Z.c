/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01CD3F4
 * Callers:
 *     _NotifyOverlayWindow @ 0x1C01CE970 (_NotifyOverlayWindow.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C0224B18 (SetWindowCompositionVideoOverlayActive.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rbp
  struct tagBWL *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagBWL *v8; // r14
  unsigned __int64 *i; // rsi
  __int64 v10; // rax

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    if ( __CFSHR__(*(_DWORD *)(TopLevelWindow + 288), 11) )
    {
LABEL_10:
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(v3) >= 0;
      return v1;
    }
    v4 = BuildHwndList(TopLevelWindow, (struct tagWND *)1, 0LL);
    v8 = v4;
    if ( v4 )
    {
      for ( i = (unsigned __int64 *)((char *)v4 + 32); *i != 1; ++i )
      {
        LOBYTE(v5) = 1;
        v10 = HMValidateHandleNoSecure(*i, v5, v6, v7);
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 288) & 0x400) != 0 )
            break;
        }
      }
      FreeHwndList(v8);
      goto LABEL_10;
    }
  }
  return v1;
}
