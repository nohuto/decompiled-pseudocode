/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x18001BA7C
 * Callers:
 *     tidy_global @ 0x180054890 (tidy_global.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$1 @ 0x18005A957 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$1.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$1_0 @ 0x18005A9D7 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$1_.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$0 @ 0x18005AA3F (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_traits_unsigned_s.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$0_0 @ 0x18005AA51 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AA51.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$4 @ 0x18005AA81 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AA81.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::_Ipfx_::_1_::dtor$0 @ 0x18005AAB4 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--_Ipfx_--_1_--dtor$0.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::basic_istream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$1 @ 0x18005AB19 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--basic_istream_unsigned_sh.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$0 @ 0x18005AB51 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AB51.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$2 @ 0x18005AB69 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AB69.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$0 @ 0x18005ABA5 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005ABA5.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$2 @ 0x18005ABBD (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005ABBD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
