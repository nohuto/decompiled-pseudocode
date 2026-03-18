/*
 * XREFs of ??_EFxUsbDeviceControlContext@@UEAAPEAXI@Z @ 0x1C008B5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbDeviceControlContext@@UEAA@XZ @ 0x1C008B4A4 (--1FxUsbDeviceControlContext@@UEAA@XZ.c)
 */

FxUsbDeviceControlContext *__fastcall FxUsbDeviceControlContext::`vector deleting destructor'(
        FxUsbDeviceControlContext *this,
        char a2)
{
  FxUsbDeviceControlContext::~FxUsbDeviceControlContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
