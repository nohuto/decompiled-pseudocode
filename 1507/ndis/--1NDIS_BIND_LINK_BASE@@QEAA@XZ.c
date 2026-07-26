/*
 * XREFs of ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4
 * Callers:
 *     _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C009D65C (_lambda_999d7960ce7bd727c937eec9f53d3cb3_--operator().c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0B40 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A0F78 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00A11D4 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A56AC (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A6E0C (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?moveElements@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@AEAAXKKK@Z @ 0x1C00A7030 (-moveElements@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A71D0 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@.c)
 *     _lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator() @ 0x1C00B2478 (_lambda_7db8344f8beb56adaa003951e6a1fc8c_--operator().c)
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00C550C (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 *     ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00C5550 (--_G-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3130 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6C0C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  void **p; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v5.m_State = Unlocked;
  v5.m_Region.m_Entered = 0;
  v5.m_Lock = (KPushLockBase *)(qword_1C0085818 + 16);
  KLockHolder::AcquireExclusive(&v5);
  Flink = this->DriverLinkage.Flink;
  Blink = this->DriverLinkage.Blink;
  if ( Flink->Blink != &this->DriverLinkage || Blink->Flink != &this->DriverLinkage )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KLockHolder::~KLockHolder(&v5);
  p = this->BindState.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->BindState.m_bindContext._p = 0LL;
    this->BindState.m_bindContext.m_numElements = 0;
    this->BindState.m_bindContext.m_bufferSize = 0;
  }
}
