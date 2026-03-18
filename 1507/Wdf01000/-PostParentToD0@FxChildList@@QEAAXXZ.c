/*
 * XREFs of ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C005BE30
 * Callers:
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C005BAE4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z @ 0x1C0018A40 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@@Z.c)
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
        FxPkgPnp::PowerProcessEvent((FxPkgPnp *)Flink[40].Blink, 0x100u);
    }
  }
  KeReleaseSpinLock(p_m_ListLock, v3);
}
