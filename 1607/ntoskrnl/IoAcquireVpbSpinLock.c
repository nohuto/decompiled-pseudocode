/*
 * XREFs of IoAcquireVpbSpinLock @ 0x14000758C
 * Callers:
 *     RawInitiateDeleteVolume @ 0x1400072F8 (RawInitiateDeleteVolume.c)
 *     IopQueryVpbFlagsSafe @ 0x1400076D8 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x1400077F0 (IopMountInitializeVpb.c)
 *     IopReferenceVerifyVpb @ 0x1401C539C (IopReferenceVerifyVpb.c)
 *     IoGetDiskDeviceObject @ 0x1401C8BAC (IoGetDiskDeviceObject.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401CD830 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpMarkDeviceForRemove @ 0x1401CDDC0 (PnpMarkDeviceForRemove.c)
 *     RawCheckForDeleteVolume @ 0x1402104BC (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x140210550 (RawVerifyVolume.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 */

void __stdcall IoAcquireVpbSpinLock(PKIRQL Irql)
{
  *Irql = KeAcquireQueuedSpinLock(9uLL);
}
