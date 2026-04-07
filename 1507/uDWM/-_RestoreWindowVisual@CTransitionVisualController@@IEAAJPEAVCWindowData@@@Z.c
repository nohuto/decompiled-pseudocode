/*
 * XREFs of ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008D49C
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_18fa56596606414006e605755cbb08b4_@@_N@Z @ 0x18008BA8C (--$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093E90 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180067D28 (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_RestoreWindowVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((_QWORD *)a2 + 46) )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
      *((HWND *)a2 + 5));
    v4 = CVisual::RenderRecursive(*((CVisual **)a2 + 46));
    v2 = v4;
    if ( v4 >= 0 )
      CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 46), 1);
    else
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v4, 0xBC4u);
  }
  return v2;
}
