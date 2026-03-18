/*
 * XREFs of ??1CRotateTransform3D@@MEAA@XZ @ 0x18011E984
 * Callers:
 *     ??_GCRotateTransform3D@@MEAAPEAXI@Z @ 0x1800F9520 (--_GCRotateTransform3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRotateTransform3D::~CRotateTransform3D(CRotateTransform3D *this)
{
  *(_QWORD *)this = &CRotateTransform3D::`vftable'{for `CTransform3D'};
  *((_QWORD *)this + 13) = &CRotateTransform3D::`vftable'{for `IExpressionSource'};
  CResource::~CResource(this);
}
