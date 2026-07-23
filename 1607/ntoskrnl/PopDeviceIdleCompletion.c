/*
 * XREFs of PopDeviceIdleCompletion @ 0x140201F24
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
  v5 = dword_140328A88-- == 1;
  v6 = v4;
  if ( v5 && PopDeviceIdleSync )
  {
    KeSetEvent(PopDeviceIdleSync, 0, 0);
    PopDeviceIdleSync = 0LL;
  }
  KeReleaseSpinLock(&PopDopeGlobalLock, v6);
}
