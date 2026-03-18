/*
 * XREFs of IoAllocateWorkItem_0 @ 0x1C000FC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PIO_WORKITEM __stdcall IoAllocateWorkItem_0(PDEVICE_OBJECT DeviceObject)
{
  return IoAllocateWorkItem(DeviceObject);
}
