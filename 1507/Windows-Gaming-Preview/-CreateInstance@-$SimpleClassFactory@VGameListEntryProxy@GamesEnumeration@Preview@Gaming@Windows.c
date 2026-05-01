/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180015400
 * Callers:
 *     <none>
 * Callees:
 *     ??0GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180016FBC (--0GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@U?$InterfaceList@VCFTMCrossProcClientImpl@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CEE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@U-$_ea_18001CEE0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@U?$InterfaceList@VCFTMCrossProcClientImpl@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001D100 (-Release@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@U-$Impleme_ea_18001D100.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026020 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rbx
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *v8; // rax
  int v9; // esi
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v7 = 0LL;
    v11 = 0LL;
    v8 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *)operator new(
                                                                             0x70uLL,
                                                                             (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::GameListEntryProxy(v8);
      v9 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcClientImpl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
             v10,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v11);
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcClientImpl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v10);
      v7 = v11;
      if ( v9 >= 0 )
        v9 = (**v11)(v11, a3, a4);
    }
    else
    {
      v9 = -2147024882;
    }
    if ( v7 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
    return (unsigned int)v9;
  }
}
