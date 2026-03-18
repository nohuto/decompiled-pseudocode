/*
 * XREFs of VerifierKeInsertDeviceQueue @ 0x140742194
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierKeInsertDeviceQueue(PKDEVICE_QUEUE DeviceQueue, PKDEVICE_QUEUE_ENTRY DeviceQueueEntry)
{
  return pXdvKeInsertDeviceQueue(DeviceQueue, DeviceQueueEntry);
}
