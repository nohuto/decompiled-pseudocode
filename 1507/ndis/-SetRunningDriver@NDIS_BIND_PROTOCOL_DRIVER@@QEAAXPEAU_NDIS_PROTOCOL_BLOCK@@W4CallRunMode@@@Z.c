/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C00AE300
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C001CF98 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisDeregisterProtocol @ 0x1C00F3570 (NdisDeregisterProtocol.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A0EDC (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6C0C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(
        NDIS_BIND_PROTOCOL_DRIVER *this,
        struct _NDIS_PROTOCOL_BLOCK *a2,
        enum CallRunMode a3)
{
  bool v6; // si
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v7.m_State = Unlocked;
    v7.m_Lock = (KPushLockBase *)(qword_1C0085818 + 24);
    v7.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v7);
    v6 = 1;
    this->RunningDriver = a2;
    this->NeedsBindCompleteEvent = 1;
    KLockHolder::~KLockHolder(&v7);
  }
  else
  {
    v6 = 0;
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, v6, a3);
  if ( !a2 )
  {
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v7, (struct KPushLockBase *)(qword_1C0085818 + 24));
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v7);
  }
}
