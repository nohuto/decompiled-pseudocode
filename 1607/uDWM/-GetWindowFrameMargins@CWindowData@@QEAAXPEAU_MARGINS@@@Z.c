/*
 * XREFs of ?GetWindowFrameMargins@CWindowData@@QEAAXPEAU_MARGINS@@@Z @ 0x18006E204
 * Callers:
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18007E338 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 * Callees:
 *     ?GetSystemMetrics@CWindowData@@QEAAHH@Z @ 0x18001B4CC (-GetSystemMetrics@CWindowData@@QEAAHH@Z.c)
 *     ?RoundToNearestInt@@YAHN@Z @ 0x18007ECA8 (-RoundToNearestInt@@YAHN@Z.c)
 */

void __fastcall CWindowData::GetWindowFrameMargins(CWindowData *this, struct _MARGINS *a2)
{
  int v3; // edx
  CDesktopManager *v4; // rbx
  int v5; // edi
  int v6; // eax

  if ( (*((_BYTE *)this + 102) & 0xC0) == 0xC0 )
  {
    v3 = 51;
    if ( *((char *)this + 104) >= 0 )
      v3 = 4;
    a2->cyTopHeight = CWindowData::GetSystemMetrics(this, v3);
  }
  v4 = CDesktopManager::s_pDesktopManagerInstance;
  v5 = RoundToNearestInt(*((double *)CDesktopManager::s_pDesktopManagerInstance + 163));
  v6 = RoundToNearestInt(*((double *)v4 + 164));
  a2->cyTopHeight += v5;
  a2->cxLeftWidth = v6;
  a2->cxRightWidth = v6;
  a2->cyBottomHeight = v5;
}
