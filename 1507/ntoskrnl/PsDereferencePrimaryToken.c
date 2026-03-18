/*
 * XREFs of PsDereferencePrimaryToken @ 0x1405434E4
 * Callers:
 *     VerifierIoDeleteController @ 0x140741F18 (VerifierIoDeleteController.c)
 *     VerifierPsDereferencePrimaryToken @ 0x14074243C (VerifierPsDereferencePrimaryToken.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
