/*
 * XREFs of ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001C360
 * Callers:
 *     ?GetIids@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18001BC50 (-GetIids@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListE.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A77C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001CEBC (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFTMCrossProcClient<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 *v6; // rax
  int RemoteIdentity; // esi
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  v10 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>(&v10);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (CFTMCrossProcClientImpl *)(a1 + 24),
                     &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                     (void **)v6);
  if ( RemoteIdentity >= 0 )
    RemoteIdentity = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD *))(*(_QWORD *)v10 + 24LL))(v10, a2, a3);
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)RemoteIdentity;
}
