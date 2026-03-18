/*
 * XREFs of IovUtilGetLowerDeviceObject @ 0x1406C1F84
 * Callers:
 *     IovpCallDriver1 @ 0x1406BE838 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1406BED48 (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x1406C17A8 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1406CA068 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
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
