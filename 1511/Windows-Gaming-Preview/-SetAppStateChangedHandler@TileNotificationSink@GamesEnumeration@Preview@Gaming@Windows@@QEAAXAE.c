/*
 * XREFs of ?SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@@Z @ 0x18001E5C8
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180008E38 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025F20 (--2@YAPEAX_K@Z.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetAppStateChangedHandler(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rax

  v2 = (_QWORD *)(a1 + 56);
  if ( a1 + 56 != a2 )
  {
    v4 = *(_QWORD **)(a1 + 80);
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*v4 + 40LL))(*(_QWORD *)(a1 + 80), 0LL);
      if ( v4 != v2 )
        operator delete(v4);
      v2[3] = 0LL;
    }
    v5 = *(_QWORD *)(a2 + 24);
    if ( v5 )
    {
      if ( v5 == a2 )
      {
        *v2 = &std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
        v2[1] = *(_QWORD *)(v5 + 8);
        v2[3] = v2;
      }
      else
      {
        v6 = operator new(0x18uLL);
        if ( !v6 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        *v6 = &std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::`vftable';
        v6[1] = *(_QWORD *)(v5 + 8);
        v2[3] = v6;
      }
    }
    else
    {
      v2[3] = 0LL;
    }
  }
}
