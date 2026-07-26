/*
 * XREFs of ndisSriovInterfaceReference @ 0x1C0065B60
 * Callers:
 *     ndisPnPQuerySriovInterface @ 0x1C00D53F4 (ndisPnPQuerySriovInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSriovInterfaceReference(__int64 a1)
{
  ndisReferenceMiniportNoCheck(a1, 0x42u);
}
