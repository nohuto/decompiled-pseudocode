/*
 * XREFs of GcsSrv_GetGameConfigSizeForClientProcess @ 0x180043280
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall GcsSrv_GetGameConfigSizeForClientProcess(ExecutionModel::Internal *Binding, __int64 a2)
{
  int v4; // ebx
  RPC_STATUS v5; // eax
  struct DevPlat::Shared::SimpleLock *v6; // rdi
  __int64 v7; // rax
  unsigned int Pid; // [rsp+20h] [rbp-40h] BYREF
  void *Block; // [rsp+28h] [rbp-38h] BYREF
  struct DevPlat::Shared::SimpleLock *v11[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF

  v11[0] = 0LL;
  Block = 0LL;
  v4 = ExecutionModel::Internal::GcsSrv_Preamble(Binding, 0LL, &Block, v11);
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
      v6 = v11[0];
      v12 = xmmword_180052890;
      v4 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, _QWORD, __int128 *))(*(_QWORD *)v11[0] + 32LL))(
             v11[0],
             Pid,
             &v12);
      if ( v4 >= 0 )
      {
        v7 = *(_QWORD *)v6;
        *(_OWORD *)v11 = v12;
        v4 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, struct DevPlat::Shared::SimpleLock **, _QWORD, __int64))(v7 + 24))(
               v6,
               v11,
               0LL,
               a2);
      }
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v4;
}
