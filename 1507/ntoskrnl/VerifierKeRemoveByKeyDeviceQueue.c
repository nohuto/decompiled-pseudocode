/*
 * XREFs of VerifierKeRemoveByKeyDeviceQueue @ 0x1407422B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PKDEVICE_QUEUE_ENTRY __stdcall VerifierKeRemoveByKeyDeviceQueue(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  return pXdvKeRemoveByKeyDeviceQueue(DeviceQueue, SortKey);
}
