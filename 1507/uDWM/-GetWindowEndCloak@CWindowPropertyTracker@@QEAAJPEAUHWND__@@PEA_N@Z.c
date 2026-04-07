/*
 * XREFs of ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x180009F54
 * Callers:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800048B0 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800058A8 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180009CC0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x1800099D8 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndCloak(CWindowPropertyTracker *this, HWND a2, bool *a3)
{
  unsigned int v5; // ebx
  int Record; // eax
  __int64 v7; // rcx

  v5 = -2147467259;
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v7 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v7 + 40) & 1) != 0 )
    {
      v5 = 0;
      *a3 = *(_BYTE *)(v7 + 96);
    }
  }
  return v5;
}
