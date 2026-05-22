/*
 * XREFs of _ButtonProcessor::Create_::_1_::dtor$3 @ 0x1800A0E24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ButtonProcessor::Create_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::~unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>((_DWORD *)(*(_QWORD *)(a2 + 144) + 56LL));
}
