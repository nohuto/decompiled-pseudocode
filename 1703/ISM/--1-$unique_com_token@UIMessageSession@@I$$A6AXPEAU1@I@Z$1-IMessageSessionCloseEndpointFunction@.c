/*
 * XREFs of ??1?$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX0I@Z$0A@@wil@@QEAA@XZ @ 0x180017FBC
 * Callers:
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$25 @ 0x18009F99C (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$25.c)
 *     _ButtonProcessor::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800A0DDC (_ButtonProcessor--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _ButtonProcessor::Create_::_1_::dtor$3 @ 0x1800A0E24 (_ButtonProcessor--Create_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::~unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>(
        _DWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a1[2] )
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 144LL))(*(_QWORD *)a1);
  a1[2] = 0;
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
