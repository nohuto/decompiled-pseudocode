/*
 * XREFs of ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x1C000580C
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C013531C (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsCoreResourceSharedOwner(DXGADAPTER **this)
{
  return DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
}
