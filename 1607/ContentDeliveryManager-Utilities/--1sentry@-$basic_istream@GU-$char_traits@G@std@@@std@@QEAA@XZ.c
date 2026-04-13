/*
 * XREFs of ??1sentry@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18001C440
 * Callers:
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::sentry::sentry_::_1_::dtor$0 @ 0x18005A8CC (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--sentry--sentry_--_1_--dto.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2 @ 0x18005A93F (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0 @ 0x18005A94B (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2_0 @ 0x18005A9BF (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2_.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$0_0 @ 0x18005A9CB (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$0_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
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
