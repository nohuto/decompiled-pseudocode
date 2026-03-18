/*
 * XREFs of ??_EFxUsbPipeTransferContext@@UEAAPEAXI@Z @ 0x1C0090570
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeTransferContext@@UEAA@XZ @ 0x1C0090478 (--1FxUsbPipeTransferContext@@UEAA@XZ.c)
 */

FxUsbPipeTransferContext *__fastcall FxUsbPipeTransferContext::`vector deleting destructor'(
        FxUsbPipeTransferContext *this,
        char a2)
{
  FxUsbPipeTransferContext::~FxUsbPipeTransferContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
