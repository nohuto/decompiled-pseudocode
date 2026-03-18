/*
 * XREFs of ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x1C008CC10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C008CAE0 (--1FxUsbPipeRequestContext@@UEAA@XZ.c)
 */

FxUsbPipeRequestContext *__fastcall FxUsbPipeRequestContext::`vector deleting destructor'(
        FxUsbPipeRequestContext *this,
        char a2)
{
  FxUsbPipeRequestContext::~FxUsbPipeRequestContext(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree(this);
  return this;
}
