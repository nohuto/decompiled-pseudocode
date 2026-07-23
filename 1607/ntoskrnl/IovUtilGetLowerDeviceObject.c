/*
 * XREFs of IovUtilGetLowerDeviceObject @ 0x14070E044
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14070ADD0 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x14070D840 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140718A78 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IovUtilGetLowerDeviceObject(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  KIRQL v4; // di
  __int64 v5; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(_QWORD *)(a1 + 312);
  v4 = v2;
  v5 = *(_QWORD *)(v3 + 48);
  if ( v5 )
    ObfReferenceObject(*(PVOID *)(v3 + 48));
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v5;
}
