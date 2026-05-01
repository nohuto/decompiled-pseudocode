/*
 * XREFs of ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180013A64
 * Callers:
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUITileManager@@PEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUITileManager@@$$QEAPEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Z @ 0x18000746C (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013BD4 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct ITileManager *a2,
        unsigned __int16 **a3,
        struct ITileInfo *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  int AppUserModelId; // eax
  unsigned int v13; // edi
  int v15; // eax
  unsigned int v16; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((struct ITileManager **)this + 22) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 22);
    *((_QWORD *)this + 22) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((unsigned __int16 ***)this + 23) != a3 )
  {
    if ( a3 )
      (*((void (__fastcall **)(unsigned __int16 **))*a3 + 1))(a3);
    v9 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct ITileInfo **)this + 24) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = a4;
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
  if ( AppUserModelId >= 0 )
  {
    v15 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(this);
    v16 = v15;
    if ( v15 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v15);
    return v16;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)AppUserModelId);
    return v13;
  }
}
