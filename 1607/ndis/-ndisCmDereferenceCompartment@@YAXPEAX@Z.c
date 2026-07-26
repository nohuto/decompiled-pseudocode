/*
 * XREFs of ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00650D4
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00D77D4 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisCmDereferenceCompartment(unsigned int *a1)
{
  ndisIfDereferenceCompartmentForUser(a1);
}
