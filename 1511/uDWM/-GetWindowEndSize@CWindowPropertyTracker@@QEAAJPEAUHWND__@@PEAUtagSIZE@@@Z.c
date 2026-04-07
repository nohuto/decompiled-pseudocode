/*
 * XREFs of ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180003BC4
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800014A0 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180004000 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x180004580 (-_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CResize@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800986A0 (-_WindowEnumCallback@CResize@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180003544 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndSize(CWindowPropertyTracker *this, HWND a2, struct tagSIZE *a3)
{
  unsigned int v5; // ebx
  int Record; // eax
  __int64 v7; // rax

  v5 = -2147467259;
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v7 + 40) & 2) != 0 )
    {
      v5 = 0;
      *a3 = *(struct tagSIZE *)(v7 + 112);
    }
  }
  return v5;
}
