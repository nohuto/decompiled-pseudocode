/*
 * XREFs of zzzDecomposeDesktop @ 0x1C00EF304
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     IsDesktopWindow @ 0x1C0063530 (IsDesktopWindow.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0093E04 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0094A9C (zzzEnableDwmPointerSupport.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00EF454 (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00EF478 (GreTransferDwmStateToSpriteState.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1C00EF880 (GreRemoveDisplayDriverRealizations.c)
 *     MagpDecomposeDesktop @ 0x1C00EFC48 (MagpDecomposeDesktop.c)
 */

__int64 __fastcall zzzDecomposeDesktop(struct tagDESKTOP *a1, int a2)
{
  char v3; // bp
  __int64 v4; // rsi
  __int64 v5; // rcx
  __m128i *v7; // rbx
  char v8; // di

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 244LL) & 1) != 0 )
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
        v7 = *(__m128i **)(v5 + 24 * v4);
        if ( (unsigned int)IsWindowComposedOnDesktop((struct tagWND *const)v7, a1) )
        {
          v8 = v3;
          if ( (unsigned int)IsDesktopWindow((__int64)v7) )
          {
            v8 = v3 | 4;
          }
          else if ( (v7[3].m128i_i8[7] & 1) != 0 )
          {
            PostEventMessageEx(
              v7[1].m128i_i64[0],
              *(_QWORD *)(v7[1].m128i_i64[0] + 384),
              0x10u,
              (__int64)v7,
              0,
              0LL,
              0LL,
              0LL);
          }
          ComposeWindow(v7, v8);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= giheLast );
    GreRemoveDisplayDriverRealizations(*gpDispInfo);
    zzzEnableDwmPointerSupport(0, 0);
    GreTransferDwmStateToSpriteState((HDEV)*gpDispInfo);
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 244LL) &= ~1u;
    GreLockVisRgn(*gpDispInfo);
    GreUpdateSpriteVisRgn(*gpDispInfo, 0);
    GreUnlockVisRgn(*gpDispInfo);
    BroadcastCompositionChange(a1);
  }
  return 1LL;
}
