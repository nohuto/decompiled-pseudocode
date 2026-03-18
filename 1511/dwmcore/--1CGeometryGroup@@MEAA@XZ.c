/*
 * XREFs of ??1CGeometryGroup@@MEAA@XZ @ 0x18013546C
 * Callers:
 *     ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x180113400 (--_ECGeometryGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCyclicResourceListEntry@@IEAA@XZ @ 0x18006747C (--1CCyclicResourceListEntry@@IEAA@XZ.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x180130060 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

void __fastcall CGeometryGroup::~CGeometryGroup(CGeometryGroup *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rsi

  *(_QWORD *)this = &CGeometryGroup::`vftable'{for `CGeometry'};
  *((_QWORD *)this + 12) = &CGeometryGroup::`vftable'{for `CCyclicResourceListEntry'};
  CGeometryGroup::UnRegisterNotifiers(this);
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 17);
  if ( v2 )
    (**v2)(*((_QWORD *)this + 17), 1LL);
  CCyclicResourceListEntry::~CCyclicResourceListEntry((CGeometryGroup *)((char *)this + 96));
  CGeometry::~CGeometry(this);
}
