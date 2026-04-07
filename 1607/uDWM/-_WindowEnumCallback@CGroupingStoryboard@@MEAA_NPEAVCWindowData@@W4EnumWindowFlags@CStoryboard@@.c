/*
 * XREFs of ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001E70
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001850 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800946F0 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094920 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180001CB0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x1800041B0 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x18008EF94 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 */

char __fastcall CGroupingStoryboard::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, _DWORD *a4)
{
  __int64 v8; // rdx
  RECT *v9; // r8
  HWND v10; // rdx
  struct tagRECT v11; // [rsp+20h] [rbp-38h] BYREF

  if ( (a3 & 4) != 0
    && ((*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, *(_DWORD *)(a2 + 584) & 0xFFF) & 8) != 0 )
  {
    v8 = *(unsigned int *)(a2 + 584);
    v9 = (RECT *)(a2 + 604);
    if ( (v8 & 0x1000000) == 0 )
      v9 = (RECT *)(a2 + 48);
    CGroupingStoryboard::_RecordUnionRect((__int64)a1, v8, v9);
    if ( CStoryboard::_HasUsableBitmapResource(a1, *(HWND *)(a2 + 40)) )
    {
      v10 = *(HWND *)(a2 + 40);
      *(_QWORD *)&v11.left = 0LL;
      *(_QWORD *)&v11.right = 0LL;
      if ( (int)CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
                  v10,
                  &v11,
                  0LL) >= 0 )
        CGroupingStoryboard::_RecordUnionRect((__int64)a1, *(unsigned int *)(a2 + 584), &v11);
    }
  }
  *a4 = 0;
  return 1;
}
