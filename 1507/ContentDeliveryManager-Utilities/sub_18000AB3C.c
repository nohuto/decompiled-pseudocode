/*
 * XREFs of sub_18000AB3C @ 0x18000AB3C
 * Callers:
 *     sub_180021820 @ 0x180021820 (sub_180021820.c)
 *     unknown_libname_28 @ 0x18002739B (unknown_libname_28.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_0 @ 0x180027496 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180027496.c)
 *     sub_1800274E5 @ 0x1800274E5 (sub_1800274E5.c)
 *     sub_18002754A @ 0x18002754A (sub_18002754A.c)
 *     sub_18002757A @ 0x18002757A (sub_18002757A.c)
 *     unknown_libname_32 @ 0x18002758C (unknown_libname_32.c)
 *     sub_18002759E @ 0x18002759E (sub_18002759E.c)
 *     ?dtor$0@?0??_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z@4HA @ 0x1800275F4 (-dtor$0@-0--_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHP.c)
 *     ?dtor$2@?0??_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z@4HA @ 0x18002760C (-dtor$2@-0--_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHP.c)
 *     unknown_libname_34 @ 0x18002762A (unknown_libname_34.c)
 *     unknown_libname_36 @ 0x180027642 (unknown_libname_36.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void __fastcall sub_18000AB3C(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rax

  if ( *a1 )
  {
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    if ( v1 )
      (**v1)(v1, 1LL);
  }
}
