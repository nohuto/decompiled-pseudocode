/*
 * XREFs of ?StopTimer@CFlickVisual@@MEAAJXZ @ 0x18008AE80
 * Callers:
 *     ??1CFlickVisual@@MEAA@XZ @ 0x18008A818 (--1CFlickVisual@@MEAA@XZ.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x18008AE10 (-Stop@CFlickVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800488A0 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CFlickVisual::StopTimer(CFlickVisual *this)
{
  __int64 v1; // rax
  bool v2; // zf
  char v3; // al

  v1 = *((_QWORD *)this + 42);
  if ( v1 )
  {
    v2 = (*(_DWORD *)(v1 + 8))-- == 1;
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      v3 = 1;
    *((_QWORD *)this + 42) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
