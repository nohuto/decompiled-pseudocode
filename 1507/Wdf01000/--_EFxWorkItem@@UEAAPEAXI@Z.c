/*
 * XREFs of ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x1C001F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C001F744 (--1FxWorkItem@@UEAA@XZ.c)
 */

FxWorkItem *__fastcall FxWorkItem::`vector deleting destructor'(FxWorkItem *this, char a2)
{
  FxWorkItem *v4; // rcx

  FxWorkItem::~FxWorkItem(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxWorkItem *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
