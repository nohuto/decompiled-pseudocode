/*
 * XREFs of ??1CTranslateTransform3D@@MEAA@XZ @ 0x18000E580
 * Callers:
 *     ??_ECTranslateTransform3D@@MEAAPEAXI@Z @ 0x18000E450 (--_ECTranslateTransform3D@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform3D::~CTranslateTransform3D(CTranslateTransform3D *this)
{
  *(_QWORD *)this = &CTranslateTransform3D::`vftable'{for `CTransform3D'};
  *((_QWORD *)this + 13) = &CTranslateTransform3D::`vftable'{for `IExpressionSource'};
  CResource::~CResource(this);
}
