/*
 * XREFs of ??_EFxWorkItem@@UEAAPEAXI@Z @ 0x1C0024270
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x1C002420C (--1FxWorkItem@@UEAA@XZ.c)
 */

FxWorkItem *__fastcall FxWorkItem::`vector deleting destructor'(FxWorkItem *this, unsigned int a2, unsigned int a3)
{
  char v3; // bl
  FxWorkItem *v5; // rcx

  v3 = a2;
  FxWorkItem::~FxWorkItem(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxWorkItem *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
