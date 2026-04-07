/*
 * XREFs of ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x180088630
 * Callers:
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x18006F5F0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800476B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::StopTimer(CContactStationaryVisual *this)
{
  __int64 v1; // rdx
  bool v2; // al
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 43);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 43) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  else
  {
    v2 = CDesktopManager::s_fTimelineDirty;
  }
  v3 = *((_QWORD *)this + 42);
  if ( v3 )
  {
    if ( !--*(_DWORD *)(v3 + 8) )
      v2 = 1;
    *((_QWORD *)this + 42) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
