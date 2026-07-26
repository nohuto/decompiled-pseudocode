/*
 * XREFs of ?ndisCmDeleteNetworkNamespace@@YAXPEAX@Z @ 0x1C0011070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisCmDeleteNetworkNamespace(_QWORD *a1)
{
  if ( a1[1] )
    ndisIfDereferenceCompartmentForUser();
}
