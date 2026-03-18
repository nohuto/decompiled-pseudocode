/*
 * XREFs of FopFreeMappingTable @ 0x14075FA88
 * Callers:
 *     FopFreeFontData @ 0x14075FA1C (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x1407FE050 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
