/*
 * XREFs of ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C000D210
 * Callers:
 *     DxgkReclaimAllocations2 @ 0x1C0076720 (DxgkReclaimAllocations2.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00B4110 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C00B7890 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00C97F0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     ?RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0004288 (-RemoveReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 */

void __fastcall DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE(DXGPAGINGQUEUE **this)
{
  DXGPAGINGQUEUE *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGPAGINGQUEUE::RemoveReference(v1);
}
