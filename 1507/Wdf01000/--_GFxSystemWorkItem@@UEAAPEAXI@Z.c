/*
 * XREFs of ??_GFxSystemWorkItem@@UEAAPEAXI@Z @ 0x1C000A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x1C000A278 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
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
