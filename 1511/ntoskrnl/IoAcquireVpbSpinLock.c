/*
 * XREFs of IoAcquireVpbSpinLock @ 0x1400D0DAC
 * Callers:
 *     IopMountInitializeVpb @ 0x1400D0A3C (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x1400D0AD4 (IopQueryVpbFlagsSafe.c)
 *     RawInitiateDeleteVolume @ 0x1400D0B18 (RawInitiateDeleteVolume.c)
 *     IopReferenceVerifyVpb @ 0x1401B7630 (IopReferenceVerifyVpb.c)
 *     IoGetDiskDeviceObject @ 0x1401BAD64 (IoGetDiskDeviceObject.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401BF298 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpMarkDeviceForRemove @ 0x1401BF838 (PnpMarkDeviceForRemove.c)
 *     RawCheckForDeleteVolume @ 0x1401F6170 (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x1401F6204 (RawVerifyVolume.c)
 *     VerifierIoAcquireVpbSpinLock @ 0x1406C06BC (VerifierIoAcquireVpbSpinLock.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
