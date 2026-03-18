/*
 * XREFs of KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003F780
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1403B00EC (PnprMirrorMarkedPages.c)
 *     ExShareAddressSpaceWithDevice @ 0x140673C50 (ExShareAddressSpaceWithDevice.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1406C631C (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall KeReleaseInStackQueuedSpinLockFromDpcLevel(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KxReleaseQueuedSpinLock(LockHandle);
}
