/*
 * XREFs of _std::make_shared_CreativeFramework::Health::details::BaseEventsWithEvaluation_1__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_&___ptr64_bool_const_&___ptr64__::_1_::dtor$1 @ 0x180071B9E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x18001053C (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::make_shared_CreativeFramework::Health::details::BaseEventsWithEvaluation_1__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_bool_const_____ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
