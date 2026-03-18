/*
 * XREFs of PsDereferencePrimaryToken @ 0x1404E15F4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     AlpcpCopyRequestData @ 0x140655200 (AlpcpCopyRequestData.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
