/*
 * XREFs of ?RuntimeClassInitialize@TileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18001E448
 * Callers:
 *     ??$MakeAndInitialize@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@V12345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@@Z @ 0x18000A7C8 (--$MakeAndInitialize@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@V12345@@Deta.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000A77C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *this)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>((__int64 *)this + 6);
  Instance = CoCreateInstance(
               &GUID_a6358b41_04b3_477f_b8e5_7edb1a5d7acd,
               0LL,
               1u,
               &GUID_8200309e_b0a8_4269_bd55_e0442725d348,
               (LPVOID *)ppv);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 29LL;
LABEL_5:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v5,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
      (const char *)(unsigned int)Instance);
    return v4;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *, __int64, char *))(**((_QWORD **)this + 6) + 24LL))(
               *((_QWORD *)this + 6),
               this,
               25LL,
               (char *)this + 40);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 32LL;
    goto LABEL_5;
  }
  return v4;
}
