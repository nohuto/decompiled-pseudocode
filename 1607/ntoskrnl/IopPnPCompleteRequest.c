/*
 * XREFs of IopPnPCompleteRequest @ 0x1400AEE68
 * Callers:
 *     IopPnPDispatch @ 0x1404C9D24 (IopPnPDispatch.c)
 * Callees:
 *     <none>
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  pIofCompleteRequest(a1, 0);
}
