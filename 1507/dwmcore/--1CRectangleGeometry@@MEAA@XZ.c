/*
 * XREFs of ??1CRectangleGeometry@@MEAA@XZ @ 0x1800175B4
 * Callers:
 *     ??_ECRectangleGeometry@@MEAAPEAXI@Z @ 0x180017624 (--_ECRectangleGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_ECRectangleShape@@UEAAPEAXI@Z @ 0x180078C90 (--_ECRectangleShape@@UEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CRectangleGeometry::~CRectangleGeometry(CRectangleGeometry *this)
{
  CRectangleShape *v1; // rbx
  CGeometry *v2; // rsi
  void *(__fastcall *v3)(CRectangleShape *__hidden, unsigned int); // rdi

  v1 = (CRectangleShape *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &CRectangleGeometry::`vftable'{for `IExpressionSource'};
  v2 = (CRectangleGeometry *)((char *)this + 8);
  *((_QWORD *)this + 1) = &CRectangleGeometry::`vftable'{for `CGeometry'};
  if ( v1 )
  {
    v3 = **(void *(__fastcall ***)(CRectangleShape *__hidden, unsigned int))v1;
    if ( v3 == CRectangleShape::`vector deleting destructor' )
      CRectangleShape::`vector deleting destructor'(v1, 1u);
    else
      v3(v1, 1u);
  }
  CGeometry::~CGeometry(v2);
}
