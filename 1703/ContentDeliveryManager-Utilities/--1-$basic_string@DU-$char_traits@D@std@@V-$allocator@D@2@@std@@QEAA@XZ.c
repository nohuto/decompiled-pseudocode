/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180011A7C
 * Callers:
 *     _std::ios_base::failure::failure_::_1_::dtor$0 @ 0x180071091 (_std--ios_base--failure--failure_--_1_--dtor$0.c)
 *     __anonymous_namespace_::StringToWString_::_1_::dtor$0 @ 0x18007113D (__anonymous_namespace_--StringToWString_--_1_--dtor$0.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getffld_::_1_::dtor$1 @ 0x180071709 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____ea_180071709.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getffld_::_1_::dtor$3 @ 0x180071721 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____ea_180071721.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getifld_::_1_::dtor$0 @ 0x18007172D (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--_Getifld_-.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getifld_::_1_::dtor$1 @ 0x180071739 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____ea_180071739.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getffldx_::_1_::dtor$1 @ 0x180071751 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____ea_180071751.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getffldx_::_1_::dtor$3 @ 0x180071769 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____ea_180071769.c)
 *     _std::_Getloctxt_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t______::_1_::dtor$0 @ 0x1800718BE (_std--_Getloctxt_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t______--_1_--d.c)
 *     _Windows::Services::TargetedContent::Internal::GetCorrelationVector_::_1_::dtor$1 @ 0x180072A30 (_Windows--Services--TargetedContent--Internal--GetCorrelationVector_--_1_--dtor$1.c)
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
