/*
 * XREFs of IopPnPCompleteRequest @ 0x140131E2C
 * Callers:
 *     IopPnPDispatch @ 0x14055D5D4 (IopPnPDispatch.c)
 * Callees:
 *     <none>
 */

void __fastcall IopPnPCompleteRequest(IRP *a1, NTSTATUS a2, ULONG_PTR a3)
{
  a1->IoStatus.Status = a2;
  a1->IoStatus.Information = a3;
  pIofCompleteRequest(a1, 0);
}
