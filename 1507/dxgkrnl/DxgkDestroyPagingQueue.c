/*
 * XREFs of DxgkDestroyPagingQueue @ 0x1C0145BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDestroyPagingQueue(struct D3DDDI_DESTROYPAGINGQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkDestroyPagingQueueInternal(a1, 1, a3);
}
