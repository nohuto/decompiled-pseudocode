/*
 * XREFs of RawInputRequestedForMouse @ 0x1C004B914
 * Callers:
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 RawInputRequestedForMouse()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( dword_1C0321704 || gfRawMouse )
    return 1;
  return v0;
}
