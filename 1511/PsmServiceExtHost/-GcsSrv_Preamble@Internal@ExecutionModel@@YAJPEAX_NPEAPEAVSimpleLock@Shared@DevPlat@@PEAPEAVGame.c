/*
 * XREFs of ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x18001BF84
 * Callers:
 *     GcsSrv_GetGameIdByAUMID @ 0x180005640 (GcsSrv_GetGameIdByAUMID.c)
 *     GcsSrv_GetGlobalProperty @ 0x18001CFA0 (GcsSrv_GetGlobalProperty.c)
 *     GcsSrv_GetGameIdByPID @ 0x18001D040 (GcsSrv_GetGameIdByPID.c)
 *     GcsSrv_GetGameConfigSizeForClientProcess @ 0x18001D0E0 (GcsSrv_GetGameConfigSizeForClientProcess.c)
 *     GcsSrv_SetGlobalProperty @ 0x180025B90 (GcsSrv_SetGlobalProperty.c)
 *     GcsSrv_AddGameConfig @ 0x180047F50 (GcsSrv_AddGameConfig.c)
 *     GcsSrv_GetAllGameIds @ 0x180048010 (GcsSrv_GetAllGameIds.c)
 *     GcsSrv_GetGameConfig @ 0x1800480A0 (GcsSrv_GetGameConfig.c)
 *     GcsSrv_GetGameConfigForClientProcess @ 0x180048160 (GcsSrv_GetGameConfigForClientProcess.c)
 *     GcsSrv_GetGameConfigSize @ 0x180048260 (GcsSrv_GetGameConfigSize.c)
 *     GcsSrv_GetGameIdCount @ 0x180048300 (GcsSrv_GetGameIdCount.c)
 *     GcsSrv_GetGameIdsByExeName @ 0x180048380 (GcsSrv_GetGameIdsByExeName.c)
 *     GcsSrv_GetGameIdsByExeNameCount @ 0x180048420 (GcsSrv_GetGameIdsByExeNameCount.c)
 *     GcsSrv_GetGameProperty @ 0x1800484B0 (GcsSrv_GetGameProperty.c)
 *     GcsSrv_GetGamePropertySize @ 0x180048550 (GcsSrv_GetGamePropertySize.c)
 *     GcsSrv_GetGlobalPropertySize @ 0x1800485F0 (GcsSrv_GetGlobalPropertySize.c)
 *     GcsSrv_ModifyGameConfig @ 0x180048680 (GcsSrv_ModifyGameConfig.c)
 *     GcsSrv_RemoveGameConfig @ 0x180048740 (GcsSrv_RemoveGameConfig.c)
 *     GcsSrv_SetGameProperty @ 0x1800487C0 (GcsSrv_SetGameProperty.c)
 * Callees:
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x18001C0CC (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 *     ?GetCallerUserSID@Internal@ExecutionModel@@YAJPEAXPEAPEAG@Z @ 0x18001C384 (-GetCallerUserSID@Internal@ExecutionModel@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetClientThreadToken@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x18001C43C (-GetClientThreadToken@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 *     ??1?$_UndoSolo@V_lambda_85164ddd05a0d2639712f0aec3656cd0_@@@tlx@@QEAA@XZ @ 0x180036A88 (--1-$_UndoSolo@V_lambda_85164ddd05a0d2639712f0aec3656cd0_@@@tlx@@QEAA@XZ.c)
 *     ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x180047E90 (-CloseHandleHelper@Common@@YAXPEAX@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::GcsSrv_Preamble(
        ExecutionModel::Internal *this,
        void *a2,
        _QWORD *a3,
        struct DevPlat::Shared::SimpleLock **a4)
{
  char v6; // di
  RPC_STATUS v7; // eax
  void **v8; // rdx
  int ClientThreadToken; // ebx
  void *v10; // rdx
  unsigned __int16 **v11; // r8
  _BYTE *v12; // rax
  struct ExecutionModel::GameConfigStoreServer **v13; // r8
  _BYTE *v14; // rbx
  int v16; // ebx
  _BYTE v17[8]; // [rsp+20h] [rbp-30h] BYREF
  HANDLE hObject; // [rsp+28h] [rbp-28h] BYREF
  HLOCAL hMem; // [rsp+30h] [rbp-20h] BYREF
  RPC_BINDING_HANDLE *p_BindingHandle; // [rsp+38h] [rbp-18h] BYREF
  char v21; // [rsp+40h] [rbp-10h]
  RPC_BINDING_HANDLE BindingHandle; // [rsp+70h] [rbp+20h] BYREF

  BindingHandle = this;
  hMem = 0LL;
  v6 = (char)a2;
  v7 = RpcImpersonateClient(this);
  ClientThreadToken = v7;
  if ( !v7 )
  {
    hObject = 0LL;
    p_BindingHandle = &BindingHandle;
    v21 = 1;
    ClientThreadToken = ExecutionModel::Internal::GetClientThreadToken(&hObject, v8);
    if ( ClientThreadToken >= 0 )
    {
      if ( v6 != 1 )
        goto LABEL_4;
      v17[0] = 0;
      v16 = CapabilityCheck(hObject, L"gameConfigStoreManagement", v17);
      if ( v16 < 0 )
      {
        ClientThreadToken = v16 | 0x10000000;
        goto LABEL_22;
      }
      if ( v17[0] )
      {
LABEL_4:
        ClientThreadToken = ExecutionModel::Internal::GetCallerUserSID(hObject, (LPWSTR *)&hMem, v11);
        if ( ClientThreadToken >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          RpcRevertToSelfEx(BindingHandle);
          v12 = malloc(0x10uLL);
          v14 = v12;
          if ( v12 )
          {
            v12[8] = 0;
            *(_QWORD *)v12 = &ExecutionModel::Internal::_lock;
            EnterCriticalSection(&ExecutionModel::Internal::_lock);
          }
          else
          {
            v14 = 0LL;
          }
          *a3 = v14;
          if ( v14 )
            ClientThreadToken = ExecutionModel::Internal::GetGameConfigStoreServer(
                                  (ExecutionModel::Internal *)hMem,
                                  (const unsigned __int16 *)a4,
                                  v13);
          else
            ClientThreadToken = -2147024882;
          goto LABEL_11;
        }
      }
      else
      {
        ClientThreadToken = -2147024891;
      }
    }
LABEL_22:
    Common::CloseHandleHelper((Common *)hObject, v10);
    tlx::_UndoSolo<_lambda_85164ddd05a0d2639712f0aec3656cd0_>::~_UndoSolo<_lambda_85164ddd05a0d2639712f0aec3656cd0_>(&p_BindingHandle);
    goto LABEL_11;
  }
  if ( v7 > 0 )
    ClientThreadToken = (unsigned __int16)v7 | 0x80070000;
LABEL_11:
  if ( hMem )
    LocalFree(hMem);
  return (unsigned int)ClientThreadToken;
}
