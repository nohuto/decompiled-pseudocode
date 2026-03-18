/*
 * XREFs of ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C0030360
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C0030480 (--1FxSystemWorkItem@@UEAA@XZ.c)
 */

FxSystemWorkItem *__fastcall FxSystemWorkItem::`scalar deleting destructor'(FxSystemWorkItem *this, char a2)
{
  FxSystemWorkItem *v4; // rcx

  FxSystemWorkItem::~FxSystemWorkItem(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxSystemWorkItem *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
