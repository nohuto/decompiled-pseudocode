/*
 * XREFs of ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x180076524
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18004CD14 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 */

void __fastcall CDesktopManager::AbandonActiveAnimations(CDesktopManager *this)
{
  struct _SINGLE_LIST_ENTRY *i; // rbx

  for ( i = CDesktopManager::s_listTimeline.Next; i; i = i->Next )
  {
    if ( !LOBYTE(i[7].Next) )
      CTimelineBase::JumpToFinalValue((CTimelineBase *)&i[-2]);
  }
}
