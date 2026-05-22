/*
 * XREFs of _InputDeliveryServer::OnAppThreadMessage_::_1_::dtor$1 @ 0x1800A2608
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::OnAppThreadMessage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<InputAttemptedTarget>::~unique_ptr<InputAttemptedTarget>((__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 184));
}
