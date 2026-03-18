/*
 * XREFs of DXGADAPTER_DdiQueryAdapterInfo @ 0x1C0010BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DXGADAPTER_DdiQueryAdapterInfo(DXGADAPTER *a1, const struct _DXGKARG_QUERYADAPTERINFO *a2)
{
  return DXGADAPTER::DdiQueryAdapterInfo(a1, a2);
}
