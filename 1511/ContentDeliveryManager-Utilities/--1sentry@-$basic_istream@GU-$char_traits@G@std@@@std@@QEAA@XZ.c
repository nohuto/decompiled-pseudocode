/*
 * XREFs of ??1sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18000B170
 * Callers:
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::flush_::_1_::dtor$1 @ 0x180028F15 (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--flush_--_1_--dtor$1.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2 @ 0x180028F33 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0 @ 0x180028F3F (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2_0 @ 0x180028FB3 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2_.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0_0 @ 0x180028FBF (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0_.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::sentry::~sentry(__int64 **a1)
{
  __int64 *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi

  v1 = *a1;
  result = **a1;
  v3 = *(int *)(result + 4);
  v4 = *(__int64 *)((char *)v1 + v3 + 72);
  if ( v4 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*(__int64 *)((char *)v1 + v3 + 72));
  return result;
}
