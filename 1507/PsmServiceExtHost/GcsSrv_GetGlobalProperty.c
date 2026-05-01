/*
 * XREFs of GcsSrv_GetGlobalProperty @ 0x180006E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x180007E10 (-GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGlobalProperty(ExecutionModel::Internal *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 (__fastcall *v8)(struct DevPlat::Shared::SimpleLock *, _QWORD, __int64, __int64); // rdi
  int GlobalProperty; // eax
  struct DevPlat::Shared::SimpleLock *v11; // [rsp+20h] [rbp-18h] BYREF
  void *Block; // [rsp+28h] [rbp-10h] BYREF

  Block = 0LL;
  v7 = ExecutionModel::Internal::GcsSrv_Preamble(a1, 0LL, (bool)&Block, &v11, 0LL);
  if ( v7 >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, _QWORD, __int64, __int64))(*(_QWORD *)v11 + 80LL);
    if ( (char *)v8 == (char *)ExecutionModel::GameConfigStoreServer::GetGlobalProperty )
      GlobalProperty = ExecutionModel::GameConfigStoreServer::GetGlobalProperty(v11, a2, a4, a3);
    else
      GlobalProperty = v8(v11, a2, a4, a3);
    v7 = GlobalProperty;
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v7;
}
