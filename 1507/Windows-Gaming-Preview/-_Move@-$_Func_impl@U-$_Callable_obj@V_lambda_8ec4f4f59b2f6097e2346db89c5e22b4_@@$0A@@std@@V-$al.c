/*
 * XREFs of ?_Move@?$_Func_impl@U?$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@UEAAPEAV?$_Func_base@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@2@PEAX@Z @ 0x18000AF30
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026050 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::_Move(
        __int64 a1,
        _QWORD *a2)
{
  if ( !a2 )
  {
    a2 = operator new(0x18uLL);
    if ( !a2 )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
  }
  *a2 = &std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  return a2;
}
