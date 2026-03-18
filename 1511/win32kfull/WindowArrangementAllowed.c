/*
 * XREFs of WindowArrangementAllowed @ 0x1C0202874
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxArrangeWindow @ 0x1C020BBA4 (xxxArrangeWindow.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0202738 (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall WindowArrangementAllowed(struct tagWND *a1)
{
  _BOOL8 result; // rax

  result = WindowArrangementApplicable(a1);
  if ( result )
    return dword_1C031B14C & 1;
  return result;
}
