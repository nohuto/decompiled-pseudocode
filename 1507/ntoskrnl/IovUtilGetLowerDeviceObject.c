/*
 * XREFs of IovUtilGetLowerDeviceObject @ 0x140743824
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14073FD1C (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140742FD4 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14074CE18 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
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
