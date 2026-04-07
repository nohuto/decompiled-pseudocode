/*
 * XREFs of ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x18008EF94
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001E70 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002070 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180004884 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetBitmapRects(
        CTransitionVisualController *this,
        HWND a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  unsigned int v7; // ebx
  int TransitionBitmapIndex; // eax

  v7 = 0;
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(this, a2);
  if ( TransitionBitmapIndex >= 0 )
  {
    if ( a3 )
      *a3 = *(struct tagRECT *)(56LL * (unsigned int)TransitionBitmapIndex + *((_QWORD *)this + 19) + 12);
    if ( a4 )
      *a4 = *(struct tagRECT *)(56LL * (unsigned int)TransitionBitmapIndex + *((_QWORD *)this + 19) + 28);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v7;
}
