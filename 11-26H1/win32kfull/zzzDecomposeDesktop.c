/*
 * XREFs of zzzDecomposeDesktop @ 0x1400F7F10
 * Callers:
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1400F82DC (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1400F86BC (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     MagpDecomposeDesktop @ 0x14023BE54 (MagpDecomposeDesktop.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rbx

  if ( (*(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) & 1) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, (unsigned int)-a2);
    MagpDecomposeDesktop(UserSessionState + 66032, a1);
    v4 = 0LL;
    W32GetUserSessionState(v6, v5);
    do
    {
      v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19920);
      v12 = W32GetUserSessionState(v11, v10);
      v13 = 5 * v4;
      v14 = *(_QWORD *)(v12 + 19864);
      if ( *(_BYTE *)(v9 + 32LL * (unsigned int)v4 + 24) == 1 )
      {
        v25 = *(_QWORD *)(v14 + 40 * v4);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v25, a1) )
        {
          if ( !(unsigned int)IsDesktopWindow(v25) && (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 31LL) & 1) != 0 )
            PostEventMessageEx(
              *(struct tagTHREADINFO **)(v25 + 16),
              *(struct tagQ **)(*(_QWORD *)(v25 + 16) + 464LL),
              0x10u,
              (struct tagWND *)v25,
              0,
              0LL,
              0LL,
              0LL);
          ComposeWindow((struct tagWND *)v25);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= *(_DWORD *)(W32GetUserSessionState(v13, v14) + 19848) );
    v15 = W32GetUserSessionState(v8, v7);
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(*(_QWORD *)(v15 + 56968) + 40LL));
    zzzEnableDwmPointerSupport(0LL, 0LL);
    W32GetUserSessionState(v17, v16);
    v19 = W32GetUserSessionState(**((_QWORD **)a1 + 1), v18);
    GreTransferDwmStateToSpriteState(*(HDEV *)(*(_QWORD *)(v19 + 56968) + 40LL));
    *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
    GreLockVisRgn();
    v22 = W32GetUserSessionState(v21, v20);
    GreUpdateSpriteVisRgn(*(Gre::Base **)(*(_QWORD *)(v22 + 56968) + 40LL), 0);
    GreUnlockVisRgn(v23);
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
