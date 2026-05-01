/*
 * XREFs of ?Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180010BF8
 * Callers:
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x180007FE0 (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::Internal::Cleanup_DeepCopyGameConfigToRpcGameConfig(
        void **this,
        struct _RpcGameConfig *a2)
{
  unsigned int i; // edi

  free(this[3]);
  free(this[4]);
  for ( i = 0; i < *((_DWORD *)this + 4); ++i )
    free(*((void **)this[1] + 2 * i + 1));
  memset_0(this, 0, 0x30uLL);
}
