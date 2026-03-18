/*
 * XREFs of ??1CGeometryGroup@@MEAA@XZ @ 0x18011FA04
 * Callers:
 *     ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x1800F9340 (--_ECGeometryGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x180017CF8 (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801190A0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

void __fastcall CGeometryGroup::~CGeometryGroup(CGeometryGroup *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rsi

  *(_QWORD *)this = &CGeometryGroup::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 10) = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  CGeometryGroup::UnRegisterNotifiers(this);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 15);
  if ( v2 )
    (**v2)(*((_QWORD *)this + 15), 1LL);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CGeometryGroup *)((char *)this + 80));
  CGeometry::~CGeometry(this);
}
