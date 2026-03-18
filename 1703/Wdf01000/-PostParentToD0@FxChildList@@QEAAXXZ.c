/*
 * XREFs of ?PostParentToD0@FxChildList@@QEAAXXZ @ 0x1C0065D10
 * Callers:
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C00656C4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C00236B0 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

void __fastcall FxChildList::PostParentToD0(FxChildList *this)
{
  unsigned __int64 *p_m_ListLock; // rsi
  _LIST_ENTRY *p_m_DescriptionListHead; // rdi
  KIRQL v3; // al
  _LIST_ENTRY *Flink; // rbx
  KIRQL v5; // bp
  _LIST_ENTRY *v6; // rcx

  p_m_ListLock = &this->m_ListLock;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  Flink = p_m_DescriptionListHead->Flink;
  v5 = v3;
  while ( Flink != p_m_DescriptionListHead )
  {
    if ( !BYTE2(Flink[5].Flink) )
    {
      v6 = Flink[4].Flink;
      if ( v6 )
        FxPkgPnp::PowerProcessEvent((FxPkgPnp *)v6[40].Blink, 0x100u, 0);
    }
    Flink = Flink->Flink;
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
}
