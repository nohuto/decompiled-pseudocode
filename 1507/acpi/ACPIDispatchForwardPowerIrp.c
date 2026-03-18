/*
 * XREFs of ACPIDispatchForwardPowerIrp @ 0x1C0039600
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x1C0022F20 (ACPIFilterIrpSetPower.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0037CE0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIFilterIrpQueryPower @ 0x1C003B670 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C00407D0 (ACPIRootIrpQueryPower.c)
 *     ACPIRootIrpSetPower @ 0x1C00409F0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax

  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( !*(_QWORD *)(DeviceExtension + 720) || (*(_BYTE *)DeviceExtension & 0x20) != 0 )
  {
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 720), a2);
  }
  return 259LL;
}
