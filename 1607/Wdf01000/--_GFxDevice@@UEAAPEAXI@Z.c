/*
 * XREFs of ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C0079860
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C0079588 (--1FxDevice@@UEAA@XZ.c)
 */

FxDevice *__fastcall FxDevice::`scalar deleting destructor'(FxDevice *this, char a2)
{
  FxDevice *v4; // rcx

  FxDevice::~FxDevice(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxDevice *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
