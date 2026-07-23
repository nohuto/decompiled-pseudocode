/*
 * XREFs of FopFreeMappingTable @ 0x140728B2C
 * Callers:
 *     FopFreeFontData @ 0x140728AC0 (FopFreeFontData.c)
 *     FopReadMappingTable @ 0x1407D46C8 (FopReadMappingTable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 */

void __fastcall FopFreeMappingTable(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    BgpFwFreeMemory(v2);
  BgpFwFreeMemory(a1);
}
