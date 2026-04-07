/*
 * XREFs of ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x18008C030
 * Callers:
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18008BC7C (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x18008BFF0 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CPenPressHoldVisual@@MEAAJXZ @ 0x18008C080 (-UpdateTransition@CPenPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800476B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::StopTimer(CPenPressHoldVisual *this)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 36) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
