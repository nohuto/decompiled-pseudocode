/*
 * XREFs of ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FD10
 * Callers:
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FCF0 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x18008FEA0 (-UpdateTransition@CIndirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndirectTouchVisual::StopFrameTimeline(CIndirectTouchVisual *this)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = *((_QWORD *)this + 42);
  if ( v1 )
  {
    --*(_DWORD *)(v1 + 8);
    v2 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v2 = 1;
    *((_QWORD *)this + 42) = 0LL;
    CDesktopManager::s_fTimelineDirty = v2;
  }
}
