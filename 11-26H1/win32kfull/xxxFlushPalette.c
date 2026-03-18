/*
 * XREFs of xxxFlushPalette @ 0x14028AE60
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x14021B5C0 (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x14028AEA0 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreRealizeDefaultPalette(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 56LL));
  return xxxBroadcastPaletteChanged(a1, 1LL);
}
