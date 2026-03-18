/*
 * XREFs of WindowHasAnyCompositionTargetWithInputSink @ 0x1C011DC0C
 * Callers:
 *     xxxIsDCompSpeedHitTest @ 0x1C00593A0 (xxxIsDCompSpeedHitTest.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0098798 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall WindowHasAnyCompositionTargetWithInputSink(struct tagWND *a1)
{
  __int64 TopLevelWindow; // rax
  unsigned int v4; // r11d

  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  if ( !TopLevelWindow || (*(_BYTE *)(TopLevelWindow + 290) & 0x10) == 0 )
    return 0LL;
  if ( (unsigned int)WindowHasCompositionTarget(a1) || (unsigned int)WindowHasCompositionTarget(a1) )
    return 1;
  return v4;
}
