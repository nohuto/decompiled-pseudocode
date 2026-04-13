/*
 * XREFs of sub_180021148 @ 0x180021148
 * Callers:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004CF0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     sub_18000AC84 @ 0x18000AC84 (sub_18000AC84.c)
 *     sub_1800139BC @ 0x1800139BC (sub_1800139BC.c)
 *     sub_180013DF0 @ 0x180013DF0 (sub_180013DF0.c)
 *     sub_180015FC8 @ 0x180015FC8 (sub_180015FC8.c)
 *     unknown_libname_7 @ 0x180017D50 (unknown_libname_7.c)
 *     sub_180018D7C @ 0x180018D7C (sub_180018D7C.c)
 *     sub_180018E44 @ 0x180018E44 (sub_180018E44.c)
 *     sub_180021500 @ 0x180021500 (sub_180021500.c)
 *     sub_180021764 @ 0x180021764 (sub_180021764.c)
 *     sub_180021A64 @ 0x180021A64 (sub_180021A64.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_180026CBE @ 0x180026CBE (sub_180026CBE.c)
 *     sub_180027660 @ 0x180027660 (sub_180027660.c)
 * Callees:
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     _callnewh @ 0x180026540 (_callnewh.c)
 */

void *__fastcall sub_180021148(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = malloc(Size);
    if ( result )
      break;
    if ( !callnewh(i) )
      Concurrency::cancel_current_task();
  }
  return result;
}
