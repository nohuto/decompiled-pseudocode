/*
 * XREFs of sub_1800041E4 @ 0x1800041E4
 * Callers:
 *     sub_180026F37 @ 0x180026F37 (sub_180026F37.c)
 *     sub_1800275D6 @ 0x1800275D6 (sub_1800275D6.c)
 *     unknown_libname_33 @ 0x1800275E2 (unknown_libname_33.c)
 *     ?dtor$1@?0??_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z@4HA @ 0x180027600 (-dtor$1@-0--_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHP.c)
 *     ?dtor$3@?0??_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z@4HA @ 0x180027618 (-dtor$3@-0--_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHP.c)
 *     unknown_libname_35 @ 0x180027636 (unknown_libname_35.c)
 *     unknown_libname_37 @ 0x18002764E (unknown_libname_37.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800041E4(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
