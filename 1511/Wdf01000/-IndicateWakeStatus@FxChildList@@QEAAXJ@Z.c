/*
 * XREFs of ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C005FB18
 * Callers:
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C008C134 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C0086D90 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 */

void __fastcall FxChildList::IndicateWakeStatus(FxChildList *this, int WaitWakeStatus)
{
  unsigned __int64 *p_m_ListLock; // rsi
  _LIST_ENTRY *p_m_DescriptionListHead; // rdi
  KIRQL v5; // bp
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *Flink; // rcx

  p_m_ListLock = &this->m_ListLock;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  for ( i = p_m_DescriptionListHead->Flink; i != p_m_DescriptionListHead; i = i->Flink )
  {
    if ( !BYTE2(i[5].Flink) )
    {
      Flink = i[4].Flink;
      if ( Flink )
        FxPkgPnp::PowerIndicateWaitWakeStatus((FxPkgPnp *)Flink[40].Blink, WaitWakeStatus);
    }
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
}
