/*
 * XREFs of ??1?$unique_any_t@V?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180056100
 * Callers:
 *     _wil::make_event_watcher_::_1_::dtor$2 @ 0x1800A1D7E (_wil--make_event_watcher_--_1_--dtor$2.c)
 *     _std::_Callback_once_std::tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$8 @ 0x1800A1DE5 (_std--_Callback_once_std--tuple__lambda_9c299e43976df575cbfcf7e1416abcbe__--___ptr6_ea_1800A1DE5.c)
 * Callees:
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18005604C (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

wil::details::event_watcher_state *__fastcall wil::unique_any_t<wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>::~unique_any_t<wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>(
        wil::details::event_watcher_state **a1,
        __int64 a2)
{
  wil::details::event_watcher_state *v2; // rcx
  wil::details::event_watcher_state *result; // rax

  v2 = *a1;
  if ( v2 )
    return wil::details::event_watcher_state::`scalar deleting destructor'(v2, a2);
  return result;
}
