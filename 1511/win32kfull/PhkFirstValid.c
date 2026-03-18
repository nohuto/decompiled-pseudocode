/*
 * XREFs of PhkFirstValid @ 0x1C0084424
 * Callers:
 *     xxxPointerCallHook @ 0x1C000B9B8 (xxxPointerCallHook.c)
 *     ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C008279C (-CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C00874E8 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z @ 0x1C0087E90 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@K0HH@Z.c)
 *     xxxCallMouseHook @ 0x1C01076C8 (xxxCallMouseHook.c)
 *     zzzUnhookWindowsHook @ 0x1C01E7690 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 */

__int64 __fastcall PhkFirstValid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 8LL * (int)a2 + 792);
  if ( (v5 || (v5 = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL * (int)a2 + 40)) != 0)
    && (*(_DWORD *)(v5 + 64) & 0x80u) != 0 )
  {
    return PhkNextValid(v5, a2, (int)a2, a4);
  }
  return v5;
}
