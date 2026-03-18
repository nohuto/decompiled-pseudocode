/*
 * XREFs of zzzDecomposeDesktop @ 0x1C012B95C
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxDwmStopRedirection @ 0x1C012B6A0 (xxxDwmStopRedirection.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 * Callees:
 *     ComposeWindow @ 0x1C000B878 (ComposeWindow.c)
 *     IsDesktopWindow @ 0x1C0012B0C (IsDesktopWindow.c)
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C012BAAC (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C012BAD0 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C012BEDC (GreRemoveDisplayDriverRealizations.c)
 *     MagpDecomposeDesktop @ 0x1C012C2A4 (MagpDecomposeDesktop.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C014A01C (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 260LL) & 1) != 0 )
  {
    v3 = 2;
    if ( a2 )
      v3 = 18;
    MagpDecomposeDesktop(*(_QWORD *)&gMagnContext, a1);
    v4 = 0LL;
    do
    {
      v5 = gSharedInfo[1];
      if ( *(_BYTE *)(v5 + 24 * v4 + 16) == 1 )
      {
        v7 = *(_QWORD *)(v5 + 24 * v4);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v7, a1) )
        {
          v8 = v3;
          if ( (unsigned int)IsDesktopWindow(v7) )
          {
            v8 = v3 | 4;
          }
          else if ( (*(_BYTE *)(v7 + 55) & 1) != 0 )
          {
            PostEventMessageEx(
              *(_QWORD *)(v7 + 16),
              *(_QWORD *)(*(_QWORD *)(v7 + 16) + 392LL),
              0x10u,
              (LARGE_INTEGER *)v7,
              0,
              0LL,
              0LL,
              0LL);
          }
          ComposeWindow((struct tagWND *)v7, v8, v9, v10);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= giheLast );
    GreRemoveDisplayDriverRealizations(*gpDispInfo);
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState((HDEV)*gpDispInfo);
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 260LL) &= ~1u;
    GreLockVisRgn(*gpDispInfo);
    GreUpdateSpriteVisRgn(*gpDispInfo, 0);
    GreUnlockVisRgn(*gpDispInfo);
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
