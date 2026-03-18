/*
 * XREFs of ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C0131530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddCreatePagingQueue(struct _D3DKMT_CREATEPAGINGQUEUE *a1)
{
  return DxgkCreatePagingQueueInternal(a1, 0);
}
