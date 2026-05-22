/*
 * XREFs of ?FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ @ 0x18002FE6C
 * Callers:
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002FF30 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180030120 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??I?$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX0I@Z$0A@@wil@@QEAAPEAIXZ @ 0x180017EB8 (--I-$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1-IMessageSessionCloseEndpointFunction@.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ButtonProcessor::FindRemoteEndpoint(ButtonProcessor *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _DWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD **))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), &v9) >= 0 )
  {
    v2 = v9;
    v3 = *v9;
    v4 = wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::operator&((__int64 *)this + 7);
    if ( (*(int (__fastcall **)(_QWORD *, const wchar_t *, _QWORD, _DWORD *))(v3 + 24))(
           v2,
           L"System\\RawShellButtonRouterInput",
           0LL,
           v4) < 0 )
    {
      v5 = v9;
      v6 = *v9;
      v7 = wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::operator&((__int64 *)this + 7);
      (*(void (__fastcall **)(_QWORD *, const wchar_t *, __int64, _DWORD *))(v6 + 24))(
        v5,
        L"System\\RawShellButtonRouterInput",
        1LL,
        v7);
    }
  }
  v8 = v9;
  v9 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
}
