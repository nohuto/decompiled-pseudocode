/*
 * XREFs of ACPIDockIrpQueryPnpDeviceState @ 0x1C0078960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDockIrpQueryPnpDeviceState(__int64 a1, IRP *a2)
{
  a2->IoStatus.Information |= 2uLL;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
