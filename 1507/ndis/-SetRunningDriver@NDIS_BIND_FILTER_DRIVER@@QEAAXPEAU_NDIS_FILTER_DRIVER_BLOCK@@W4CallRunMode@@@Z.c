/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00ADE24
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0052AF0 (NdisFDeregisterFilterDriver.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A0EDC (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6C0C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_FILTER_DRIVER::SetRunningDriver(
        NDIS_BIND_FILTER_DRIVER *this,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        enum CallRunMode a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rbx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 )
  {
    v5.m_State = Unlocked;
    v5.m_Lock = (KPushLockBase *)(qword_1C0085818 + 24);
    v5.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v5);
    this->RunningDriver = v3;
    KLockHolder::~KLockHolder(&v5);
    LOBYTE(a2) = 1;
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, (bool)a2, RunSynchronous);
  if ( !v3 )
  {
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, (struct KPushLockBase *)(qword_1C0085818 + 24));
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v5);
  }
}
