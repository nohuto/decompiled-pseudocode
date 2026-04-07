/*
 * XREFs of ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x180088B10
 * Callers:
 *     ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800884F0 (--_GCPressTapVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x180088AD0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800477B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPressTapVisual::StopTimer(CPressTapVisual *this)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = *((_QWORD *)this + 48);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 48) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
