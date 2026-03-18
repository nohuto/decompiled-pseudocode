/*
 * XREFs of VerifierKeInsertDeviceQueue @ 0x1406C099C
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
