/*
 * XREFs of ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C012F1F0
 * Callers:
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1C006D370 (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x1C015F060 (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetQueuedPresentLimit(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  unsigned int i; // ebx

  if ( *((_QWORD *)this + 40) )
  {
    for ( i = 0; i < *((_DWORD *)this + 26); ++i )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner((DXGADAPTER **)this, a2, i) )
        BLTQUEUE::SetQueuedPresentLimit((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 40) + 8LL) + 2408LL * i), a3);
    }
  }
}
