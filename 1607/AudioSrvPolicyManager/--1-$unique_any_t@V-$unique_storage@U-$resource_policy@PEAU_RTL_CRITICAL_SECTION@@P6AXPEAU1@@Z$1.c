/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001F768
 * Callers:
 *     _TsSessionNewPrimaryConsoleAudioSession_::_1_::dtor$0 @ 0x180025BE2 (_TsSessionNewPrimaryConsoleAudioSession_--_1_--dtor$0.c)
 *     _TsSessionIdDeleteAppManagerClient_::_1_::dtor$0 @ 0x180025BF4 (_TsSessionIdDeleteAppManagerClient_--_1_--dtor$0.c)
 *     _TsSessionCreate_::_1_::dtor$2 @ 0x180025C12 (_TsSessionCreate_--_1_--dtor$2.c)
 *     _TsSessionUpdateAudioProtocol_::_1_::dtor$0 @ 0x180025C9A (_TsSessionUpdateAudioProtocol_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,2>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(
        struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
