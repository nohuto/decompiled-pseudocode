/*
 * XREFs of GcsSrv_GetGameIdsByExeName @ 0x180043400
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameIdsByExeName(ExecutionModel::Internal *a1, void *a2, __int64 a3, __int64 a4)
{
  void *v6; // r14
  int v7; // ebx
  struct DevPlat::Shared::SimpleLock *v9; // [rsp+20h] [rbp-18h] BYREF
  void *Block; // [rsp+28h] [rbp-10h] BYREF

  v9 = 0LL;
  Block = 0LL;
  v6 = a2;
  LOBYTE(a2) = 1;
  v7 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v9);
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, void *, __int64, __int64))(*(_QWORD *)v9 + 56LL))(
           v9,
           v6,
           a4,
           a3);
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v7;
}
