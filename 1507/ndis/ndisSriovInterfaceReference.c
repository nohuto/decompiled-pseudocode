/*
 * XREFs of ndisSriovInterfaceReference @ 0x1C0066990
 * Callers:
 *     ndisPnPQuerySriovInterface @ 0x1C00DBAA4 (ndisPnPQuerySriovInterface.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisSriovInterfaceReference(__int64 a1)
{
  ndisReferenceMiniportNoCheck(a1, 0x42u);
}
