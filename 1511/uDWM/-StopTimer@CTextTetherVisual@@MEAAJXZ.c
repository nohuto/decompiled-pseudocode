/*
 * XREFs of ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x180089170
 * Callers:
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x180089110 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800476B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::StopTimer(CTextTetherVisual *this)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = *((_QWORD *)this + 35);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 35) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
