/*
 * XREFs of VerifierKeInsertByKeyDeviceQueue @ 0x14074218C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeInsertByKeyDeviceQueue(
        PKDEVICE_QUEUE DeviceQueue,
        PKDEVICE_QUEUE_ENTRY DeviceQueueEntry,
        ULONG SortKey)
{
  return pXdvKeInsertByKeyDeviceQueue(DeviceQueue, DeviceQueueEntry, SortKey);
}
