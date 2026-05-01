/*
 * XREFs of GcsSrv_GetGameConfigForClientProcess @ 0x1800430E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z @ 0x180004AE0 (--$AutoPtrDeallocate@VSimpleLock@Shared@DevPlat@@@Common@@YAXPEAVSimpleLock@Shared@DevPlat@@@Z.c)
 *     ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490 (-GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGame.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?PackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z @ 0x1800463D0 (-PackGameConfig@Internal@ExecutionModel@@YAJPEAUGameConfig@2@I@Z.c)
 */

__int64 __fastcall GcsSrv_GetGameConfigForClientProcess(
        ExecutionModel::Internal *Binding,
        unsigned int *a2,
        ExecutionModel::Internal *a3)
{
  int v6; // ebx
  RPC_STATUS v7; // eax
  struct DevPlat::Shared::SimpleLock *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned int Pid; // [rsp+20h] [rbp-40h] BYREF
  void *Block; // [rsp+28h] [rbp-38h] BYREF
  struct DevPlat::Shared::SimpleLock *v14[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  v14[0] = 0LL;
  Block = 0LL;
  v6 = ExecutionModel::Internal::GcsSrv_Preamble(Binding, 0LL, &Block, v14);
  if ( v6 >= 0 )
  {
    Pid = 0;
    v7 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
    v6 = v7;
    if ( v7 )
    {
      if ( v7 > 0 )
        v6 = (unsigned __int16)v7 | 0x80070000;
    }
    else
    {
      v8 = v14[0];
      v15 = xmmword_180052890;
      v6 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, _QWORD, __int128 *))(*(_QWORD *)v14[0] + 32LL))(
             v14[0],
             Pid,
             &v15);
      if ( v6 >= 0 )
      {
        v9 = *(_QWORD *)v8;
        *(_OWORD *)v14 = v15;
        v6 = (*(__int64 (__fastcall **)(struct DevPlat::Shared::SimpleLock *, struct DevPlat::Shared::SimpleLock **, ExecutionModel::Internal *, unsigned int *))(v9 + 24))(
               v8,
               v14,
               a3,
               a2);
        if ( v6 >= 0 )
          v6 = ExecutionModel::Internal::PackGameConfig(a3, (struct ExecutionModel::GameConfig *)*a2, v10);
      }
    }
  }
  Common::AutoPtrDeallocate<DevPlat::Shared::SimpleLock>((LPCRITICAL_SECTION *)Block);
  return (unsigned int)v6;
}
