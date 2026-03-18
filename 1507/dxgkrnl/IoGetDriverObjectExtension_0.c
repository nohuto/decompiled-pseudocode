/*
 * XREFs of IoGetDriverObjectExtension_0 @ 0x1C000FF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall IoGetDriverObjectExtension_0(PDRIVER_OBJECT DriverObject, PVOID ClientIdentificationAddress)
{
  return IoGetDriverObjectExtension(DriverObject, ClientIdentificationAddress);
}
