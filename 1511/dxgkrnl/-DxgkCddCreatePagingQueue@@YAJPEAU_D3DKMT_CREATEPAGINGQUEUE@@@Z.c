/*
 * XREFs of ?DxgkCddCreatePagingQueue@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@@Z @ 0x1C00C6B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCddCreatePagingQueue(struct _D3DKMT_CREATEPAGINGQUEUE *a1, __int64 a2, __int64 a3)
{
  return DxgkCreatePagingQueueInternal(a1, 0, a3);
}
