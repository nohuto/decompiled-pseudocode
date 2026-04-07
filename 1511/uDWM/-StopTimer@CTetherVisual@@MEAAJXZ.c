/*
 * XREFs of ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x18008AA60
 * Callers:
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x18008A9C0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800476B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::StopTimer(CTetherVisual *this)
{
  __int64 v1; // rdx
  bool v2; // al
  __int64 v3; // rdx

  v1 = *((_QWORD *)this + 47);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 47) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  else
  {
    v2 = CDesktopManager::s_fTimelineDirty;
  }
  v3 = *((_QWORD *)this + 48);
  if ( v3 )
  {
    if ( !--*(_DWORD *)(v3 + 8) )
      v2 = 1;
    *((_QWORD *)this + 48) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
