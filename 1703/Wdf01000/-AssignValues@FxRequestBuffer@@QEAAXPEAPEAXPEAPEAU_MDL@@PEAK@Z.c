/*
 * XREFs of ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C0003524
 * Callers:
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C003D650 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C003DC40 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0093134 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::AssignValues(
        FxRequestBuffer *this,
        _MDL **PPBuffer,
        _MDL **PPMdl,
        unsigned int *BufferLength)
{
  _MDL **p_pMdl; // rdi
  FxRequestBufferType DataType; // ecx
  _MDL **v8; // rdx
  __int32 v9; // ecx
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  _WDFMEMORY_OFFSET *Offsets; // rdx
  unsigned int Length; // eax
  __int32 v14; // ecx
  __int32 v15; // ecx
  _WDFMEMORY_OFFSET *v16; // rax
  _MDL *pMdl; // [rsp+30h] [rbp+8h] BYREF

  p_pMdl = &pMdl;
  DataType = this->DataType;
  if ( PPBuffer )
    p_pMdl = PPBuffer;
  v8 = &pMdl;
  if ( PPMdl )
    v8 = PPMdl;
  v9 = DataType - 1;
  if ( !v9 )
  {
    v10 = ((__int64 (__fastcall *)(IFxMemory *, _MDL **))this->u.Memory.Memory->GetBuffer)(this->u.Memory.Memory, v8);
    LODWORD(v11) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    Offsets = this->u.Memory.Offsets;
    if ( Offsets )
    {
      if ( Offsets->BufferLength )
        v11 = Offsets->BufferLength;
      if ( Offsets->BufferOffset )
        v10 += Offsets->BufferOffset;
    }
    *p_pMdl = (_MDL *)v10;
    goto LABEL_12;
  }
  v14 = v9 - 1;
  if ( !v14 )
  {
    *v8 = this->u.Mdl.Mdl;
    *p_pMdl = 0LL;
    goto LABEL_24;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    *v8 = 0LL;
    *p_pMdl = this->u.Mdl.Mdl;
LABEL_24:
    Length = this->u.Mdl.Length;
    goto LABEL_25;
  }
  if ( v15 != 1 )
  {
    *v8 = 0LL;
    *p_pMdl = 0LL;
    *BufferLength = 0;
    return;
  }
  *v8 = this->u.RefMdl.Mdl;
  *p_pMdl = 0LL;
  v16 = this->u.Memory.Offsets;
  if ( !v16 || !v16->BufferLength )
  {
    LODWORD(v11) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
LABEL_12:
    *BufferLength = v11;
    return;
  }
  Length = v16->BufferLength;
LABEL_25:
  *BufferLength = Length;
}
