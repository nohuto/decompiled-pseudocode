/*
 * XREFs of _CPdcActivationClient::CPdcActivationClient_::_1_::dtor$1 @ 0x18003BB81
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPdcActivationClient::CPdcActivationClient_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 80) + 32LL));
}
