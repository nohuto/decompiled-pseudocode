/*
 * XREFs of ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x18008B2D0
 * Callers:
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18008AF2C (--1CPenPressHoldVisual@@MEAA@XZ.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x18008B290 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CPenPressHoldVisual@@MEAAJXZ @ 0x18008B320 (-UpdateTransition@CPenPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800488A0 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::StopTimer(CPenPressHoldVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 36);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 36) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
