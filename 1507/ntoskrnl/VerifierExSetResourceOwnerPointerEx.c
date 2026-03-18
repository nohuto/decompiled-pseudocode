/*
 * XREFs of VerifierExSetResourceOwnerPointerEx @ 0x140741C1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  pXdvExSetResourceOwnerPointerEx(Resource, OwnerPointer, Flags);
}
