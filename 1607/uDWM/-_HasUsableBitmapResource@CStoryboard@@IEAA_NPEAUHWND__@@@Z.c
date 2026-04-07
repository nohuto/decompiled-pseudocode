/*
 * XREFs of ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x1800041B0
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001E70 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x18000F234 (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 * Callees:
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180004884 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CStoryboard::_HasUsableBitmapResource(CStoryboard *this, HWND a2)
{
  CTransitionVisualController *v3; // rdi
  int TransitionBitmapIndex; // eax
  __int64 v5; // rsi
  char v6; // dl
  __int64 v8; // rax
  __int64 v9; // r8

  v3 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(v3, a2);
  v5 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 16LL))(this);
  v9 = 0LL;
  if ( !*(_DWORD *)(v8 + 4) )
    return 0;
  v6 = 1;
  while ( (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 4 * v9) & 0xFFF) != (*(_DWORD *)(56 * v5 + *((_QWORD *)v3 + 19) + 8) & 0xFFF) )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 4) )
      return 0;
  }
  return v6;
}
