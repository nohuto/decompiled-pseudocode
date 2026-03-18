/*
 * XREFs of PhkFirstValid @ 0x1C004A274
 * Callers:
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C004A0FC (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxButtonEvent @ 0x1C004BA34 (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C004CCD8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxCallMouseHook @ 0x1C00FAA60 (xxxCallMouseHook.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D9478 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     zzzUnhookWindowsHook @ 0x1C01E7220 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8LL * a2 + 800);
  if ( (v3 || (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8LL * a2 + 40)) != 0) && (*(_DWORD *)(v3 + 64) & 0x80u) != 0 )
    return PhkNextValid(v3);
  return v3;
}
