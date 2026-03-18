/*
 * XREFs of VerifierIoReuseIrp @ 0x1406C0844
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierIoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  pXdvIoReuseIrp(Irp, Iostatus);
}
