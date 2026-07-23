/*
 * XREFs of PnpSerializeBoot @ 0x14014C114
 * Callers:
 *     NtSerializeBoot @ 0x14057FF74 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x1407936BC (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
