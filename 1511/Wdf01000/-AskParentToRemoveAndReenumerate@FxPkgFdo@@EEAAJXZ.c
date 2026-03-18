/*
 * XREFs of ?AskParentToRemoveAndReenumerate@FxPkgFdo@@EEAAJXZ @ 0x1C008DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgFdo::AskParentToRemoveAndReenumerate(FxPkgFdo *this)
{
  void (__fastcall *SurpriseRemoveAndReenumerateSelf)(void *); // rax

  SurpriseRemoveAndReenumerateSelf = this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf;
  if ( !SurpriseRemoveAndReenumerateSelf )
    return 3221225659LL;
  SurpriseRemoveAndReenumerateSelf(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
  return 0LL;
}
