/*
 * XREFs of DxgkDestroyPagingQueue @ 0x1C00C0790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1)
{
  return DxgkDestroyPagingQueueInternal(a1, 1);
}
