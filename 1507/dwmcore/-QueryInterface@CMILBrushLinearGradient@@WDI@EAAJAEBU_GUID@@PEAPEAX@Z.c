/*
 * XREFs of ?QueryInterface@CMILBrushLinearGradient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDxHandleDecodeBitmapRealization::QueryInterface((CDxHandleDecodeBitmapRealization *)(a1 - 56), a2, a3);
}
