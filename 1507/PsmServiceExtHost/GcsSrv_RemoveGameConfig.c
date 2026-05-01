/*
 * XREFs of GcsSrv_RemoveGameConfig @ 0x1800437A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_RemoveGameConfig(ExecutionModel::Internal *a1, __int128 *a2)
{
  __int128 *v2; // rdi
  int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  struct DevPlat::Shared::SimpleLock *v6; // [rsp+50h] [rbp+18h] BYREF
  void *Block; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  Block = 0LL;
  v2 = a2;
  LOBYTE(a2) = 1;
  v3 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v6);
  if ( v3 >= 0 )
  {
    v5 = *v2;
    v3 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, __int128 *))(*(_QWORD *)v6 + 8LL))(v6, &v5);
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v3;
}
