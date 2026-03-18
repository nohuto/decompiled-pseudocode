/*
 * XREFs of ??1CRgnGeometry@@MEAA@XZ @ 0x180064D78
 * Callers:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x180064AB0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004E154 (--1CRegionShape@@UEAA@XZ.c)
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x180064CD0 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 */

void __fastcall CRgnGeometry::~CRgnGeometry(void **this)
{
  *this = &CRgnGeometry::`vftable';
  CRgnGeometry::UnRegisterNotifiers(this);
  CRegionShape::~CRegionShape((CRegionShape *)(this + 12));
  CGeometry::~CGeometry((CGeometry *)this);
}
