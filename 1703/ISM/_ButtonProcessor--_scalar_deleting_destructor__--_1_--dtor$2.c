/*
 * XREFs of _ButtonProcessor::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800A0DDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ButtonProcessor::_scalar_deleting_destructor__::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::~unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>((_DWORD *)(*(_QWORD *)(a2 + 64) + 56LL));
}
