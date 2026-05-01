/*
 * XREFs of GcsSrv_SetGameProperty @ 0x1800487C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_SetGameProperty(
        ExecutionModel::Internal *a1,
        __int128 *a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  __int128 *v7; // rdi
  int v8; // ebx
  struct DevPlat::Shared::SimpleLock *v10; // [rsp+30h] [rbp-28h] BYREF
  void *Block; // [rsp+38h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v10 = 0LL;
  Block = 0LL;
  v7 = a2;
  LOBYTE(a2) = 1;
  v8 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v10);
  if ( v8 >= 0 )
  {
    v12 = *v7;
    v8 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, __int128 *, _QWORD, __int64, int))(*(_QWORD *)v10 + 72LL))(
           v10,
           &v12,
           a3,
           a5,
           a4);
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v8;
}
