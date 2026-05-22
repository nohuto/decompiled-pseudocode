/*
 * XREFs of _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180001290
 * Callers:
 *     <none>
 * Callees:
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180007DC0 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 */

// Hidden C++ exception states: #wind=1
int dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__()
{
  wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
    &MPC3DStateHelper::s_isInstanceCreatedEvent,
    1LL);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__MPC3DStateHelper::s_isInstanceCreatedEvent__);
}
