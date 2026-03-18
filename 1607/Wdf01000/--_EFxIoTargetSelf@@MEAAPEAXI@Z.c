/*
 * XREFs of ??_EFxIoTargetSelf@@MEAAPEAXI@Z @ 0x1C0084B40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxIoTarget@@MEAA@XZ @ 0x1C00836C8 (--1FxIoTarget@@MEAA@XZ.c)
 */

FxIoTargetSelf *__fastcall FxIoTargetSelf::`vector deleting destructor'(
        FxIoTargetSelf *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxIoTargetSelf *v5; // rcx

  v3 = a2;
  this->__vftable = (FxIoTargetSelf_vtbl *)&FxIoTargetSelf::`vftable';
  FxIoTarget::~FxIoTarget(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxIoTargetSelf *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
