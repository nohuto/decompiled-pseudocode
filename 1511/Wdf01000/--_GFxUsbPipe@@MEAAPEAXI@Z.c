/*
 * XREFs of ??_GFxUsbPipe@@MEAAPEAXI@Z @ 0x1C007F640
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x1C007F454 (--1FxUsbPipe@@MEAA@XZ.c)
 */

FxUsbPipe *__fastcall FxUsbPipe::`scalar deleting destructor'(FxUsbPipe *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxUsbPipe *v5; // rcx

  v3 = a2;
  FxUsbPipe::~FxUsbPipe(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxUsbPipe *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
