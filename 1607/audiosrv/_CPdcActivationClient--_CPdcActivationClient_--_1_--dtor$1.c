/*
 * XREFs of _CPdcActivationClient::_CPdcActivationClient_::_1_::dtor$1 @ 0x180079835
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPdcActivationClient::_CPdcActivationClient_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 64) + 32LL));
}
