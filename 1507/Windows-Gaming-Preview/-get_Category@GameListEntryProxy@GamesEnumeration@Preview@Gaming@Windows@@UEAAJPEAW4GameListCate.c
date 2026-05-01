/*
 * XREFs of ?get_Category@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCategory@2345@@Z @ 0x180011950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000AA3C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIVisualElementEventDispatcher@@@WRL@Microsoft@@@@YAPEAPEAXV-$C.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001D7F8 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::get_Category(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        enum Windows::Gaming::Preview::GamesEnumeration::GameListCategory *a2)
{
  __int64 *v4; // rax
  int RemoteIdentity; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IVisualElementEventDispatcher>>(&v11);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *)((char *)this + 8),
                     &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                     (void **)v4);
  v6 = RemoteIdentity;
  if ( RemoteIdentity >= 0 )
  {
    RemoteIdentity = (*(__int64 (__fastcall **)(__int64, enum Windows::Gaming::Preview::GamesEnumeration::GameListCategory *))(*(_QWORD *)v11 + 64LL))(
                       v11,
                       a2);
    v6 = RemoteIdentity;
    if ( RemoteIdentity >= 0 )
      goto LABEL_6;
    v7 = 64LL;
  }
  else
  {
    v7 = 62LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v7,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)RemoteIdentity);
LABEL_6:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v6;
}
