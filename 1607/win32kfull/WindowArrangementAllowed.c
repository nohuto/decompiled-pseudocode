/*
 * XREFs of WindowArrangementAllowed @ 0x1C01F9B88
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxArrangeWindow @ 0x1C0202CF4 (xxxArrangeWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C01F9A54 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall WindowArrangementAllowed(struct tagWND *a1)
{
  _BOOL8 result; // rax

  result = WindowArrangementApplicable(a1);
  if ( result )
    return dword_1C0321804 & 1;
  return result;
}
