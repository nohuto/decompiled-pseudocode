/*
 * XREFs of ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C00A154C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00141F0 (NdisFRegisterFilterDriver.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0057A90 (NdisFDeregisterFilterDriver.c)
 * Callees:
 *     ?SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z @ 0x1C00A42BC (-SetRunningDriverIsReady@NDIS_BIND_DRIVER_BASE@@IEAAX_NW4CallRunMode@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_BIND_FILTER_DRIVER::SetRunningDriver(
        NDIS_BIND_FILTER_DRIVER *this,
        struct _NDIS_FILTER_DRIVER_BLOCK *a2,
        enum CallRunMode a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rbx
  KLockThisExclusive v5; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 )
  {
    KLockThisExclusive::KLockThisExclusive(&v5, (struct KPushLockBase *)(qword_1C0089678 + 24));
    this->RunningDriver = v3;
    KLockHolder::~KLockHolder(&v5);
    LOBYTE(a2) = 1;
  }
  NDIS_BIND_DRIVER_BASE::SetRunningDriverIsReady(&this->NDIS_BIND_DRIVER_BASE, (bool)a2, RunSynchronous);
  if ( !v3 )
  {
    KLockThisExclusive::KLockThisExclusive(&v5, (struct KPushLockBase *)(qword_1C0089678 + 24));
    this->RunningDriver = 0LL;
    KLockHolder::~KLockHolder(&v5);
  }
}
