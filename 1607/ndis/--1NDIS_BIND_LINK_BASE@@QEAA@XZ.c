/*
 * XREFs of ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A3DE0
 * Callers:
 *     _lambda_91558b45fed37b56f47adbcac45390b4_::operator() @ 0x1C00A3010 (_lambda_91558b45fed37b56f47adbcac45390b4_--operator().c)
 *     ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A351C (--_G-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A4084 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00AAB1C (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00AF758 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00AF868 (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00E33B4 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3484 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  void **p; // rcx
  KLockThisExclusive v5; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v5, (struct KPushLockBase *)(qword_1C0089678 + 16));
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
