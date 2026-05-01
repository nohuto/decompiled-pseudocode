/*
 * XREFs of GcsSrv_GetGameIdByAUMID @ 0x180005640
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x18001C7A0 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameIdByAUMID(ExecutionModel::Internal *a1, unsigned __int16 *a2, struct _GUID *a3)
{
  const unsigned __int16 *v4; // rbp
  int v5; // ebx
  ExecutionModel::GameConfigStoreServer *v6; // rbx
  int (*v7)(ExecutionModel::GameConfigStoreServer *__hidden, const unsigned __int16 *, struct _GUID *); // rdi
  int GameIdByAUMID; // eax
  void *Block; // [rsp+20h] [rbp-18h] BYREF
  ExecutionModel::GameConfigStoreServer *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, (bool)&Block, &v11, 0LL);
  if ( v5 >= 0 )
  {
    v6 = v11;
    *a3 = (struct _GUID)xmmword_180059740;
    v7 = *(int (**)(ExecutionModel::GameConfigStoreServer *__hidden, const unsigned __int16 *, struct _GUID *))(*(_QWORD *)v6 + 40LL);
    if ( v7 == ExecutionModel::GameConfigStoreServer::GetGameIdByAUMID )
      GameIdByAUMID = ExecutionModel::GameConfigStoreServer::GetGameIdByAUMID(v6, v4, a3);
    else
      GameIdByAUMID = ((__int64 (__fastcall *)(ExecutionModel::GameConfigStoreServer *, const unsigned __int16 *, struct _GUID *))v7)(
                        v6,
                        v4,
                        a3);
    v5 = GameIdByAUMID;
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>(Block);
  return (unsigned int)v5;
}
