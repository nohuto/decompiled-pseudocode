/*
 * XREFs of NdisUnmapFile @ 0x1C00CEBC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 */

void __stdcall NdisUnmapFile(NDIS_HANDLE FileHandle)
{
  unsigned __int8 v2; // al

  v2 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_(0x1Au, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids);
    v2 = (unsigned __int8)ndisWppEnabledLevelPerFlag;
  }
  *((_BYTE *)FileHandle + 16) = 0;
  if ( v2 >= 4u )
    WPP_SF_(0x1Bu, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids);
}
