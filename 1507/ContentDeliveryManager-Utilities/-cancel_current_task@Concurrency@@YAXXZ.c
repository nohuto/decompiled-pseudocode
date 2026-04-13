/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8
 * Callers:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004CF0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     sub_1800139BC @ 0x1800139BC (sub_1800139BC.c)
 *     sub_180013DF0 @ 0x180013DF0 (sub_180013DF0.c)
 *     sub_180015FC8 @ 0x180015FC8 (sub_180015FC8.c)
 *     unknown_libname_7 @ 0x180017D50 (unknown_libname_7.c)
 *     sub_180021148 @ 0x180021148 (sub_180021148.c)
 *     sub_180026CBE @ 0x180026CBE (sub_180026CBE.c)
 *     sub_180027660 @ 0x180027660 (sub_180027660.c)
 * Callees:
 *     sub_180020F8C @ 0x180020F8C (sub_180020F8C.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_180020F8C((exception *)pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
