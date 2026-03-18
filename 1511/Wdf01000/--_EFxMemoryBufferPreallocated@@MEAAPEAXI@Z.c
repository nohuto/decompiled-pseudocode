/*
 * XREFs of ??_EFxMemoryBufferPreallocated@@MEAAPEAXI@Z @ 0x1C0035970
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxMemoryBufferPreallocated@@MEAA@XZ @ 0x1C00027C4 (--1FxMemoryBufferPreallocated@@MEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxMemoryBufferPreallocated *__fastcall FxMemoryBufferPreallocated::`vector deleting destructor'(
        FxMemoryBufferPreallocated *this,
        char a2)
{
  FxMemoryBufferPreallocated *v4; // rcx

  FxMemoryBufferPreallocated::~FxMemoryBufferPreallocated(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = (FxMemoryBufferPreallocated *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
