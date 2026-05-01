/*
 * XREFs of ?_Delete_this@?$_Func_impl@U?$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@EEAAX_N@Z @ 0x18000AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::_Delete_this(
        void *Block,
        char a2)
{
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Block + 40LL))(Block, 0LL);
  if ( a2 )
    operator delete(Block);
}
