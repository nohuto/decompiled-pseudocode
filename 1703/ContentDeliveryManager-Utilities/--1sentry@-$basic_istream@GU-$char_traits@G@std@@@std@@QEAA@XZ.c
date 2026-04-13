/*
 * XREFs of ??1sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1800239CC
 * Callers:
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::sentry::sentry_::_1_::dtor$0 @ 0x1800714BA (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--sentry--sentry_--_1_--dto.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2 @ 0x18007151B (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0 @ 0x180071527 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2_0 @ 0x180071595 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2_.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0_0 @ 0x1800715A1 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0_.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::dtor$2 @ 0x180074698 (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--operator___--_1_--dtor$2.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::dtor$0 @ 0x1800746A4 (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--operator___--_1_--dtor$0.c)
 *     _std::basic_ostream_wchar_t_std::char_traits_wchar_t___::flush_::_1_::dtor$1 @ 0x180074855 (_std--basic_ostream_wchar_t_std--char_traits_wchar_t___--flush_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::sentry::~sentry(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
