/*
 * XREFs of GcsSrv_SetGlobalProperty @ 0x18001B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z @ 0x18001BC50 (-SetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEI@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_SetGlobalProperty(ExecutionModel::Internal *a1, void *a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // r14d
  int v7; // ebx
  __int64 (__fastcall *v8)(struct DevPlat::Shared::SimpleLock *, _QWORD, __int64, _QWORD); // rdi
  int v9; // eax
  struct DevPlat::Shared::SimpleLock *v11; // [rsp+20h] [rbp-18h] BYREF
  void *Block; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  Block = 0LL;
  v6 = (unsigned int)a2;
  LOBYTE(a2) = 1;
  v7 = ExecutionModel::Internal::GcsSrv_Preamble(a1, a2, &Block, &v11);
  if ( v7 >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, _QWORD, __int64, _QWORD))(*(_QWORD *)v11 + 88LL);
    if ( (char *)v8 == (char *)ExecutionModel::GameConfigStoreServer::SetGlobalProperty )
      v9 = ExecutionModel::GameConfigStoreServer::SetGlobalProperty(v11, v6, a4, a3);
    else
      v9 = v8(v11, v6, a4, a3);
    v7 = v9;
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v7;
}
