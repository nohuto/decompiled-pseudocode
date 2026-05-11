/*
 * XREFs of McGenEventUnregister @ 0x1C0001728
 * Callers:
 *     DeviceRemove @ 0x1C0001CE0 (DeviceRemove.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !ExBusAudHandle )
    return 0;
  result = EtwUnregister(ExBusAudHandle);
  ExBusAudHandle = 0LL;
  return result;
}
