/*
 * XREFs of ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00034B8
 * Callers:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C00013E0 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0028E58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C003C9B0 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C00891FC (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C008B770 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0091E1C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0092084 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxRequestBuffer::GetBufferLength(FxRequestBuffer *this)
{
  _WDFMEMORY_OFFSET *Offsets; // rcx

  if ( this->DataType != FxRequestBufferMemory )
  {
    if ( this->DataType == FxRequestBufferMdl || this->DataType == FxRequestBufferBuffer )
      return this->u.Mdl.Length;
    if ( this->DataType != FxRequestBufferReferencedMdl )
      return 0LL;
  }
  Offsets = this->u.Memory.Offsets;
  if ( !Offsets || !Offsets->BufferOffset && !Offsets->BufferLength )
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  if ( Offsets->BufferLength )
    return LODWORD(Offsets->BufferLength);
  return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory)
       - this->u.Memory.Offsets->BufferOffset;
}
