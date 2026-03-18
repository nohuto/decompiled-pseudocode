/*
 * XREFs of ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C0088ECC
 * Callers:
 *     ?Dispose@FxUsbPipe@@MEAAEXZ @ 0x1C0089050 (-Dispose@FxUsbPipe@@MEAAEXZ.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0089AE0 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeContinuousReader@@QEAA@XZ @ 0x1C0088D24 (--1FxUsbPipeContinuousReader@@QEAA@XZ.c)
 */

FxUsbPipeContinuousReader *__fastcall FxUsbPipeContinuousReader::`scalar deleting destructor'(
        FxUsbPipeContinuousReader *this)
{
  FxUsbPipeContinuousReader::~FxUsbPipeContinuousReader(this);
  if ( this )
    FxPoolFree(this);
  return this;
}
