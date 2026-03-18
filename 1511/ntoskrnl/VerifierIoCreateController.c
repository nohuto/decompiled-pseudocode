/*
 * XREFs of VerifierIoCreateController @ 0x1406C06F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PCONTROLLER_OBJECT __stdcall VerifierIoCreateController(ULONG Size)
{
  return pXdvIoCreateController(Size);
}
