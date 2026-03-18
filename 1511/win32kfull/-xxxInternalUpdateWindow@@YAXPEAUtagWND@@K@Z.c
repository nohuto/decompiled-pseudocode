/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8
 * Callers:
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     xxxUpdateWindow @ 0x1C0096490 (xxxUpdateWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMNInvertItem @ 0x1C0139128 (xxxMNInvertItem.c)
 *     xxxPrintWindow @ 0x1C01E7E84 (xxxPrintWindow.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFD14 (xxxbFullscreenSwitch.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200F84 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C020E344 (xxxUpdateThreadsWindows.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  __int64 i; // r8

  if ( (*((_BYTE *)a1 + 48) & 0x20) != 0 )
  {
    for ( i = *((_QWORD *)a1 + 9); i; i = *(_QWORD *)(i + 72) )
    {
      if ( *(_QWORD *)(i + 16) == *((_QWORD *)a1 + 2) && (*(_QWORD *)(i + 160) || (*(_BYTE *)(i + 41) & 0x10) != 0) )
        return;
    }
  }
  xxxUpdateWindow2(a1, a2);
}
