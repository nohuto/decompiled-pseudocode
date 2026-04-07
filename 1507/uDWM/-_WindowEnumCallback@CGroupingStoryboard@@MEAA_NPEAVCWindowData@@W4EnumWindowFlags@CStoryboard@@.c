/*
 * XREFs of ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800966E0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180093FB0 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800953A0 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180095DE0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x18008CB34 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180093538 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800936D0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 */

char __fastcall CGroupingStoryboard::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, _DWORD *a4)
{
  unsigned int v7; // edx
  const RECT *v8; // r8
  HWND v9; // rdx
  struct tagRECT v11; // [rsp+20h] [rbp-48h] BYREF

  if ( (a3 & 4) != 0
    && ((*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_DWORD *)(a2 + 568) & 0xFFF) & 8) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 568);
    v8 = (const RECT *)(a2 + 588);
    if ( (v7 & 0x1000000) == 0 )
      v8 = (const RECT *)(a2 + 48);
    CGroupingStoryboard::_RecordUnionRect((__int64)a1, v7, v8);
    if ( CStoryboard::_HasUsableBitmapResource(a1, *(HWND *)(a2 + 40)) )
    {
      v9 = *(HWND *)(a2 + 40);
      *(_QWORD *)&v11.left = 0LL;
      *(_QWORD *)&v11.right = 0LL;
      if ( (int)CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                  v9,
                  &v11,
                  0LL) >= 0 )
        CGroupingStoryboard::_RecordUnionRect((__int64)a1, *(_DWORD *)(a2 + 568), &v11);
    }
  }
  *a4 = 0;
  return 1;
}
