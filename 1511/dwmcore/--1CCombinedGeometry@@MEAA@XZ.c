/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x18001D0A8
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x18001CE90 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x18001D040 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18006747C (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 12) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers((struct CResource **)this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CCombinedGeometry *)((char *)this + 96));
  CGeometry::~CGeometry(this);
}
