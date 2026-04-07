/*
 * XREFs of ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NNN@Z @ 0x18007E094
 * Callers:
 *     ?GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z @ 0x18007DCFC (-GetCVI@CThumbnailVisual@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAUMilPoint3F@@@Z.c)
 *     ?s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z @ 0x18007E0CC (-s_IsCloseEnoughToReuse@CThumbnailVisual@@CA_NPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CThumbnailVisual::s_IsCloseEnoughToReuse(double a1, double a2)
{
  return a2 > 0.0 && COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1 - a2) & _xmm) / a2 < 0.1;
}
