/*
 * XREFs of ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C00102C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmDeleteStateObject(_QWORD *a1)
{
  if ( a1[1] )
    ndisIfDereferenceCompartmentForUser();
}
