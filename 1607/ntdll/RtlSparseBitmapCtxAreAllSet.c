/*
 * XREFs of RtlSparseBitmapCtxAreAllSet @ 0x180100340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSparseBitmapCtxAreAllSet(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  return RtlSparseBitmapCtxCheckBitsInternal(a1, a2, a3, 1);
}
