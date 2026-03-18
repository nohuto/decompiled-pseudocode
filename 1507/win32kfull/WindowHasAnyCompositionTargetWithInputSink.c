/*
 * XREFs of WindowHasAnyCompositionTargetWithInputSink @ 0x1C0007AB4
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C008D644 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00E9AD4 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall WindowHasAnyCompositionTargetWithInputSink(struct tagWND *a1)
{
  __int64 TopLevelWindow; // rax
  struct tagWND *v4; // rcx
  unsigned int v5; // r11d

  TopLevelWindow = GetTopLevelWindow(a1);
  if ( !TopLevelWindow || (*(_BYTE *)(TopLevelWindow + 290) & 0x10) == 0 )
    return 0LL;
  if ( (unsigned int)WindowHasCompositionTarget(a1, 1) || (unsigned int)WindowHasCompositionTarget(v4, 0) )
    return 1;
  return v5;
}
