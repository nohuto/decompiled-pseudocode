/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180009774
 * Callers:
 *     _std::_System_error_category::message_::_1_::dtor$0 @ 0x180030A60 (_std--_System_error_category--message_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::string::~string(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return std::string::_Tidy(a1, a2, 0LL);
}
