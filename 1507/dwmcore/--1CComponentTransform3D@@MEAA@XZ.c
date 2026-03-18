/*
 * XREFs of ??1CComponentTransform3D@@MEAA@XZ @ 0x18011EC70
 * Callers:
 *     ??_ECComponentTransform3D@@MEAAPEAXI@Z @ 0x1800F9208 (--_ECComponentTransform3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CComponentTransform3D::~CComponentTransform3D(CComponentTransform3D *this)
{
  CResource *v1; // rcx

  *(_QWORD *)this = &CComponentTransform3D::`vftable'{for `IExpressionSource'};
  v1 = (CComponentTransform3D *)((char *)this + 8);
  *(_QWORD *)v1 = &CComponentTransform3D::`vftable'{for `CTransform3D'};
  CResource::~CResource(v1);
}
