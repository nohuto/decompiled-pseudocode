/*
 * XREFs of PnpSerializeBoot @ 0x14016FE6C
 * Callers:
 *     NtSerializeBoot @ 0x1405C1724 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x1407D0850 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
