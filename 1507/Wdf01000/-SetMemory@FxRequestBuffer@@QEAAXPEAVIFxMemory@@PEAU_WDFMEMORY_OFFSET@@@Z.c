/*
 * XREFs of ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C
 * Callers:
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C002DDA0 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     FxIoTargetFormatIo @ 0x1C00810F0 (FxIoTargetFormatIo.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0086E30 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00870C0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForUrb @ 0x1C0089180 (imp_WdfUsbTargetDeviceFormatRequestForUrb.c)
 *     imp_WdfUsbTargetPipeFormatRequestForUrb @ 0x1C008A330 (imp_WdfUsbTargetPipeFormatRequestForUrb.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C0091B24 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
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
