/*
 * XREFs of IoAcquireVpbSpinLock @ 0x1400076FC
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140007468 (RawInitiateDeleteVolume.c)
 *     IopQueryVpbFlagsSafe @ 0x140007848 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x140007960 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x1401C523C (IopReferenceVerifyVpb.c)
 *     IoGetDiskDeviceObject @ 0x1401C8A4C (IoGetDiskDeviceObject.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401CD67C (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpMarkDeviceForRemove @ 0x1401CDC0C (PnpMarkDeviceForRemove.c)
 *     RawCheckForDeleteVolume @ 0x1402102E8 (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x14021037C (RawVerifyVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
