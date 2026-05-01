/*
 * XREFs of GcsSrv_GetGameConfig @ 0x1800480A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ?PackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x18004B9CC (-PackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z.c)
 */

__int64 __fastcall GcsSrv_GetGameConfig(
        ExecutionModel::Internal *a1,
        __int128 *a2,
        unsigned int *a3,
        ExecutionModel::Internal *a4)
{
  __int128 *v6; // rdi
  int v7; // ebx
  unsigned int v8; // r8d
  struct DevPlat::Shared::SimpleLock *v10; // [rsp+20h] [rbp-28h] BYREF
  void *Block; // [rsp+28h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  Block = 0LL;
  v6 = a2;
  LOBYTE(a2) = 1;
  v7 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v10);
  if ( v7 >= 0 )
  {
    if ( a3 && a4 )
    {
      v12 = *v6;
      v7 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, __int128 *, ExecutionModel::Internal *, unsigned int *))(*(_QWORD *)v10 + 24LL))(
             v10,
             &v12,
             a4,
             a3);
      if ( v7 >= 0 )
        v7 = ExecutionModel::Internal::PackGameConfig(a4, (struct ExecutionModel::GameConfig *)*a3, v8);
    }
    else
    {
      v7 = -2147024809;
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v7;
}
