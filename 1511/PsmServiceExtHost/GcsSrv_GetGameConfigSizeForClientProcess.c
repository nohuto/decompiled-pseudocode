/*
 * XREFs of GcsSrv_GetGameConfigSizeForClientProcess @ 0x18001D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     ?GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z @ 0x18001C740 (-GetGameIdByPID@GameConfigStoreServer@ExecutionModel@@UEBAJKPEAU_GUID@@@Z.c)
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180020030 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameConfigSizeForClientProcess(ExecutionModel::Internal *Binding, __int64 a2)
{
  int v4; // ebx
  RPC_STATUS v5; // eax
  struct DevPlat::Shared::SimpleLock *v6; // rdi
  __int64 (__fastcall *v7)(ExecutionModel::GameConfigStoreServer *, DWORD, struct _GUID *); // rbx
  int GameIdByPID; // eax
  __int64 v10; // rax
  unsigned int Pid; // [rsp+20h] [rbp-40h] BYREF
  void *Block; // [rsp+28h] [rbp-38h] BYREF
  struct DevPlat::Shared::SimpleLock *v13[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _GUID v14; // [rsp+40h] [rbp-20h] BYREF

  v13[0] = 0LL;
  Block = 0LL;
  v4 = ExecutionModel::Internal::GcsSrv_Preamble(Binding, 0LL, &Block, v13);
  if ( v4 >= 0 )
  {
    Pid = 0;
    v5 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
    v4 = v5;
    if ( v5 )
    {
      if ( v5 > 0 )
        v4 = (unsigned __int16)v5 | 0x80070000;
    }
    else
    {
      v6 = v13[0];
      v14 = (struct _GUID)xmmword_180059740;
      v7 = *(__int64 (__fastcall **)(ExecutionModel::GameConfigStoreServer *, DWORD, struct _GUID *))(*(_QWORD *)v13[0] + 32LL);
      if ( v7 == ExecutionModel::GameConfigStoreServer::GetGameIdByPID )
        GameIdByPID = ExecutionModel::GameConfigStoreServer::GetGameIdByPID(v13[0], Pid, &v14);
      else
        GameIdByPID = v7(v13[0], Pid, &v14);
      v4 = GameIdByPID;
      if ( GameIdByPID >= 0 )
      {
        v10 = *(_QWORD *)v6;
        *(struct _GUID *)v13 = v14;
        v4 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, struct DevPlat::Shared::SimpleLock **, _QWORD, __int64))(v10 + 24))(
               v6,
               v13,
               0LL,
               a2);
      }
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>(Block);
  return (unsigned int)v4;
}
