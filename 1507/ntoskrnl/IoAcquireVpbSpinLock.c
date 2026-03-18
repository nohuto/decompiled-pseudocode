/*
 * XREFs of IoAcquireVpbSpinLock @ 0x140006BC8
 * Callers:
 *     IopMountInitializeVpb @ 0x1400064D4 (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x140006788 (IopQueryVpbFlagsSafe.c)
 *     RawInitiateDeleteVolume @ 0x1400067CC (RawInitiateDeleteVolume.c)
 *     IopReferenceVerifyVpb @ 0x1401F2970 (IopReferenceVerifyVpb.c)
 *     IoGetDiskDeviceObject @ 0x1401F5F80 (IoGetDiskDeviceObject.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401FAAFC (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpMarkDeviceForRemove @ 0x1401FB380 (PnpMarkDeviceForRemove.c)
 *     RawCheckForDeleteVolume @ 0x140244E14 (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x140244EE8 (RawVerifyVolume.c)
 *     VerifierIoAcquireVpbSpinLock @ 0x140741EB0 (VerifierIoAcquireVpbSpinLock.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
