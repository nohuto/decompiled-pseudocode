/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x18011FCCC
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x1800F90F0 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x180017CF8 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180118FF0 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 10) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers((struct CResource **)this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CCombinedGeometry *)((char *)this + 80));
  CGeometry::~CGeometry(this);
}
