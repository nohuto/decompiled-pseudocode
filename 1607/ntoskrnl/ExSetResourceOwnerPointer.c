/*
 * XREFs of ExSetResourceOwnerPointer @ 0x140132EAC
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x1405F9058 (CcSetBcbOwnerPointer.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  ExSetResourceOwnerPointerEx(Resource, OwnerPointer, 0);
}
