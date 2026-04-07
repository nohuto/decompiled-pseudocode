/*
 * XREFs of ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x180092DBC
 * Callers:
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x180092D60 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x180092EA0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectTouchVisual::StopOpacityTimeline(CIndirectTouchVisual *this)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = *((_QWORD *)this + 44);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 44) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
}
