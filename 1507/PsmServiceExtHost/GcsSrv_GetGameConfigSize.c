/*
 * XREFs of GcsSrv_GetGameConfigSize @ 0x1800431E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameConfigSize(ExecutionModel::Internal *a1, __int128 *a2, __int64 a3)
{
  __int128 *v4; // rdi
  int v5; // ebx
  void *Block; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  struct DevPlat::Shared::SimpleLock *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  Block = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v9);
  if ( v5 >= 0 )
  {
    if ( a3 )
    {
      v8 = *v4;
      v5 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, __int128 *, _QWORD, __int64))(*(_QWORD *)v9 + 24LL))(
             v9,
             &v8,
             0LL,
             a3);
    }
    else
    {
      v5 = -2147024809;
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v5;
}
