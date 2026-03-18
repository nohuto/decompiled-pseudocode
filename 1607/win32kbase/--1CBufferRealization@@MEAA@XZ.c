/*
 * XREFs of ??1CBufferRealization@@MEAA@XZ @ 0x1C004B4B8
 * Callers:
 *     ??_ECBufferRealization@@MEAAPEAXI@Z @ 0x1C004B4F0 (--_ECBufferRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C001EBD4 (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CBufferRealization::~CBufferRealization(CBufferRealization *this)
{
  CRegion *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CBufferRealization::`vftable';
  v2 = (CRegion *)*((_QWORD *)this + 8);
  if ( v2 )
    CRegion::Release(v2);
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
    ObfDereferenceObject(v3);
}
