/*
 * XREFs of VerifierKeRemoveEntryDeviceQueue @ 0x1407422C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeRemoveEntryDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  return pXdvKeRemoveEntryDeviceQueue(DeviceQueue, DeviceQueueEntry);
}
