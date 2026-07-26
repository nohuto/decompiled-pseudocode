/*
 * XREFs of ndisSetDeviceInterfaceState @ 0x1C00A8768
 * Callers:
 *     ndisSetDevicePower @ 0x1C001227C (ndisSetDevicePower.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00DFD10 (ndisDevicePowerDown.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisSetDeviceInterfaceState(__int64 a1, BOOLEAN a2)
{
  NTSTATUS result; // eax

  if ( *(_QWORD *)(a1 + 368) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 360), a2);
  if ( *(_QWORD *)(a1 + 4216) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4208), a2);
  if ( *(_QWORD *)(a1 + 4896) )
    return IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 4888), a2);
  return result;
}
