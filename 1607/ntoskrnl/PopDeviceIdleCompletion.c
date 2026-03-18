/*
 * XREFs of PopDeviceIdleCompletion @ 0x1402020F8
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
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
  v5 = dword_140328A48-- == 1;
  v6 = v4;
  if ( v5 && PopDeviceIdleSync )
  {
    KeSetEvent(PopDeviceIdleSync, 0, 0);
    PopDeviceIdleSync = 0LL;
  }
  KeReleaseSpinLock(&PopDopeGlobalLock, v6);
}
