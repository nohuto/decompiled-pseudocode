/*
 * XREFs of ?LinkToDriver@NDIS_BIND_LINK_BASE@@QEAAXPEAUNDIS_BIND_DRIVER_BASE@@@Z @ 0x1C00A8E48
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0B40 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3130 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6C0C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_LINK_BASE::LinkToDriver(NDIS_BIND_LINK_BASE *this, struct NDIS_BIND_DRIVER_BASE *a2)
{
  _LIST_ENTRY *p_BindLinks; // rdi
  _LIST_ENTRY *p_DriverLinkage; // rbx
  _LIST_ENTRY *Flink; // rax
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v7.m_State = Unlocked;
  v7.m_Region.m_Entered = 0;
  v7.m_Lock = (KPushLockBase *)(qword_1C0085818 + 16);
  KLockHolder::AcquireExclusive(&v7);
  p_BindLinks = &a2->BindLinks;
  p_DriverLinkage = &this->DriverLinkage;
  Flink = p_BindLinks->Flink;
  p_DriverLinkage->Flink = p_BindLinks->Flink;
  p_DriverLinkage->Blink = p_BindLinks;
  if ( Flink->Blink != p_BindLinks )
    __fastfail(3u);
  Flink->Blink = p_DriverLinkage;
  p_BindLinks->Flink = p_DriverLinkage;
  KLockHolder::~KLockHolder(&v7);
}
