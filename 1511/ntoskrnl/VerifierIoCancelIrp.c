/*
 * XREFs of VerifierIoCancelIrp @ 0x1406C06E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierIoCancelIrp(PIRP Irp)
{
  return pXdvIoCancelIrp(Irp);
}
