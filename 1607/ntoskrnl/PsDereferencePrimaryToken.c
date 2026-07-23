/*
 * XREFs of PsDereferencePrimaryToken @ 0x1404C4BF8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     AlpcpCopyRequestData @ 0x1406552E4 (AlpcpCopyRequestData.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
