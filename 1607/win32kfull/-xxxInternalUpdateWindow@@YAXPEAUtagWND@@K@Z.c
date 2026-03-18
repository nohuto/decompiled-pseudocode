/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728
 * Callers:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     xxxUpdateWindow @ 0x1C005E710 (xxxUpdateWindow.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     xxxMNInvertItem @ 0x1C013F324 (xxxMNInvertItem.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 *     xxxbFullscreenSwitch @ 0x1C01E5A54 (xxxbFullscreenSwitch.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F82AC (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C02053DC (xxxUpdateThreadsWindows.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
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
