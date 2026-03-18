/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658
 * Callers:
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     xxxUpdateWindow @ 0x1C00DF640 (xxxUpdateWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMNInvertItem @ 0x1C010D450 (xxxMNInvertItem.c)
 *     xxxPrintWindow @ 0x1C01E7A14 (xxxPrintWindow.c)
 *     xxxbFullscreenSwitch @ 0x1C01EFDB8 (xxxbFullscreenSwitch.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C020DBB8 (xxxUpdateThreadsWindows.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00DF69C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
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
