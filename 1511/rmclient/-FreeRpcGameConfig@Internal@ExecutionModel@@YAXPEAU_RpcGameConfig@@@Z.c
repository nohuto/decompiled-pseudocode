/*
 * XREFs of ?FreeRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180011A24
 * Callers:
 *     ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180011460 (-AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180011680 (-ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::Internal::FreeRpcGameConfig(ExecutionModel::Internal *this, struct _RpcGameConfig *a2)
{
  unsigned int v2; // edi
  void *v4; // rcx

  if ( this )
  {
    v2 = 0;
    if ( *((_DWORD *)this + 5) == 1 )
      v4 = (void *)*((_QWORD *)this + 3);
    else
      v4 = (void *)*((_QWORD *)this + 4);
    free(v4);
    if ( *((_DWORD *)this + 4) )
    {
      do
        free(*(void **)(*((_QWORD *)this + 1) + 16LL * v2++ + 8));
      while ( v2 < *((_DWORD *)this + 4) );
    }
    free(*((void **)this + 1));
    free(this);
  }
}
