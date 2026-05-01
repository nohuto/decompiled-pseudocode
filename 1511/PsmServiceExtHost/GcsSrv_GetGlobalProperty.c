/*
 * XREFs of GcsSrv_GetGlobalProperty @ 0x18001CFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z @ 0x18001C4D0 (-GetGlobalProperty@GameConfigStoreServer@ExecutionModel@@UEBAJW4GlobalProperty_t@2@PEAEPEAI@Z.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGlobalProperty(ExecutionModel::Internal *a1, unsigned int a2, DWORD *a3, BYTE *a4)
{
  int v7; // ebx
  __int64 (__fastcall *v8)(__int64, int, BYTE *, DWORD *); // rdi
  int GlobalProperty; // eax
  struct DevPlat::Shared::SimpleLock *v11; // [rsp+20h] [rbp-18h] BYREF
  void *Block; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  Block = 0LL;
  v7 = ExecutionModel::Internal::GcsSrv_Preamble(a1, 0LL, &Block, &v11);
  if ( v7 >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, int, BYTE *, DWORD *))(*(_QWORD *)v11 + 80LL);
    if ( v8 == ExecutionModel::GameConfigStoreServer::GetGlobalProperty )
      GlobalProperty = ExecutionModel::GameConfigStoreServer::GetGlobalProperty((__int64)v11, a2, a4, a3);
    else
      GlobalProperty = v8((__int64)v11, a2, a4, a3);
    v7 = GlobalProperty;
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>(Block);
  return (unsigned int)v7;
}
