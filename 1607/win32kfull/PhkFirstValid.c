/*
 * XREFs of PhkFirstValid @ 0x1C00A3CFC
 * Callers:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00A444C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00DD764 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     xxxCallMouseHook @ 0x1C0129C98 (xxxCallMouseHook.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     zzzUnhookWindowsHook @ 0x1C01DDEF0 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = a2 + 1;
  v4 = *(_QWORD *)(a1 + 8 * v3 + 792);
  if ( (v4 || (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8 * v3 + 32)) != 0) && (*(_DWORD *)(v4 + 64) & 0x80u) != 0 )
    return PhkNextValid(v4, v3, a1);
  return v4;
}
