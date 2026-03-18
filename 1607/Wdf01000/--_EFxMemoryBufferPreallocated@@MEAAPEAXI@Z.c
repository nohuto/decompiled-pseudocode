/*
 * XREFs of ??_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z @ 0x1C003A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxMemoryBufferPreallocated@@MEAA@XZ @ 0x1C0011F54 (--1FxMemoryBufferPreallocated@@MEAA@XZ.c)
 */

FxMemoryBufferPreallocated *__fastcall FxMemoryBufferPreallocated::`vector deleting destructor'(
        FxMemoryBufferPreallocated *this,
        unsigned int a2,
        unsigned int a3)
{
  char v3; // bl
  FxMemoryBufferPreallocated *v5; // rcx

  v3 = a2;
  FxMemoryBufferPreallocated::~FxMemoryBufferPreallocated(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    v5 = (FxMemoryBufferPreallocated *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
