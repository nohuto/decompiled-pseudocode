/*
 * XREFs of ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009A54
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x180009B80 (--0TestCommandHost@@AEAA@XZ.c)
 *     _lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_ @ 0x180009D60 (_lambda_e553b185ff1de720e49cf48bc3fd719c_--_lambda_invoker_cdecl_.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009DE4 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?make_event_watcher@wil@@YA?AV?$unique_any_t@V?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180056118 (-make_event_watcher@wil@@YA-AV-$unique_any_t@V-$event_watcher_t@V-$unique_storage@U-$resource_po.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180002F78 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Throw_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 0, (unsigned int)a4);
}
