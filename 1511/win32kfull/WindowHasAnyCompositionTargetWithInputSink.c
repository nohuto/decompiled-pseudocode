/*
 * XREFs of WindowHasAnyCompositionTargetWithInputSink @ 0x1C0009B68
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C0066924 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C00D2184 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall WindowHasAnyCompositionTargetWithInputSink(struct tagWND *a1)
{
  __int64 TopLevelWindow; // rax
  unsigned int v3; // r11d

  TopLevelWindow = GetTopLevelWindow();
  if ( !TopLevelWindow || (*(_BYTE *)(TopLevelWindow + 290) & 0x10) == 0 )
    return 0LL;
  if ( (unsigned int)WindowHasCompositionTarget(a1, 1) || (unsigned int)WindowHasCompositionTarget(a1, 0) )
    return 1;
  return v3;
}
