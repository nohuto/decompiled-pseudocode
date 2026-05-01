/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x1800267F0
 * Callers:
 *     ?_Reallocate@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800060E0 (-_Reallocate@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@W.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180026F14 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180026F3C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x180026FBA (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x180027050 (_o_malloc_0.c)
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
