/*
 * XREFs of ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0006244
 * Callers:
 *     ?NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z @ 0x1C0028214 (-NotifyInterrupt@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00D6630 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
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
  while ( *(_DWORD *)(1016LL * v3 + *((_QWORD *)this + 14) + 964) != a2 )
  {
    if ( ++v3 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
