/*
 * XREFs of VerifierIoCancelIrp @ 0x140741ED8
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
