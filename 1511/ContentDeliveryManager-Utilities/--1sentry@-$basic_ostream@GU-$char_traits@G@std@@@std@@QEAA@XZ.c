/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1800121C0
 * Callers:
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::flush_::_1_::dtor$0 @ 0x180028F21 (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--flush_--_1_--dtor$0.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180014A08 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800235D4 (-uncaught_exception@std@@YA_NXZ.c)
 */

__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
