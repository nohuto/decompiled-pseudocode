/*
 * XREFs of ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x1800118AC
 * Callers:
 *     ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180011460 (-AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180011680 (-ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800095EC (memset_0.c)
 *     ?Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180011848 (-Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z.c)
 *     ?LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z @ 0x180011A94 (-LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::DeepCopyGameConfigToRpcGameConfig(
        ExecutionModel::Internal *this,
        const struct ExecutionModel::GameConfig *a2,
        struct _RpcGameConfig *a3)
{
  unsigned __int16 **v4; // r8
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rcx
  unsigned int i; // esi
  __int64 v10; // rdi
  int v12; // [rsp+40h] [rbp+20h]
  ExecutionModel::Internal *v13; // [rsp+48h] [rbp+28h]

  v13 = a2;
  LODWORD(v4) = 0;
  v5 = *((_DWORD *)this + 5) - 1;
  if ( !v5 )
  {
    *((_DWORD *)a2 + 5) = 1;
    v6 = ExecutionModel::Internal::LocalStringToRpcString(
           *((ExecutionModel::Internal **)this + 3),
           (const unsigned __int16 *const)a2 + 12,
           0LL);
    v12 = v6;
    LODWORD(v4) = v6;
    if ( v6 < 0 )
      goto LABEL_4;
    if ( *((_DWORD *)this + 4) )
    {
      *((_QWORD *)v13 + 1) = malloc(16LL * *((unsigned int *)this + 4));
      v8 = (void *)*((_QWORD *)v13 + 1);
      if ( !v8 )
      {
        LODWORD(v4) = v12;
        v7 = -2147024882;
        goto LABEL_16;
      }
      memset_0(v8, 0, 16LL * *((unsigned int *)this + 4));
      for ( i = 0; i < *((_DWORD *)this + 4); *(_DWORD *)(v10 + *((_QWORD *)v13 + 1)) = *(_DWORD *)((char *)a2 + v10) )
      {
        v10 = 16LL * i;
        v6 = ExecutionModel::Internal::LocalStringToRpcString(
               *(ExecutionModel::Internal **)(*((_QWORD *)this + 1) + v10 + 8),
               (const unsigned __int16 *const)(v10 + *((_QWORD *)v13 + 1) + 8LL),
               v4);
        v12 = v6;
        v4 = (unsigned __int16 **)(unsigned int)v6;
        if ( v6 < 0 )
          goto LABEL_4;
        ++i;
        a2 = (const struct ExecutionModel::GameConfig *)*((_QWORD *)this + 1);
      }
      *((_DWORD *)v13 + 4) = *((_DWORD *)this + 4);
      goto LABEL_14;
    }
LABEL_13:
    *((_DWORD *)v13 + 4) = 0;
    *((_QWORD *)v13 + 1) = 0LL;
LABEL_14:
    *((_DWORD *)v13 + 10) = *((_DWORD *)this + 8);
    *(_DWORD *)v13 = *(_DWORD *)this;
    LODWORD(v4) = v12;
    goto LABEL_15;
  }
  if ( v5 == 1 )
  {
    *((_DWORD *)a2 + 5) = 2;
    v6 = ExecutionModel::Internal::LocalStringToRpcString(
           *((ExecutionModel::Internal **)this + 3),
           (const unsigned __int16 *const)a2 + 16,
           0LL);
    v12 = v6;
    LODWORD(v4) = v6;
    if ( v6 < 0 )
    {
LABEL_4:
      v7 = v6;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
LABEL_15:
  v7 = (unsigned int)v4;
LABEL_16:
  if ( (int)v4 < 0 )
    ExecutionModel::Internal::Cleanup_DeepCopyGameConfigToRpcGameConfig((void **)v13, a2);
  return v7;
}
