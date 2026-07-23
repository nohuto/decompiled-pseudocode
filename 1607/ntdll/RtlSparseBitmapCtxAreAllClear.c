/*
 * XREFs of RtlSparseBitmapCtxAreAllClear @ 0x180100330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSparseBitmapCtxAreAllClear(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  return RtlSparseBitmapCtxCheckBitsInternal(a1, a2, a3, 0);
}
