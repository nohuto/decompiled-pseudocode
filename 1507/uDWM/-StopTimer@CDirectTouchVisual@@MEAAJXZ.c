/*
 * XREFs of ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180046F00
 * Callers:
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180046F50 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x1800470C0 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180082130 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180046EC8 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800477B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CDirectTouchVisual::StopTimer(CDirectTouchVisual *this)
{
  __int64 v2; // rcx
  bool v3; // al
  __int64 v4; // rcx

  CDirectTouchVisual::StopDownTimeline(this);
  v2 = *((_QWORD *)this + 46);
  if ( v2 )
  {
    --*(_DWORD *)(v2 + 8);
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v2 + 8) )
      v3 = 1;
    *((_QWORD *)this + 46) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  else
  {
    v3 = CDesktopManager::s_fTimelineDirty;
  }
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
  {
    if ( !--*(_DWORD *)(v4 + 8) )
      v3 = 1;
    *((_QWORD *)this + 47) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
