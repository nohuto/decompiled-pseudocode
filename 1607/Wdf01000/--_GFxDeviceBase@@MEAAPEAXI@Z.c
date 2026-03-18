/*
 * XREFs of ??_GFxDeviceBase@@MEAAPEAXI@Z @ 0x1C0076E30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C00771E4 (--1FxDeviceBase@@MEAA@XZ.c)
 */

FxDeviceBase *__fastcall FxDeviceBase::`scalar deleting destructor'(FxDeviceBase *this, char a2)
{
  FxDeviceBase *v4; // rcx

  FxDeviceBase::~FxDeviceBase(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDeviceBase *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
