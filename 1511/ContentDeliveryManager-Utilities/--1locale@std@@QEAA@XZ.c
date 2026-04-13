/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x18000A75C
 * Callers:
 *     tidy_global @ 0x1800233A0 (tidy_global.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$1 @ 0x180028F4B (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$1.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$1_0 @ 0x180028FCB (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$1_.c)
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$4 @ 0x180029090 (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allo_ea_180029090.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::_Ipfx_::_1_::dtor$0 @ 0x1800290DF (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--_Ipfx_--_1_--dtor$0.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$0 @ 0x180029144 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_traits_unsigned_s.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$4 @ 0x180029174 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029174.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$0_0 @ 0x180029186 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029186.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$0_1 @ 0x180029198 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029198.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$0 @ 0x1800291EE (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_1800291EE.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$2 @ 0x180029206 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029206.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$0 @ 0x180029224 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029224.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$2 @ 0x18002923C (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18002923C.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rax

  if ( *(_QWORD *)this )
  {
    v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    if ( v1 )
      (**v1)(v1, 1LL);
  }
}
