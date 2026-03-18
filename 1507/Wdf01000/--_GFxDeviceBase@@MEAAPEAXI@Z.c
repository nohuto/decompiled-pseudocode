/*
 * XREFs of ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x1C0074DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C0074CB0 (--1FxDeviceBase@@MEAA@XZ.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::`scalar deleting destructor'(
        FxDeviceBase *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxDeviceBase *v5; // rcx

  v3 = a2;
  FxDeviceBase::~FxDeviceBase(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxDeviceBase *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
