/*
 * XREFs of ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00C5440
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00C5498 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00A3370 (--0BindState@Ndis@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE *__fastcall NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  Ndis::BindState::BindState(&this->BindState);
  this->DriverLinkage.Blink = &this->DriverLinkage;
  this->DriverLinkage.Flink = &this->DriverLinkage;
  return this;
}
