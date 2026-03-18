/*
 * XREFs of VerifierIoCreateController @ 0x140741EE8
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
