/*
 * XREFs of NdisMapFile @ 0x1C00F3210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 */

void __stdcall NdisMapFile(PNDIS_STATUS Status, PVOID *MappedBuffer, NDIS_HANDLE FileHandle)
{
  unsigned __int8 v6; // cl
  void *v7; // rax

  v6 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_(0x18u, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids);
    v6 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  if ( *((_BYTE *)FileHandle + 16) == 1 )
  {
    *Status = -1073676259;
  }
  else
  {
    v7 = *(void **)FileHandle;
    *((_BYTE *)FileHandle + 16) = 1;
    *MappedBuffer = v7;
    *Status = 0;
  }
  if ( v6 >= 4u )
    WPP_SF_d(0x19u, &WPP_2149d9bc815e3bedf819412f93ade2f1_Traceguids, *Status);
}
