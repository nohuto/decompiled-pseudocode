/*
 * XREFs of GcsSrv_GetGlobalPropertySize @ 0x180043670
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGlobalPropertySize(ExecutionModel::Internal *a1, unsigned int a2, __int64 a3)
{
  int v5; // ebx
  void *Block; // [rsp+20h] [rbp-18h] BYREF
  struct DevPlat::Shared::SimpleLock *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  Block = 0LL;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, 0LL, &Block, &v8);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, _QWORD, _QWORD, __int64))(*(_QWORD *)v8 + 80LL))(
           v8,
           a2,
           0LL,
           a3);
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v5;
}
