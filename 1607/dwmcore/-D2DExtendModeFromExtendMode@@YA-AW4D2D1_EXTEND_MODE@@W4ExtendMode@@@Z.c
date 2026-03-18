/*
 * XREFs of ?D2DExtendModeFromExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4ExtendMode@@@Z @ 0x180136E34
 * Callers:
 *     ?UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133F9C (-UpdateWARPDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DExtendModeFromExtendMode(char a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
      return 1LL;
    if ( a1 == 2 )
      return 2LL;
  }
  return 0LL;
}
