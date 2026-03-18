/*
 * XREFs of ExSetResourceOwnerPointer @ 0x1400CF4E0
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x1405DB630 (CcSetBcbOwnerPointer.c)
 *     VerifierExSetResourceOwnerPointer @ 0x1406C0420 (VerifierExSetResourceOwnerPointer.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  ExSetResourceOwnerPointerEx(Resource, OwnerPointer, 0);
}
