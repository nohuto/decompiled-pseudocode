/*
 * XREFs of ?Deactivate@COutOfFrameDirectFlipInfo@@MEAAJXZ @ 0x180005E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180006800 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 *     ?RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z @ 0x1800076CC (-RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall COutOfFrameDirectFlipInfo::Deactivate(CCompositionSurfaceInfo **this)
{
  unsigned int v2; // edi

  v2 = CDirectFlipInfo::Deactivate((CDirectFlipInfo *)this);
  if ( *((_BYTE *)this + 132) )
  {
    CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipNotification(this[4], 0, 0);
    *((_BYTE *)this + 132) = 0;
  }
  return v2;
}
