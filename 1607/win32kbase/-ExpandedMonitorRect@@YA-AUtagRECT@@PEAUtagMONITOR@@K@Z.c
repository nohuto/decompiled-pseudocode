/*
 * XREFs of ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C005910C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00588F0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z @ 0x1C00B9224 (-FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z.c)
 * Callees:
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0059178 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     MinimumMonitorDpi @ 0x1C00591E4 (MinimumMonitorDpi.c)
 */

struct tagRECT *__fastcall ExpandedMonitorRect(struct tagRECT *__return_ptr retstr, struct tagMONITOR *a2, char a3)
{
  int v3; // r8d
  BOOL v5; // edi
  unsigned __int16 v6; // bx
  struct tagPOINT v7; // rax
  struct tagPOINT v8; // r8

  v3 = a3 & 0xF;
  *retstr = *(struct tagRECT *)((char *)a2 + 28);
  if ( v3 != 2 )
  {
    v5 = v3 == 0;
    v6 = MinimumMonitorDpi();
    v7 = ExpandMonitorSpaceVertex(v5, v6, *(struct tagPOINT *)&retstr->left);
    v8 = *(struct tagPOINT *)&retstr->right;
    *(struct tagPOINT *)&retstr->left = v7;
    *(struct tagPOINT *)&retstr->right = ExpandMonitorSpaceVertex(v5, v6, v8);
  }
  return retstr;
}
