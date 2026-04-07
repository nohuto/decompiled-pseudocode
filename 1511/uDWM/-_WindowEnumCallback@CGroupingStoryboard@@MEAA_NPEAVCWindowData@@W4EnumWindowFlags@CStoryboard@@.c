/*
 * XREFs of ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800023B0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001C60 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D90 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800977D0 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180002238 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x180006BC0 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x180090438 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 */

char __fastcall CGroupingStoryboard::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, _DWORD *a4)
{
  unsigned int v7; // edx
  RECT *v8; // r8
  HWND v10; // rdx
  struct tagRECT v11; // [rsp+20h] [rbp-48h] BYREF

  if ( (a3 & 4) != 0
    && ((*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_DWORD *)(a2 + 576) & 0xFFF) & 8) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 576);
    v8 = (RECT *)(a2 + 596);
    if ( (v7 & 0x1000000) == 0 )
      v8 = (RECT *)(a2 + 48);
    CGroupingStoryboard::_RecordUnionRect((__int64)a1, v7, v8);
    if ( CStoryboard::_HasUsableBitmapResource(a1, *(HWND *)(a2 + 40)) )
    {
      v10 = *(HWND *)(a2 + 40);
      *(_QWORD *)&v11.left = 0LL;
      *(_QWORD *)&v11.right = 0LL;
      if ( (int)CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                  v10,
                  &v11,
                  0LL) >= 0 )
        CGroupingStoryboard::_RecordUnionRect((__int64)a1, *(_DWORD *)(a2 + 576), &v11);
    }
  }
  *a4 = 0;
  return 1;
}
