/*
 * XREFs of ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0020268
 * Callers:
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C0021804 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z @ 0x1C006223C (-DxgkGetPreferredVidPnSourceList@@YAJAEAU_LUID@@IPEAI1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(ADAPTER_DISPLAY *this, int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d

  v2 = *((_DWORD *)this + 20);
  v3 = 0;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  while ( *(_DWORD *)(1008LL * v3 + *((_QWORD *)this + 14) + 956) != a2 )
  {
    if ( ++v3 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
