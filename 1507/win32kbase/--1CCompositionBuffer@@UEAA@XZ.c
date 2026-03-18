/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x1C004A160
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0049E18 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C00DF500 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x1C004A0B0 (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C004A4FC (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CCompositionBuffer::~CCompositionBuffer(CRegion **this)
{
  CRegion *v2; // rcx

  *this = (CRegion *)&CCompositionBuffer::`vftable';
  CCompositionBuffer::RemoveAllRealizations((CCompositionBuffer *)this);
  v2 = this[36];
  if ( v2 )
    CRegion::Release(v2);
}
