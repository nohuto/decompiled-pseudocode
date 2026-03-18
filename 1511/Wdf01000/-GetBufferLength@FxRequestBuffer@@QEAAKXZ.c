/*
 * XREFs of ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0001F68
 * Callers:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C000186C (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0019E44 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0034358 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0076F18 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00786E0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007CE0C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C007D068 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxRequestBuffer::GetBufferLength(FxRequestBuffer *this)
{
  __int64 v2; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rcx

  v2 = (unsigned int)(this->DataType - 1);
  if ( this->DataType != FxRequestBufferMemory )
  {
    if ( this->DataType == FxRequestBufferMdl )
      return this->u.Mdl.Length;
    v2 = (unsigned int)(this->DataType - 3);
    if ( this->DataType == FxRequestBufferBuffer )
      return this->u.Mdl.Length;
    if ( this->DataType != FxRequestBufferReferencedMdl )
      return 0LL;
  }
  Offsets = this->u.Memory.Offsets;
  if ( !Offsets || !Offsets->BufferOffset && !Offsets->BufferLength )
    return ((__int64 (__fastcall *)(IFxMemory *, __int64))this->u.Memory.Memory->GetBufferSize)(
             this->u.Memory.Memory,
             v2);
  if ( Offsets->BufferLength )
    return LODWORD(Offsets->BufferLength);
  return ((unsigned int (__fastcall *)(IFxMemory *, __int64))this->u.Memory.Memory->GetBufferSize)(
           this->u.Memory.Memory,
           v2)
       - this->u.Memory.Offsets->BufferOffset;
}
