/*
 * XREFs of DereferenceKernelStack @ 0x1C012CBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceKernelStack(void *a1)
{
  PsDereferenceKernelStack();
  return ObfDereferenceObject(a1);
}
