/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180029510
 * Callers:
 *     ??$emplace_back@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Z @ 0x180007044 (--$emplace_back@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180029B90 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180029BB0 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x180029C06 (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x180029C58 (_o_malloc_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = o_malloc_0(Size);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh_0(i) )
    {
      if ( i == -1LL )
        __scrt_throw_std_bad_array_new_length();
      __scrt_throw_std_bad_alloc();
    }
  }
  return result;
}
