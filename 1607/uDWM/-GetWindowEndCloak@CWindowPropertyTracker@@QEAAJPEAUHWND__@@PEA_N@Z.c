/*
 * XREFs of ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x18000B16C
 * Callers:
 *     ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180003B40 (-_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180008910 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18000AED8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x18000ABC0 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::GetWindowEndCloak(CWindowPropertyTracker *this, HWND a2, bool *a3)
{
  unsigned int v5; // ebx
  int Record; // eax
  __int64 v8; // rcx

  v5 = -2147467259;
  Record = CWindowPropertyTracker::_FindRecord(this, a2);
  if ( Record >= 0 )
  {
    _mm_lfence();
    v8 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    if ( (*(_BYTE *)(v8 + 40) & 1) != 0 )
    {
      v5 = 0;
      *a3 = *(_BYTE *)(v8 + 100);
    }
  }
  return v5;
}
