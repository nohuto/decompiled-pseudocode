/*
 * XREFs of ?StopDelayTimer@CTetherVisual@@IEAAXXZ @ 0x180086CE8
 * Callers:
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x180087230 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x1800477B4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

void __fastcall CTetherVisual::StopDelayTimer(CTetherVisual *this)
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
  if ( !*((_QWORD *)this + 47) )
    CTouchVisual::UnRegisterGlobalTimer(this);
}
