/*
 * XREFs of ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x180001FD4
 * Callers:
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800019CC (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x180091A74 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x18000F61C (--0CStoryboard@@IEAA@_N@Z.c)
 */

CGroupingStoryboard *__fastcall CGroupingStoryboard::CGroupingStoryboard(CGroupingStoryboard *this, bool a2)
{
  __int64 v2; // rcx

  CStoryboard::CStoryboard(this, a2);
  *(_QWORD *)(v2 + 16) = &CSlide::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v2 = &CGroupingStoryboard::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_DWORD *)(v2 + 144) = 0;
  return (CGroupingStoryboard *)v2;
}
