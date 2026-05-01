/*
 * XREFs of GcsSrv_GetGameIdsByExeNameCount @ 0x180048420
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
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
