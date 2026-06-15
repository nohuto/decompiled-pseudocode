/*
 * XREFs of ??1mutex@std@@QEAA@XZ @ 0x18007984C
 * Callers:
 *     _CPdcActivationClient::CPdcActivationClient_::_1_::dtor$1 @ 0x18003BB81 (_CPdcActivationClient--CPdcActivationClient_--_1_--dtor$1.c)
 *     _CPdcActivationClient::_CPdcActivationClient_::_1_::dtor$1 @ 0x180079835 (_CPdcActivationClient--_CPdcActivationClient_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl std::mutex::~mutex(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
