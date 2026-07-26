/*
 * XREFs of ??0BindStack@Ndis@@QEAA@XZ @ 0x1C00A13AC
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C001FEC4 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A1068 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00A3370 (--0BindState@Ndis@@QEAA@XZ.c)
 */

Ndis::BindStack *__fastcall Ndis::BindStack::BindStack(Ndis::BindStack *this)
{
  Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK> > > *p_Filters; // rcx

  this->Protocols.m_bufferSize = 0;
  this->Protocols.m_numElements = 0;
  this->Protocols._p = 0LL;
  p_Filters = &this->Filters;
  p_Filters->m_bufferSize = 0;
  p_Filters->m_numElements = 0;
  p_Filters->_p = 0LL;
  Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::grow((__int64)p_Filters, 0LL);
  Ndis::BindState::BindState(&this->Miniport);
  this->ChangeEpoch = 0;
  return this;
}
