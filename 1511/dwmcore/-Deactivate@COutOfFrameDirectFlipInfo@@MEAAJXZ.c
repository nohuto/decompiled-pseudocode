/*
 * XREFs of ?Deactivate@COutOfFrameDirectFlipInfo@@MEAAJXZ @ 0x180006AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x1800071E0 (-Deactivate@CDirectFlipInfo@@MEAAJXZ.c)
 *     ?RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z @ 0x18000BD40 (-RecordOutOfFrameDirectFlipNotification@CCompositionSurfaceInfo@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall COutOfFrameDirectFlipInfo::Deactivate(CCompositionSurfaceInfo **this)
{
  unsigned int v2; // edi

  v2 = CDirectFlipInfo::Deactivate((CDirectFlipInfo *)this);
  if ( *((_BYTE *)this + 108) )
  {
    CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipNotification(this[4], 0, 0);
    *((_BYTE *)this + 108) = 0;
  }
  return v2;
}
