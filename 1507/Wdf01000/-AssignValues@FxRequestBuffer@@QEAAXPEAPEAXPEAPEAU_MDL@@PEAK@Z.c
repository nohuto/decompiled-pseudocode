/*
 * XREFs of ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00A6CFC
 * Callers:
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C008EF2C (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00919C0 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0093630 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::AssignValues(
        FxRequestBuffer *this,
        void **PPBuffer,
        _MDL **PPMdl,
        unsigned int *BufferLength)
{
  void **p_pBuffer; // rdi
  FxRequestBufferType DataType; // ecx
  void **v8; // rdx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  _WDFMEMORY_OFFSET *v12; // rax
  unsigned int Length; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  _WDFMEMORY_OFFSET *Offsets; // rdx
  void *pBuffer; // [rsp+30h] [rbp+8h] BYREF

  p_pBuffer = &pBuffer;
  DataType = this->DataType;
  if ( PPBuffer )
    p_pBuffer = PPBuffer;
  v8 = &pBuffer;
  if ( PPMdl )
    v8 = (void **)PPMdl;
  v9 = DataType - 1;
  if ( !v9 )
  {
    v15 = ((__int64 (__fastcall *)(IFxMemory *, void **))this->u.Memory.Memory->GetBuffer)(this->u.Memory.Memory, v8);
    LODWORD(v14) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    Offsets = this->u.Memory.Offsets;
    if ( Offsets )
    {
      if ( Offsets->BufferLength )
        v14 = Offsets->BufferLength;
      if ( Offsets->BufferOffset )
        v15 += Offsets->BufferOffset;
    }
    *p_pBuffer = (void *)v15;
    goto LABEL_24;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *v8 = this->u.Memory.Memory;
    *p_pBuffer = 0LL;
    goto LABEL_16;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *v8 = 0LL;
    *p_pBuffer = this->u.Memory.Memory;
LABEL_16:
    Length = this->u.Mdl.Length;
    goto LABEL_17;
  }
  if ( v11 != 1 )
  {
    *v8 = 0LL;
    *p_pBuffer = 0LL;
    *BufferLength = 0;
    return;
  }
  *v8 = this->u.RefMdl.Mdl;
  *p_pBuffer = 0LL;
  v12 = this->u.Memory.Offsets;
  if ( v12 && v12->BufferLength )
  {
    Length = v12->BufferLength;
LABEL_17:
    *BufferLength = Length;
    return;
  }
  LODWORD(v14) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
LABEL_24:
  *BufferLength = v14;
}
