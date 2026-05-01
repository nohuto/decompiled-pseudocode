/*
 * XREFs of ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180011B9C
 * Callers:
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUITileManager@@PEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUITileManager@@$$QEAPEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Z @ 0x1800037A4 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIT.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180011D40 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013510 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E0A0 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct ITileManager *a2,
        unsigned __int16 **a3,
        struct ITileInfo *a4)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  void *v11; // rcx
  int AppUserModelId; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((struct ITileManager **)this + 23) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((unsigned __int16 ***)this + 24) != a3 )
  {
    if ( a3 )
      (*((void (__fastcall **)(unsigned __int16 **))*a3 + 1))(a3);
    v9 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct ITileInfo **)this + 25) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (void *)*((_QWORD *)this + 14);
  if ( v11 )
  {
    CoTaskMemFree(v11);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 15) = -1LL;
  *((_QWORD *)this + 16) = -1LL;
  AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
                     a4,
                     (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)((char *)this + 112),
                     a3);
  v13 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    v14 = 108LL;
LABEL_20:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v14,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)AppUserModelId);
    return v13;
  }
  AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(this);
  v13 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    v14 = 110LL;
    goto LABEL_20;
  }
  AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties(this);
  v13 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    v14 = 111LL;
    goto LABEL_20;
  }
  return 0LL;
}
