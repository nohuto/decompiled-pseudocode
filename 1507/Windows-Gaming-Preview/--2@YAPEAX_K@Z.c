/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180026050
 * Callers:
 *     ?_Reallocate@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180002924 (-_Reallocate@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@W.c)
 *     ?_Move@?$_Func_impl@U?$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@UEAAPEAV?$_Func_base@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@2@PEAX@Z @ 0x18000AF30 (-_Move@-$_Func_impl@U-$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V-$al.c)
 *     ?_Move@?$_Func_impl@U?$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@UEAAPEAV?$_Func_base@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@2@PEAX@Z @ 0x18000B040 (-_Move@-$_Func_impl@U-$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V-$al.c)
 *     ?_Move@?$_Func_impl@U?$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@UEAAPEAV?$_Func_base@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@2@PEAX@Z @ 0x18000B1A0 (-_Move@-$_Func_impl@U-$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V-$al.c)
 *     ?SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@Z@std@@@Z @ 0x18001E7E8 (-SetTileStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXA.c)
 *     ?SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@@Z @ 0x18001E8B8 (-SetAppStateChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAE.c)
 *     ?SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAXAEBV?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z@std@@@Z @ 0x18001E988 (-SetViewContentsChangedHandler@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180026120 (--_U@YAPEAX_K@Z.c)
 * Callees:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180026864 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x18002688C (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x18002692E (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x1800269A0 (_o_malloc_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = o_malloc_0(Size);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh_0(i) )
    {
      if ( i == -1LL )
        __scrt_throw_std_bad_array_new_length();
      __scrt_throw_std_bad_alloc();
    }
  }
  return result;
}
