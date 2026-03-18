/*
 * XREFs of FopFreeMappingTable @ 0x1406DCA40
 * Callers:
 *     FopFreeFontData @ 0x1406DC9D4 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x140788498 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
