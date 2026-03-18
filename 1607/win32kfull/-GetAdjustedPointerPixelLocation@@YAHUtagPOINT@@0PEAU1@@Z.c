/*
 * XREFs of ?GetAdjustedPointerPixelLocation@@YAHUtagPOINT@@0PEAU1@@Z @ 0x1C01EF450
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F02D0 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01F05C0 (-PointerInfoCopyOutHelper@@YAHPEAUtagPOINTERINFONODE@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagP.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F0D70 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C0125324 (LongLongToLong.c)
 */

_BOOL8 __fastcall GetAdjustedPointerPixelLocation(struct tagPOINT a1, struct tagPOINT a2, struct tagPOINT *a3)
{
  __int64 v3; // rdx
  LONG v5; // [rsp+34h] [rbp+Ch]
  LONG y; // [rsp+3Ch] [rbp+14h]

  y = a2.y;
  v5 = a1.y;
  return LongLongToLong(a2.x + (__int64)a1.x, (LONG *)a3) >= 0 && LongLongToLong(v5 + (__int64)y, (LONG *)(v3 + 4)) >= 0;
}
