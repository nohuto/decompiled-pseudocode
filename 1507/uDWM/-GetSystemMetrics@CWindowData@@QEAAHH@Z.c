/*
 * XREFs of ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001906C
 * Callers:
 *     ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x1800032B4 (-GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180020970 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180022530 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180022B80 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 *     ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x180067628 (-GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x180075740 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CWindowData::GetSystemMetrics(CWindowData *this, int a2)
{
  int v2; // eax
  double v4; // xmm6_8
  int result; // eax

  v2 = *((_DWORD *)this + 72);
  v4 = DOUBLE_1_0;
  if ( v2 )
  {
    if ( v2 == 1 || *((_DWORD *)this + 78) )
      v4 = (double)*((int *)this + 73) / (double)*((int *)CDesktopManager::s_pDesktopManagerInstance + 365);
    result = GetSystemMetrics(a2);
  }
  else
  {
    v4 = *((double *)this + 35);
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
