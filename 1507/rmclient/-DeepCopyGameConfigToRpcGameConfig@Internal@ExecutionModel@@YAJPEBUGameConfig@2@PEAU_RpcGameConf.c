/*
 * XREFs of ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x180007FE0
 * Callers:
 *     ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180007EB0 (-AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180010AE0 (-ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180008DEC (memcpy_0.c)
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 *     ?Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180010BF8 (-Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z.c)
 *     ?LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z @ 0x180010CCC (-LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z.c)
 */

__int64 __fastcall ExecutionModel::Internal::DeepCopyGameConfigToRpcGameConfig(
        ExecutionModel::Internal *this,
        const struct ExecutionModel::GameConfig *a2,
        struct _RpcGameConfig *a3)
{
  unsigned int v3; // esi
  unsigned __int16 **v4; // r8
  int v6; // ecx
  __int64 v7; // rax
  _WORD *v8; // rbx
  size_t v10; // r15
  void *v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v16; // eax
  void *v17; // rcx
  __int64 v18; // rbx
  int v19; // [rsp+50h] [rbp+18h]
  ExecutionModel::Internal *v20; // [rsp+58h] [rbp+20h]

  v20 = a2;
  v3 = 0;
  LODWORD(v4) = 0;
  v6 = *((_DWORD *)this + 5) - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
      goto LABEL_8;
    *((_DWORD *)a2 + 5) = 2;
    v16 = ExecutionModel::Internal::LocalStringToRpcString(
            *((ExecutionModel::Internal **)this + 3),
            (const unsigned __int16 *const)a2 + 16,
            0LL);
    v19 = v16;
    LODWORD(v4) = v16;
    if ( v16 >= 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
  *((_DWORD *)a2 + 5) = 1;
  v7 = -1LL;
  v8 = (_WORD *)*((_QWORD *)this + 3);
  while ( v8[++v7] != 0 )
    ;
  v10 = 2 * v7 + 2;
  v11 = malloc(v10);
  v12 = v11;
  if ( !v11 )
  {
    v14 = -2147024882;
    LODWORD(v4) = -2147024882;
    goto LABEL_9;
  }
  memcpy_0(v11, v8, v10);
  *((_QWORD *)v20 + 3) = v12;
  v13 = *((unsigned int *)this + 4);
  v19 = 0;
  if ( !(_DWORD)v13 )
  {
LABEL_6:
    *((_DWORD *)v20 + 4) = 0;
    *((_QWORD *)v20 + 1) = 0LL;
LABEL_7:
    *((_DWORD *)v20 + 10) = *((_DWORD *)this + 8);
    *(_DWORD *)v20 = *(_DWORD *)this;
    LODWORD(v4) = v19;
LABEL_8:
    v14 = (unsigned int)v4;
    goto LABEL_9;
  }
  *((_QWORD *)v20 + 1) = malloc(16 * v13);
  v17 = (void *)*((_QWORD *)v20 + 1);
  if ( v17 )
  {
    memset_0(v17, 0, 16LL * *((unsigned int *)this + 4));
    if ( !*((_DWORD *)this + 4) )
    {
LABEL_21:
      *((_DWORD *)v20 + 4) = *((_DWORD *)this + 4);
      goto LABEL_7;
    }
    while ( 1 )
    {
      v18 = 16LL * v3;
      v16 = ExecutionModel::Internal::LocalStringToRpcString(
              *(ExecutionModel::Internal **)(*((_QWORD *)this + 1) + v18 + 8),
              (const unsigned __int16 *const)(v18 + *((_QWORD *)v20 + 1) + 8LL),
              v4);
      v19 = v16;
      v4 = (unsigned __int16 **)(unsigned int)v16;
      if ( v16 < 0 )
        break;
      ++v3;
      a2 = (const struct ExecutionModel::GameConfig *)*((_QWORD *)this + 1);
      *(_DWORD *)(v18 + *((_QWORD *)v20 + 1)) = *(_DWORD *)((char *)a2 + v18);
      if ( v3 >= *((_DWORD *)this + 4) )
        goto LABEL_21;
    }
LABEL_14:
    v14 = v16;
    goto LABEL_9;
  }
  LODWORD(v4) = 0;
  v14 = -2147024882;
LABEL_9:
  if ( (int)v4 < 0 )
    ExecutionModel::Internal::Cleanup_DeepCopyGameConfigToRpcGameConfig(v20, a2);
  return v14;
}
