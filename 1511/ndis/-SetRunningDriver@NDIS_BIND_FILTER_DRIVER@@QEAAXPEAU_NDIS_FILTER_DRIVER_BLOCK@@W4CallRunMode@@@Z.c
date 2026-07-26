/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A7730
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0052FA0 (NdisFDeregisterFilterDriver.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A5B6C (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
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
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, (struct KPushLockBase *)(qword_1C00837F0 + 24));
    this->RunningDriver = v3;
    KLockHolder::~KLockHolder(&v5);
    LOBYTE(a2) = 1;
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, (bool)a2, RunSynchronous);
  if ( !v3 )
  {
    KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, (struct KPushLockBase *)(qword_1C00837F0 + 24));
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v5);
  }
}
