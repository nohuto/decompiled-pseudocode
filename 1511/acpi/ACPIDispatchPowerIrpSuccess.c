/*
 * XREFs of ACPIDispatchPowerIrpSuccess @ 0x1C003A2D0
 * Callers:
 *     ACPIDockIrpQueryPower @ 0x1C0034F00 (ACPIDockIrpQueryPower.c)
 *     ACPIDockIrpSetSystemPower @ 0x1C003513C (ACPIDockIrpSetSystemPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C00368F0 (ACPIBusIrpQueryPower.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0036C64 (ACPIBusIrpSetSystemPower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchPowerIrpSuccess(__int64 a1, IRP *a2)
{
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 259LL;
}
