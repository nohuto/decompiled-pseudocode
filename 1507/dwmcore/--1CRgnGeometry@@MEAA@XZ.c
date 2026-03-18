/*
 * XREFs of ??1CRgnGeometry@@MEAA@XZ @ 0x18006FA64
 * Callers:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18006F8A0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18006F990 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18007885C (--1CRegionShape@@UEAA@XZ.c)
 */

void __fastcall CRgnGeometry::~CRgnGeometry(void **this)
{
  *this = &CRgnGeometry::`vftable';
  CRgnGeometry::UnRegisterNotifiers(this);
  CRegionShape::~CRegionShape((CRegionShape *)(this + 10));
  CGeometry::~CGeometry((CGeometry *)this);
}
