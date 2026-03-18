/*
 * XREFs of ACPIDeviceIrpCompleteRequest @ 0x1C0004CE0
 * Callers:
 *     ACPIBusIrpSetSystemPowerComplete @ 0x1C00360A0 (ACPIBusIrpSetSystemPowerComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDeviceIrpCompleteRequest(__int64 a1, IRP *a2, int a3)
{
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a2->IoStatus.Status = a3;
  IofCompleteRequest(a2, 0);
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
