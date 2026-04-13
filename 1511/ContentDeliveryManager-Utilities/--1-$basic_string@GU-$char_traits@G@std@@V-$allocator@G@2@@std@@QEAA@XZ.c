/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180012858
 * Callers:
 *     __anonymous_namespace_::SplitString_::_1_::dtor$1 @ 0x180028AC5 (__anonymous_namespace_--SplitString_--_1_--dtor$1.c)
 *     __anonymous_namespace_::GetImpressionEventExpirationTime_::_1_::dtor$0 @ 0x180028AD7 (__anonymous_namespace_--GetImpressionEventExpirationTime_--_1_--dtor$0.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$1 @ 0x180029150 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029150.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$2 @ 0x18002915C (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_18002915C.c)
 *     _std::num_get_unsigned_short_std::istreambuf_iterator_unsigned_short_std::char_traits_unsigned_short_____::do_get_::_1_::dtor$3 @ 0x180029168 (_std--num_get_unsigned_short_std--istreambuf_iterator_unsigned_short_std--char_trai_ea_180029168.c)
 *     _CreativeFramework::Health::details::OffersHealthTracker_3_1_::OffersHealthTracker_3_1__::_1_::dtor$2 @ 0x18002941B (_CreativeFramework--Health--details--OffersHealthTracker_3_1_--OffersHealthTracker_3_1__--_1_--d.c)
 *     _CreativeFramework::Health::details::BaseScenarioEvents_3_::Evaluate_::_1_::dtor$0 @ 0x1800297CF (_CreativeFramework--Health--details--BaseScenarioEvents_3_--Evaluate_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
