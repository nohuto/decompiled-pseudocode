/*
 * XREFs of VerifierKeRemoveDeviceQueue @ 0x1407422B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PKDEVICE_QUEUE_ENTRY __stdcall VerifierKeRemoveDeviceQueue(PKDEVICE_QUEUE DeviceQueue)
{
  return pXdvKeRemoveDeviceQueue(DeviceQueue);
}
