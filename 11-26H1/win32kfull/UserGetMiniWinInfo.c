/*
 * XREFs of UserGetMiniWinInfo @ 0x14025AF04
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400145A8 (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetMiniWinInfo(__int64 a1, struct tagMINIWINDOWINFO *a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  const struct tagWND *v6; // rax
  const struct tagWND *v7; // rdi

  v5 = 0;
  v6 = (const struct tagWND *)HMValidateHandleNoSecure(a1, 1);
  v7 = v6;
  if ( v6 )
  {
    InitializeMiniWinInfo(v6, a2);
    v5 = 1;
    *a3 = *((_DWORD *)v7 + 64);
  }
  return v5;
}
