/*
 * XREFs of ?AskParentToRemoveAndReenumerate@FxPkgFdo@@EEAAJXZ @ 0x1C00A1090
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0038540 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

__int64 __fastcall FxPkgFdo::AskParentToRemoveAndReenumerate(FxPkgFdo *this)
{
  void (__fastcall *SurpriseRemoveAndReenumerateSelf)(void *); // rax

  SurpriseRemoveAndReenumerateSelf = this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf;
  if ( !SurpriseRemoveAndReenumerateSelf )
    return 3221225659LL;
  if ( KeGetCurrentIrql() )
    FxSystemWorkItem::EnqueueWorker(
      this->m_SurpriseRemoveAndReenumerateSelfWorkItem,
      FxPkgFdo::_WorkItemSurpriseRemoveAndReenumerateSelf,
      &this->m_SurpriseRemoveAndReenumerateSelfInterface,
      1u);
  else
    SurpriseRemoveAndReenumerateSelf(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
  return 0LL;
}
