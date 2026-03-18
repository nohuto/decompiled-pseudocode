/*
 * XREFs of ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C004812C
 * Callers:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z @ 0x1C0048010 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C006BA6C (-InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z.c)
 *     ExpandedMonitorSpace @ 0x1C00AAD10 (ExpandedMonitorSpace.c)
 * Callees:
 *     EngMulDiv @ 0x1C0048860 (EngMulDiv.c)
 */

struct tagPOINT __fastcall ExpandMonitorSpaceVertex(int a1, unsigned __int16 a2, struct tagPOINT a3)
{
  LONG y; // rbx^4
  unsigned __int16 v4; // ax
  INT v5; // edi
  INT v6; // esi
  __int64 v8; // [rsp+48h] [rbp+20h]

  y = a3.y;
  if ( a1 )
    v4 = 96;
  else
    v4 = *((_WORD *)gpsi + 3643);
  v5 = a2;
  v6 = v4;
  LODWORD(v8) = EngMulDiv(a3.x, v4, a2);
  HIDWORD(v8) = EngMulDiv(y, v6, v5);
  return (struct tagPOINT)v8;
}
