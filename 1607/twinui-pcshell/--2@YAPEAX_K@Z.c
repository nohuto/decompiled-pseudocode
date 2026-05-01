/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18002EE60
 * Callers:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180008EFC (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEAG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEAG@Z @ 0x180019CE0 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEAG@std@@YA-AV-.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x18001AD94 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002FDD4 (--_U@YAPEAX_K@Z.c)
 * Callees:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x18002F1E4 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x18002F20C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x18002F286 (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x18002F320 (_o_malloc_0.c)
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
