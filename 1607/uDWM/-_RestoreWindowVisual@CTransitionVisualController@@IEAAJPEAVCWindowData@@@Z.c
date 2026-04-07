/*
 * XREFs of ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008F4CC
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_c72d64e34bc4c52fff075362be8a3231_@@_N@Z @ 0x18008E320 (--$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800945D0 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z @ 0x180070B8C (-StopTrackingWindowImmediately@CWindowPropertyTracker@@QEAAXPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_RestoreWindowVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((_QWORD *)a2 + 48) )
  {
    CWindowPropertyTracker::StopTrackingWindowImmediately(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
      *((HWND *)a2 + 5));
    v4 = CVisual::RenderRecursive(*((CVisual **)a2 + 48));
    v2 = v4;
    if ( v4 >= 0 )
      CTransitionVisualController::_MoveWindowOffscreen(*((struct CTopLevelWindow **)a2 + 48), 1);
    else
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v4, 0xC4Du);
  }
  return v2;
}
