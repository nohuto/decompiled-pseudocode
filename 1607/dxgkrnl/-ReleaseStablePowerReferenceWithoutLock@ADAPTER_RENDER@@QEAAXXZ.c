/*
 * XREFs of ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001E130
 * Callers:
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00A2E70 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01454B0 (-DisableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0149344 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(ADAPTER_RENDER *this)
{
  char *v2; // rdi

  v2 = (char *)this + 1048;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  ADAPTER_RENDER::ReleaseStablePowerReference(this);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
