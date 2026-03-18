/*
 * XREFs of DxgkCreatePagingQueue @ 0x1C008D650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCreatePagingQueue(struct _D3DKMT_CREATEPAGINGQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkCreatePagingQueueInternal(a1, 1, a3);
}
