/*
 * XREFs of xxxSetWindowPos @ 0x1C00848B8
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     ?xxxSendDpiChangedMessageToWindow@@YAXPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C007DF4C (-xxxSendDpiChangedMessageToWindow@@YAXPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     xxxAddShadow @ 0x1C0104418 (xxxAddShadow.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01E195C (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E43C8 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C02017F4 (xxxOldNextWindow.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 *     xxxUpdateShadowZorder @ 0x1C0223A60 (xxxUpdateShadowZorder.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C3A0 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  return xxxSetWindowPosAndBand(a1, a5, a6, a7, 0);
}
