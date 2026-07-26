/*
 * XREFs of ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C001FEC4
 * Callers:
 *     ndisMInitializeMiniportBlock @ 0x1C00A8CBC (ndisMInitializeMiniportBlock.c)
 * Callees:
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A13AC (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ??0BindEngine@Ndis@@QEAA@XZ @ 0x1C00A3194 (--0BindEngine@Ndis@@QEAA@XZ.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C00B3F34 (--0KPushLock@@QEAA@XZ.c)
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
  *(_WORD *)&this->InterfaceUpdateInProgress = 0;
  this->MtuUpdateQueued = 0;
  return result;
}
