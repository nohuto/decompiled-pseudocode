/*
 * XREFs of ?GcsSrv_Preamble@Internal@ExecutionModel@@YAJPEAX_NPEAPEAVSimpleLock@Shared@DevPlat@@PEAPEAVGameConfigStoreServer@2@@Z @ 0x180007490
 * Callers:
 *     GcsSrv_GetGameIdByAUMID @ 0x180002A60 (GcsSrv_GetGameIdByAUMID.c)
 *     GcsSrv_GetGlobalProperty @ 0x180006E90 (GcsSrv_GetGlobalProperty.c)
 *     GcsSrv_GetGameIdByPID @ 0x1800073E0 (GcsSrv_GetGameIdByPID.c)
 *     GcsSrv_SetGlobalProperty @ 0x18001B2D0 (GcsSrv_SetGlobalProperty.c)
 *     GcsSrv_AddGameConfig @ 0x18001B450 (GcsSrv_AddGameConfig.c)
 *     GcsSrv_GetAllGameIds @ 0x180042F90 (GcsSrv_GetAllGameIds.c)
 *     GcsSrv_GetGameConfig @ 0x180043020 (GcsSrv_GetGameConfig.c)
 *     GcsSrv_GetGameConfigForClientProcess @ 0x1800430E0 (GcsSrv_GetGameConfigForClientProcess.c)
 *     GcsSrv_GetGameConfigSize @ 0x1800431E0 (GcsSrv_GetGameConfigSize.c)
 *     GcsSrv_GetGameConfigSizeForClientProcess @ 0x180043280 (GcsSrv_GetGameConfigSizeForClientProcess.c)
 *     GcsSrv_GetGameIdCount @ 0x180043380 (GcsSrv_GetGameIdCount.c)
 *     GcsSrv_GetGameIdsByExeName @ 0x180043400 (GcsSrv_GetGameIdsByExeName.c)
 *     GcsSrv_GetGameIdsByExeNameCount @ 0x1800434A0 (GcsSrv_GetGameIdsByExeNameCount.c)
 *     GcsSrv_GetGameProperty @ 0x180043530 (GcsSrv_GetGameProperty.c)
 *     GcsSrv_GetGamePropertySize @ 0x1800435D0 (GcsSrv_GetGamePropertySize.c)
 *     GcsSrv_GetGlobalPropertySize @ 0x180043670 (GcsSrv_GetGlobalPropertySize.c)
 *     GcsSrv_ModifyGameConfig @ 0x180043700 (GcsSrv_ModifyGameConfig.c)
 *     GcsSrv_RemoveGameConfig @ 0x1800437A0 (GcsSrv_RemoveGameConfig.c)
 *     GcsSrv_SetGameProperty @ 0x180043820 (GcsSrv_SetGameProperty.c)
 * Callees:
 *     ?CloseHandleHelper@Common@@YAXPEAX@Z @ 0x1800053B4 (-CloseHandleHelper@Common@@YAXPEAX@Z.c)
 *     ??1?$_UndoSolo@V_lambda_85164ddd05a0d2639712f0aec3656cd0_@@@tlx@@QEAA@XZ @ 0x180006CCC (--1-$_UndoSolo@V_lambda_85164ddd05a0d2639712f0aec3656cd0_@@@tlx@@QEAA@XZ.c)
 *     ?GetClientThreadToken@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800075F4 (-GetClientThreadToken@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 *     ?GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z @ 0x180007630 (-GetGameConfigStoreServer@Internal@ExecutionModel@@YAJPEBGPEAPEAVGameConfigStoreServer@2@@Z.c)
 *     ?GetCallerUserSID@Internal@ExecutionModel@@YAJPEAXPEAPEAG@Z @ 0x1800077E8 (-GetCallerUserSID@Internal@ExecutionModel@@YAJPEAXPEAPEAG@Z.c)
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
  int v12; // ebx
  _BYTE *v13; // rax
  struct ExecutionModel::GameConfigStoreServer **v14; // r8
  _BYTE *v15; // rbx
  _BYTE v17[8]; // [rsp+20h] [rbp-48h] BYREF
  HANDLE hObject; // [rsp+28h] [rbp-40h] BYREF
  HLOCAL hMem; // [rsp+30h] [rbp-38h] BYREF
  RPC_BINDING_HANDLE *p_BindingHandle; // [rsp+38h] [rbp-30h] BYREF
  char v21; // [rsp+40h] [rbp-28h]
  RPC_BINDING_HANDLE BindingHandle; // [rsp+70h] [rbp+8h] BYREF

  BindingHandle = this;
  hMem = 0LL;
  v6 = (char)a2;
  v7 = RpcImpersonateClient(this);
  ClientThreadToken = v7;
  if ( !v7 )
  {
    v21 = 1;
    p_BindingHandle = &BindingHandle;
    hObject = 0LL;
    ClientThreadToken = ExecutionModel::Internal::GetClientThreadToken(&hObject, v8);
    if ( ClientThreadToken >= 0 )
    {
      if ( v6 != 1 )
        goto LABEL_6;
      v17[0] = 0;
      v12 = CapabilityCheck(hObject, L"gameConfigStoreManagement", v17);
      if ( v12 < 0 )
      {
        ClientThreadToken = v12 | 0x10000000;
        goto LABEL_17;
      }
      if ( !v17[0] )
      {
        ClientThreadToken = -2147024891;
      }
      else
      {
LABEL_6:
        ClientThreadToken = ExecutionModel::Internal::GetCallerUserSID(hObject, (LPWSTR *)&hMem, v11);
        if ( ClientThreadToken >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          RpcRevertToSelfEx(BindingHandle);
          v13 = malloc(0x10uLL);
          v15 = v13;
          if ( v13 )
          {
            v13[8] = 0;
            *(_QWORD *)v13 = &ExecutionModel::Internal::_lock;
            EnterCriticalSection(&ExecutionModel::Internal::_lock);
          }
          else
          {
            v15 = 0LL;
          }
          *a3 = v15;
          if ( v15 )
            ClientThreadToken = ExecutionModel::Internal::GetGameConfigStoreServer(
                                  (ExecutionModel::Internal *)hMem,
                                  (const unsigned __int16 *)a4,
                                  v14);
          else
            ClientThreadToken = -2147024882;
          goto LABEL_13;
        }
      }
    }
LABEL_17:
    Common::CloseHandleHelper((Common *)hObject, v10);
    tlx::_UndoSolo<_lambda_85164ddd05a0d2639712f0aec3656cd0_>::~_UndoSolo<_lambda_85164ddd05a0d2639712f0aec3656cd0_>((__int64)&p_BindingHandle);
    goto LABEL_13;
  }
  if ( v7 > 0 )
    ClientThreadToken = (unsigned __int16)v7 | 0x80070000;
LABEL_13:
  if ( hMem )
    LocalFree(hMem);
  return (unsigned int)ClientThreadToken;
}
