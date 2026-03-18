/*
 * XREFs of ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x1C0035BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C001B738 (--1FxNonPagedObject@@UEAA@XZ.c)
 */

FxDefaultIrpHandler *__fastcall FxDmaSystemTransaction::`vector deleting destructor'(
        FxDefaultIrpHandler *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxDefaultIrpHandler *v5; // rcx

  v3 = a2;
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxDefaultIrpHandler *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
