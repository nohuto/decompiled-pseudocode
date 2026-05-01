/*
 * XREFs of GcsSrv_GetGameIdsByExeNameCount @ 0x1800434A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameIdsByExeNameCount(ExecutionModel::Internal *a1, void *a2, __int64 a3)
{
  void *v4; // rbp
  int v5; // ebx
  void *Block; // [rsp+20h] [rbp-18h] BYREF
  struct DevPlat::Shared::SimpleLock *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  Block = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v8);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, void *, _QWORD, __int64))(*(_QWORD *)v8 + 56LL))(
           v8,
           v4,
           0LL,
           a3);
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v5;
}
