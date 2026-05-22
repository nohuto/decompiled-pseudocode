/*
 * XREFs of _DWMInputRouter::_DWMInputRouter_::_1_::dtor$25 @ 0x18009F99C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::_DWMInputRouter_::_1_::dtor_25(__int64 a1, __int64 a2)
{
  return wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::~unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>((_DWORD *)(*(_QWORD *)(a2 + 144) + 952LL));
}
