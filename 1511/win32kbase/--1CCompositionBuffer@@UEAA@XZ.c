/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x1C003E6B4
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C003E52C (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C00E1320 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x1C003E62C (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003EA44 (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CCompositionBuffer::~CCompositionBuffer(CRegion **this)
{
  CRegion *v2; // rcx

  *this = (CRegion *)&CCompositionBuffer::`vftable';
  CCompositionBuffer::RemoveAllRealizations((CCompositionBuffer *)this);
  v2 = this[37];
  if ( v2 )
    CRegion::Release(v2);
}
