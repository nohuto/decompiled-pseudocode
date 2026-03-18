/*
 * XREFs of ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008BBF0
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForCyclePort @ 0x1C00869A0 (imp_WdfUsbTargetDeviceFormatRequestForCyclePort.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008B940 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000DC00 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 */

__int64 __fastcall FxUsbDevice::FormatCycleRequest(FxUsbDevice *this, FxRequestBase *Request)
{
  FxRequestBuffer emptyBuffer; // [rsp+40h] [rbp-28h] BYREF

  emptyBuffer.DataType = FxRequestBufferUnspecified;
  memset(&emptyBuffer.u, 0, sizeof(emptyBuffer.u));
  return FxIoTarget::FormatIoctlRequest(this, Request, 0x22001Fu, 1u, &emptyBuffer, &emptyBuffer);
}
