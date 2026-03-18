/*
 * XREFs of PsDereferencePrimaryToken @ 0x1404B252C
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 *     VerifierIoDeleteController @ 0x1406C0724 (VerifierIoDeleteController.c)
 *     VerifierPsDereferencePrimaryToken @ 0x1406C0BFC (VerifierPsDereferencePrimaryToken.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
