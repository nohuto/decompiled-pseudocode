/*
 * XREFs of ExSetResourceOwnerPointer @ 0x1400D391C
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x14064FC78 (CcSetBcbOwnerPointer.c)
 *     VerifierExSetResourceOwnerPointer @ 0x140741C14 (VerifierExSetResourceOwnerPointer.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  ExSetResourceOwnerPointerEx(Resource, OwnerPointer, 0);
}
