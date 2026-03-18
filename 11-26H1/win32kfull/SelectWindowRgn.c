/*
 * XREFs of SelectWindowRgn @ 0x140018490
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14015B5D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x14026F7C4 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1402BE780 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x14001843C (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1400189D4 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 *     GreUpdateSpriteClipRgn @ 0x14014CB00 (GreUpdateSpriteClipRgn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1401F1C9C (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 */

void __fastcall SelectWindowRgn(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  bool v5; // bp
  __int64 v6; // r9
  __int64 MonitorRegionForDpi; // rsi
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v18; // r9
  __int64 v19; // rdx
  bool v20; // bp
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) != 0LL;
  if ( tagWND::GetExplicitClipRgn(a1) && v6 == 2 )
    return;
  MonitorRegionForDpi = 0LL;
  v8 = 1;
  if ( v6 != 1 )
    MonitorRegionForDpi = v6;
  SetOrClrWF(0LL, a1, 1288LL, 1LL);
  tagWND::ClearClipRgnOrMaxClip(a1);
  if ( MonitorRegionForDpi == 2 )
  {
    MonitorRegionForDpi = 0LL;
    if ( ***(_DWORD ***)(W32GetUserSessionState(v10, v9) + 56968) > 1u )
    {
      v16 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v16 + 31) & 1) != 0 && (*(_BYTE *)(v16 + 19) & 0x40) != 0 )
      {
        if ( _MonitorFromWindowInternal(a1, 0, 0) )
        {
          WindowCompositedDpi = GetWindowCompositedDpi(a1);
          MonitorRegionForDpi = CreateMonitorRegionForDpi(v18, WindowCompositedDpi);
          if ( MonitorRegionForDpi )
          {
            SetOrClrWF(1LL, a1, 1288LL, 1LL);
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
            {
              v8 = 0;
            }
            v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
              LOBYTE(v22) = v20;
              LOBYTE(v23) = v8;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v23,
                v22,
                *(_QWORD *)(UserSessionState + 69152),
                4,
                8,
                34,
                (__int64)&WPP_02533ab98a5c3af91ff1e08ea5f21686_Traceguids,
                (char)a1);
            }
            goto LABEL_7;
          }
        }
      }
    }
LABEL_11:
    if ( !v5 )
      return;
    goto LABEL_12;
  }
  if ( !MonitorRegionForDpi )
    goto LABEL_11;
  GreOffsetRgn(
    MonitorRegionForDpi,
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL),
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 92LL));
LABEL_7:
  GreSetRegionOwner(MonitorRegionForDpi, 0LL);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = MonitorRegionForDpi;
LABEL_12:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)IsTopLevelWindow(a1, v11) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v14 = *(_QWORD *)a1;
        v15 = W32GetUserSessionState(v13, v12);
        GreUpdateSpriteClipRgn(*(_QWORD *)(*(_QWORD *)(v15 + 56968) + 40LL), v14, MonitorRegionForDpi, a3);
      }
    }
    DirtyVisRgnTrackers(a1);
  }
}
