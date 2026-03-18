/*
 * XREFs of VerifierExSetResourceOwnerPointerEx @ 0x1406C0428
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
