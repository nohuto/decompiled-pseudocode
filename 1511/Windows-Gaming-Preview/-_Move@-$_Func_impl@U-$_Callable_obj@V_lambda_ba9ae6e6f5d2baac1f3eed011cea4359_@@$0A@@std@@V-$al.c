/*
 * XREFs of ?_Move@?$_Func_impl@U?$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@UEAAPEAV?$_Func_base@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@2@PEAX@Z @ 0x18000B0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025F20 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_obj<_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>::_Move(
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
  *a2 = &std::_Func_impl<std::_Callable_obj<_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  return a2;
}
