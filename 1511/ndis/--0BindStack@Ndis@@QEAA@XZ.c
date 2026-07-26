/*
 * XREFs of ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A5EE8
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C001F350 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00A4F30 (--0BindState@Ndis@@QEAA@XZ.c)
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A5164 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A6378 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rt.c)
 */

Ndis::BindStack *__fastcall Ndis::BindStack::BindStack(Ndis::BindStack *this)
{
  Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK> > > *p_Protocols; // rcx

  this->Protocols.m_bufferSize = 0;
  this->Protocols.m_numElements = 0;
  p_Protocols = &this->Protocols;
  p_Protocols->_p = 0LL;
  Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::grow(p_Protocols, 0LL);
  this->Filters.m_bufferSize = 0;
  this->Filters.m_numElements = 0;
  this->Filters._p = 0LL;
  Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::grow((__int64)&this->Filters, 0LL);
  Ndis::BindState::BindState(&this->Miniport);
  this->ChangeEpoch = 0;
  return this;
}
