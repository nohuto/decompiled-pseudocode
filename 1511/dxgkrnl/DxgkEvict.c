/*
 * XREFs of DxgkEvict @ 0x1C00B4EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEvict(struct _D3DKMT_EVICT *a1)
{
  return DxgkEvictInternal(a1, 1);
}
