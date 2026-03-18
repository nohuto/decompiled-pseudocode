/*
 * XREFs of ??1CGeometryGroup@@MEAA@XZ @ 0x180157C40
 * Callers:
 *     ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x18012B890 (--_ECGeometryGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18009EE70 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180151B50 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

void __fastcall CGeometryGroup::~CGeometryGroup(CGeometryGroup *this)
{
  CCyclicResourceListEntry *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CGeometryGroup::`vftable'{for `CGeometry'};
  v2 = (CGeometryGroup *)((char *)this + 176);
  *((_QWORD *)this + 22) = &CGeometryGroup::`vftable'{for `CCyclicResourceListEntry'};
  CGeometryGroup::UnRegisterNotifiers(this);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 27);
  if ( v3 )
    (**v3)(v3, 1LL);
  CCyclicResourceListEntry::~CCyclicResourceListEntry(v2);
  CGeometry::~CGeometry((struct CResource **)this);
}
