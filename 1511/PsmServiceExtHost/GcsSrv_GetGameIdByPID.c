/*
 * XREFs of GcsSrv_GetGameIdByPID @ 0x18001D040
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x18001C740 (-GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameIdByPID(ExecutionModel::Internal *a1, void *a2, struct _GUID *a3)
{
  DWORD v4; // ebp
  int v5; // ebx
  ExecutionModel::GameConfigStoreServer *v6; // rbx
  __int64 (__fastcall *v7)(ExecutionModel::GameConfigStoreServer *, DWORD, struct _GUID *); // rdi
  int GameIdByPID; // eax
  void *Block; // [rsp+20h] [rbp-18h] BYREF
  ExecutionModel::GameConfigStoreServer *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Block = 0LL;
  v4 = (unsigned int)a2;
  LOBYTE(a2) = 1;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v11);
  if ( v5 >= 0 )
  {
    v6 = v11;
    *a3 = (struct _GUID)xmmword_180059740;
    v7 = *(__int64 (__fastcall **)(ExecutionModel::GameConfigStoreServer *, DWORD, struct _GUID *))(*(_QWORD *)v6 + 32LL);
    if ( v7 == ExecutionModel::GameConfigStoreServer::GetGameIdByPID )
      GameIdByPID = ExecutionModel::GameConfigStoreServer::GetGameIdByPID(v6, v4, a3);
    else
      GameIdByPID = v7(v6, v4, a3);
    v5 = GameIdByPID;
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>(Block);
  return (unsigned int)v5;
}
