/*
 * XREFs of DxgkEvict @ 0x1C0145BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEvict(struct _D3DKMT_EVICT *a1, __int64 a2, __int64 a3)
{
  return DxgkEvictInternal(a1, 1, a3);
}
