/*
 * XREFs of PnpSerializeBoot @ 0x140141EF4
 * Callers:
 *     NtSerializeBoot @ 0x14054A16C (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140763E54 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
