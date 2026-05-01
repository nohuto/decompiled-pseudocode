/*
 * XREFs of ?SetCategoryAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1800139B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180015D24 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@WRL@M.c)
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E4DC (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::SetCategoryAsync(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  void **v6; // rax
  int RemoteIdentity; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v6 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>>(&v13);
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (CFTMCrossProcClientImpl *)(a1 + 8),
                     &GUID_735924d3_811f_4494_b69c_c641a0c61543,
                     v6);
  v8 = RemoteIdentity;
  if ( RemoteIdentity >= 0 )
  {
    RemoteIdentity = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 80LL))(v13, a2, a3);
    v8 = RemoteIdentity;
    if ( RemoteIdentity >= 0 )
      goto LABEL_6;
    v9 = 84LL;
  }
  else
  {
    v9 = 82LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)RemoteIdentity);
LABEL_6:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
