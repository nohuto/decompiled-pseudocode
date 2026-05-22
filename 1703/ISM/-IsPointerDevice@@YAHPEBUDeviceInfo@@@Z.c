/*
 * XREFs of ?IsPointerDevice@@YAHPEBUDeviceInfo@@@Z @ 0x18005E8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall IsPointerDevice(const struct DeviceInfo *a1)
{
  bool result; // al

  result = 0;
  if ( a1 )
    return (*((_BYTE *)a1 + 4) & 0x3B) != 0;
  return result;
}
