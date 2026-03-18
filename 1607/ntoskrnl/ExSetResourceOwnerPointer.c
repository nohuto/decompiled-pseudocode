/*
 * XREFs of ExSetResourceOwnerPointer @ 0x14013293C
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x1405F8FA4 (CcSetBcbOwnerPointer.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  ExSetResourceOwnerPointerEx(Resource, OwnerPointer, 0);
}
