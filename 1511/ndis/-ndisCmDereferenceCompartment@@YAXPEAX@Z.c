/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0060D94
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00D17B0 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisCmDereferenceCompartment(unsigned int *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
