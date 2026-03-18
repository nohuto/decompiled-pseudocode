/*
 * XREFs of PopDeviceIdleCompletion @ 0x1401E9544
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

void __fastcall PopDeviceIdleCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  KIRQL v4; // al
  bool v5; // zf
  KIRQL v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v5 = dword_140305B68-- == 1;
  v6 = v4;
  if ( v5 && PopDeviceIdleSync )
  {
    KeSetEvent(PopDeviceIdleSync, 0, 0);
    PopDeviceIdleSync = 0LL;
  }
  KeReleaseSpinLock(&PopDopeGlobalLock, v6);
}
