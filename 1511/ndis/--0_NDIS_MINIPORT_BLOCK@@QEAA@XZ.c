/*
 * XREFs of ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C001F350
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00A94B4 (ndisMInitializeMiniportBlock.c)
 * Callees:
 *     ??0BindEngine@Ndis@@QEAA@XZ @ 0x1C00A34AC (--0BindEngine@Ndis@@QEAA@XZ.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A5EE8 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00AE538 (--0KPushLock@@QEAA@XZ.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  _NDIS_MINIPORT_BLOCK *result; // rax

  this->ExportName._p = 0LL;
  this->FilterClass._p = 0LL;
  Ndis::BindStack::BindStack(&this->Bindings);
  Ndis::BindEngine::BindEngine(&this->BindEngine);
  this->MiniportOwner.m_owner = MiniportNotOwned;
  KPushLock::KPushLock(&this->MiniportOwner.m_lock);
  KeInitializeEvent(&this->MiniportOwner.m_isUnowned.m_event, NotificationEvent, 0);
  KeSetEvent(&this->MiniportOwner.m_isUnowned.m_event, 0, 0);
  this->PendingMtuSize = 0;
  result = this;
  this->PoFxDStateReportingEnabled = 0;
  *(_WORD *)&this->InterfaceUpdateInProgress = 0;
  this->MtuUpdateQueued = 0;
  return result;
}
