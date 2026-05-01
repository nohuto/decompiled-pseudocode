/*
 * XREFs of ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x1800253F8
 * Callers:
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180014C40 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreDataHelpers::GetAppIdentifierFromTile(
        OneCoreDataHelpers *this,
        struct ITileInfo *a2,
        struct IApplicationIdentifier **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v10 = 0LL;
  v4 = VE_MaterializeApplicationActivatorNoImpersonationCachedUser(this, &v10, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 44LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\onecoredatahelpers.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_7;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, struct ITileInfo *))(*(_QWORD *)v10 + 24LL))(v10, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 45LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
