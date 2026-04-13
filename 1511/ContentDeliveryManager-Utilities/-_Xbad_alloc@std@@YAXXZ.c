/*
 * XREFs of ?_Xbad_alloc@std@@YAXXZ @ 0x180022C48
 * Callers:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004BC0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180013D7C (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x1800141B0 (-overflow@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@MEAAGG@Z.c)
 *     ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18001653C (-_Reallocate@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800182C4 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180022CC8 (--2@YAPEAX_K@Z.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x180028814 (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Copy_--_1_--catch$1.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$1 @ 0x18002925A (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short.c)
 * Callees:
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x180022B0C (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x180028090 (_CxxThrowException_0.c)
 */

void __noreturn std::_Xbad_alloc(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
