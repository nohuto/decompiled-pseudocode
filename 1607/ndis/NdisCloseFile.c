/*
 * XREFs of NdisCloseFile @ 0x1C00CD3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 */

void __stdcall NdisCloseFile(NDIS_HANDLE FileHandle)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x16u, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
  ExFreePoolWithTag(*(PVOID *)FileHandle, 0);
  ExFreePoolWithTag(FileHandle, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x17u, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
}
