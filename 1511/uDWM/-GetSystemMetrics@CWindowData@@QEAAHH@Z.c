/*
 * XREFs of ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001E920
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x18000FAC0 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180025F00 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180027DF8 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800283E0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x18006E668 (-GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18007D7D0 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CWindowData::GetSystemMetrics(CWindowData *this, int a2)
{
  int v2; // eax
  double v4; // xmm6_8
  int result; // eax

  v2 = *((_DWORD *)this + 76);
  v4 = DOUBLE_1_0;
  if ( v2 )
  {
    if ( v2 == 1 || *((_DWORD *)this + 82) )
      v4 = (double)*((int *)this + 77) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 365);
    result = GetSystemMetrics(a2);
  }
  else
  {
    v4 = *((double *)this + 37);
    result = GetSystemMetrics96((unsigned int)a2);
  }
  if ( a2 <= 33 )
  {
    if ( a2 >= 31 || a2 >= 2 && (a2 <= 4 || a2 > 8 && (a2 <= 12 || a2 == 15 || a2 > 19 && a2 <= 21)) )
      return (int)((double)result * v4);
  }
  else if ( a2 >= 38 && (a2 <= 39 || a2 > 48 && (a2 <= 50 || a2 == 55 || a2 == 92)) )
  {
    return (int)((double)result * v4);
  }
  return result;
}
