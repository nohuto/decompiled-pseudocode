/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18000C5AC
 * Callers:
 *     _std::ios_base::failure::failure_::_1_::dtor$0 @ 0x18005A3FC (_std--ios_base--failure--failure_--_1_--dtor$0.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$1 @ 0x18005AB5D (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AB5D.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$3 @ 0x18005AB75 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AB75.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getifld_::_1_::dtor$0 @ 0x18005AB87 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AB87.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getifld_::_1_::dtor$1 @ 0x18005AB93 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005AB93.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$1 @ 0x18005ABB1 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005ABB1.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$3 @ 0x18005ABC9 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18005ABC9.c)
 *     _std::_Getloctxt_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short______::_1_::dtor$0 @ 0x18005AC7A (_std--_Getloctxt_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_traits_unsigne.c)
 * Callees:
 *     <none>
 */

void __fastcall std::string::~string(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 24) >= 0x10uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
