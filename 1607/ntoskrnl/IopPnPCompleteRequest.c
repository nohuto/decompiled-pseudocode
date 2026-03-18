/*
 * XREFs of IopPnPCompleteRequest @ 0x1400B0DF8
 * Callers:
 *     IopPnPDispatch @ 0x1404E7998 (IopPnPDispatch.c)
 * Callees:
 *     <none>
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  pIofCompleteRequest(a1, 0);
}
