/*
 * XREFs of ??_EFxUsbInterface@@MEAAPEAXI@Z @ 0x1C008D040
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x1C008CF88 (--1FxUsbInterface@@MEAA@XZ.c)
 */

FxUsbInterface *__fastcall FxUsbInterface::`vector deleting destructor'(FxUsbInterface *this, char a2)
{
  FxUsbInterface *v4; // rcx

  FxUsbInterface::~FxUsbInterface(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxUsbInterface *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
