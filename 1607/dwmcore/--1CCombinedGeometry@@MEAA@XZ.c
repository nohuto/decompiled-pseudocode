/*
 * XREFs of ??1CCombinedGeometry@@MEAA@XZ @ 0x1800203C8
 * Callers:
 *     ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x1800201A0 (--_ECCombinedGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180020240 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18009EE70 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 */

void __fastcall CCombinedGeometry::~CCombinedGeometry(CCombinedGeometry *this)
{
  CCyclicResourceListEntry *v2; // rbx

  *(_QWORD *)this = &CCombinedGeometry::`vftable'{for `CGeometry'};
  v2 = (CCombinedGeometry *)((char *)this + 176);
  *((_QWORD *)this + 22) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CCombinedGeometry::UnRegisterNotifiers((struct CResource **)this);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v2);
  CGeometry::~CGeometry(this);
}
