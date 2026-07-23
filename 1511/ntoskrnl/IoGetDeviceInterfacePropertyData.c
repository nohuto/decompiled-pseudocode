/*
 * XREFs of IoGetDeviceInterfacePropertyData @ 0x1405FFE2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IoGetDeviceInterfacePropertyData(__int64 a1, __int64 a2, __int64 a3)
{
  return PnpGetDeviceInterfacePropertyData(a1, a2, a3);
}
