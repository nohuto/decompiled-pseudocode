/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0028F20
 * Callers:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C00013E0 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C000332C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C0028D90 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0039DF0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C003CD80 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C003D200 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     FxIoTargetFormatIo @ 0x1C0085FA0 (FxIoTargetFormatIo.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C008B590 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C008B770 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
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
