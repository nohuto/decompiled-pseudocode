/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180004118
 * Callers:
 *     _std::ios_base::failure::failure_::_1_::dtor$0 @ 0x180028A8D (_std--ios_base--failure--failure_--_1_--dtor$0.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getifld_::_1_::dtor$0 @ 0x1800291D0 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_1800291D0.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getifld_::_1_::dtor$1 @ 0x1800291DC (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_1800291DC.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$1 @ 0x1800291FA (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_1800291FA.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffld_::_1_::dtor$3 @ 0x180029212 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029212.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$1 @ 0x180029230 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029230.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::_Getffldx_::_1_::dtor$3 @ 0x180029248 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029248.c)
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
