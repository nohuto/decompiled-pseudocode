/*
 * XREFs of ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z @ 0x1C0048010
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0047D40 (TransformRectBetweenCoordinateSpaces.c)
 *     ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@PEAUtagPROCESSINFO@@@Z @ 0x1C00843B0 (-FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@PEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C004812C (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     MinimumMonitorDpi @ 0x1C0048C84 (MinimumMonitorDpi.c)
 */

struct tagRECT *__fastcall ExpandedMonitorRect(
        struct tagRECT *__return_ptr retstr,
        struct tagMONITOR *a2,
        struct tagPROCESSINFO *a3)
{
  int v3; // eax
  BOOL v5; // edi
  unsigned __int16 v6; // bx
  struct tagPOINT v7; // rax
  struct tagPOINT v8; // r8

  v3 = *((_DWORD *)a3 + 194);
  *retstr = *(struct tagRECT *)((char *)a2 + 28);
  if ( (v3 & 0x4000) == 0 )
  {
    v5 = (v3 & 0x6000) == 0;
    v6 = MinimumMonitorDpi();
    v7 = ExpandMonitorSpaceVertex(v5, v6, *(struct tagPOINT *)&retstr->left);
    v8 = *(struct tagPOINT *)&retstr->right;
    *(struct tagPOINT *)&retstr->left = v7;
    *(struct tagPOINT *)&retstr->right = ExpandMonitorSpaceVertex(v5, v6, v8);
  }
  return retstr;
}
