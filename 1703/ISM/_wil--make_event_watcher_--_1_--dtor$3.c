/*
 * XREFs of _wil::make_event_watcher_::_1_::dtor$3 @ 0x1800A1D8A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wil::make_event_watcher_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>((void **)(a2 + 96));
}
