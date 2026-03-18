/*
 * XREFs of ??_EFxRequestMemory@@UEAAPEAXI@Z @ 0x1C007B390
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007B2FC (--1FxRequestMemory@@UEAA@XZ.c)
 */

FxRequestMemory *__fastcall FxRequestMemory::`vector deleting destructor'(
        FxRequestMemory *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxRequestMemory *v5; // rcx

  v3 = a2;
  FxRequestMemory::~FxRequestMemory(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxRequestMemory *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
