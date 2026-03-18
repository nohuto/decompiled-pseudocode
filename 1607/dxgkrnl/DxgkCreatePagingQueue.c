/*
 * XREFs of DxgkCreatePagingQueue @ 0x1C00D1FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCreatePagingQueue(struct _D3DKMT_CREATEPAGINGQUEUE *a1)
{
  return DxgkCreatePagingQueueInternal(a1, 1);
}
