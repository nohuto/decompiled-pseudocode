/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C0037CE0
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C0037D2C (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     ACPIDispatchForwardPowerIrp @ 0x1C0039600 (ACPIDispatchForwardPowerIrp.c)
 */

LONG __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 500) = 0;
  if ( a3 >= 0 )
  {
    ACPIDispatchForwardPowerIrp(CurrentStackLocation->DeviceObject, a2);
  }
  else
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
