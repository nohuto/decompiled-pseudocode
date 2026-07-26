/*
 * XREFs of ndisSriovInterfaceReference @ 0x1C006A100
 * Callers:
 *     ndisPnPQuerySriovInterface @ 0x1C00DB334 (ndisPnPQuerySriovInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSriovInterfaceReference(__int64 a1)
{
  ndisReferenceMiniportNoCheck(a1, 0x44u);
}
