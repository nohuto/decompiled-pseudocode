/*
 * XREFs of ?ReleasePowerTransitionLockShared@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00057EC
 * Callers:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C001C168 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleasePowerTransitionLockShared(ADAPTER_RENDER *this)
{
  ExReleasePushLockSharedEx(*((_QWORD *)this + 2) + 80LL, 0LL);
  KeLeaveCriticalRegion();
}
