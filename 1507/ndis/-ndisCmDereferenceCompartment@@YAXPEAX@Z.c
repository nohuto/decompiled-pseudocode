/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0061588
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00D8140 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisCmDereferenceCompartment(unsigned int *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
