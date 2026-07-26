/*
 * XREFs of ??0NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ @ 0x1C00E2780
 * Callers:
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00E28CC (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

NDIS_SETUP_DEVICE_EXTENSION *__fastcall NDIS_SETUP_DEVICE_EXTENSION::NDIS_SETUP_DEVICE_EXTENSION(
        struct NDIS_SETUP_DEVICE_EXTENSION *DeferredContext)
{
  KLockHolder v3; // [rsp+30h] [rbp-28h] BYREF

  DeferredContext->Next = 0LL;
  *(_DWORD *)&DeferredContext->IsDeviceInterfaceActive = 0;
  DeferredContext->LowPowerRequestSucceeded = 0;
  DeferredContext->Fdo = 0LL;
  DeferredContext->Pdo = 0LL;
  DeferredContext->NextDeviceObject = 0LL;
  *(_QWORD *)&DeferredContext->SymbolicName.Length = 0LL;
  DeferredContext->SymbolicName.Buffer = 0LL;
  DeferredContext->Header = (_NDIS_OBJECT_HEADER)14680343;
  KeInitializeTimer(&DeferredContext->IdleTimer);
  KeInitializeDpc(&DeferredContext->IdleDpc, (PKDEFERRED_ROUTINE)ndisSetupDeviceIdle, DeferredContext);
  IoInitializeRemoveLockEx(&DeferredContext->RemoveLock, 0x4453444Eu, 1u, 0, 0x20u);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v3, &ndisSetupDeviceListLock);
  DeferredContext->Next = ndisSetupDeviceList;
  ndisSetupDeviceList = DeferredContext;
  KLockHolder::~KLockHolder(&v3);
  return DeferredContext;
}
