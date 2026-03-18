/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0029774
 * Callers:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0001628 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C00017AC (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C00295F4 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C002F260 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C00396E0 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C0039AF0 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     FxIoTargetFormatIo @ 0x1C0081B00 (FxIoTargetFormatIo.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C00879A0 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C0087B50 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
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
