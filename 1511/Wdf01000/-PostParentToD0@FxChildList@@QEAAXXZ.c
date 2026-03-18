/*
 * XREFs of ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0055504
 * Callers:
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C0055004 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0013E20 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

void __fastcall FxChildList::PostParentToD0(FxChildList *this)
{
  unsigned __int64 *p_m_ListLock; // rsi
  _LIST_ENTRY *p_m_DescriptionListHead; // rdi
  KIRQL v3; // bp
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *Flink; // rcx

  p_m_ListLock = &this->m_ListLock;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  for ( i = p_m_DescriptionListHead->Flink; i != p_m_DescriptionListHead; i = i->Flink )
  {
    if ( !BYTE2(i[5].Flink) )
    {
      Flink = i[4].Flink;
      if ( Flink )
        FxPkgPnp::PowerProcessEvent((FxPkgPnp *)Flink[40].Blink, 0x100u, 0);
    }
  }
  KeReleaseSpinLock(p_m_ListLock, v3);
}
