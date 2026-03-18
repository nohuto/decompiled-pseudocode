/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0019F00
 * Callers:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C000186C (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0003BB4 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0019D80 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0031DD0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C00346A0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C00348E0 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     FxIoTargetFormatIo @ 0x1C0073B60 (FxIoTargetFormatIo.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0078530 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00786E0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::SetMemory(FxRequestBuffer *this, IFxMemory *Memory, _WDFMEMORY_OFFSET *Offsets)
{
  _MDL *v6; // rax

  v6 = Memory->GetMdl(Memory);
  this->u.Memory.Memory = Memory;
  this->u.Memory.Offsets = Offsets;
  if ( v6 )
  {
    this->DataType = FxRequestBufferReferencedMdl;
    this->u.RefMdl.Mdl = v6;
  }
  else
  {
    this->DataType = FxRequestBufferMemory;
  }
}
