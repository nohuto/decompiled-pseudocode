/*
 * XREFs of GcsSrv_GetGamePropertySize @ 0x180048550
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGamePropertySize(ExecutionModel::Internal *a1, __int128 *a2, unsigned int a3, __int64 a4)
{
  __int128 *v6; // rdi
  int v7; // ebx
  struct DevPlat::Shared::SimpleLock *v9; // [rsp+30h] [rbp-28h] BYREF
  void *Block; // [rsp+38h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v9 = 0LL;
  Block = 0LL;
  v6 = a2;
  LOBYTE(a2) = 1;
  v7 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v9);
  if ( v7 >= 0 )
  {
    v11 = *v6;
    v7 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, __int128 *, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 64LL))(
           v9,
           &v11,
           a3,
           0LL,
           a4);
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v7;
}
