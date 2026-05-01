/*
 * XREFs of ??_E?$_Func_impl@U?$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@UEAAPEAXI@Z @ 0x18000A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_fb370d981ef1183a944e68956136c802_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileChangeEvent *>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Func_base<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
